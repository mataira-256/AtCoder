#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()
using Graph = vector<vector<int>>;

struct City{
    int num;
    int x;
    int y;
    int dist;
    bool is_grouped;
};

int dist(int x1, int y1, int x2, int y2){
    int x = x1 - x2;
    int y = y1 - y2;
    return x * x + y * y;
}

void c_sort(vector<City> &cities){
    sort(all(cities), [](const City& a, const City& b){
        return a.dist < b.dist;
    });
}

// union-findの考え方を踏襲してるけど、合ってるかわからん
bool check_closed(Graph G, int v, int t){
    bool ok = false;
    rep(i, G.at(v).size()){
        if(G.at(v).at(i) == t){
            ok = true;
            break;
        }
    }

    return ok;
}

vector<pair<int, int>> make_roads(vector<City> cities){
    // {重み, 頂点1, 頂点2}のedgesを作成し、ソート
    vector<vector<int>> edges;
    for(int i = 0; i+1 < cities.size(); i++){
        for(int j = i + 1; j < cities.size(); j++){
            vector<int> edge(3);
            edge.at(0) = dist(cities.at(i).x, cities.at(i).y,cities.at(j).x, cities.at(j).y);
            edge.at(1) = cities.at(i).num;
            edge.at(2) = cities.at(j).num;
            edges.push_back(edge);
        }
    }
    sort(all(edges));

    // 現在のグラフに、チェックしていない最小辺を足した場合閉路を作るか調べる。
    vector<pair<int, int>> roads;
    Graph G(800);
    rep(i, 800) G.at(i).push_back(i);
    int edge_num = 0;
    rep(i, edges.size()){
        int v = edges.at(i).at(1);
        int t = edges.at(i).at(2);
        if(!check_closed(G, v, t)){
            // 辺の数を+1
            edge_num++;
            // roadsに追加
            pair<int, int> road;
            road.first = v;
            road.second = t;
            roads.push_back(road);
            // Gに追加
            vector<int> tmp;
            set_union(all(G.at(v)), all(G.at(t)), back_inserter(tmp));
            rep(i, tmp.size()){
                G.at(tmp.at(i)) = tmp;
            }
        }
        if(edge_num >= cities.size()-1) break;
    }

    return roads;
}

vector<pair<int, int>> uranai(vector<City> cities){
    cout << "? " << cities.size() << " ";
    rep(i, cities.size()) cout << cities.at(i).num << " ";
    cout << endl;

    vector<pair<int, int>> roads;
    rep(i, cities.size()-1){
        pair<int, int> road;
        int c1, c2;
        cin >> c1 >> c2;
        road.first = c1;
        road.second = c2;
        roads.push_back(road);
    }

    return roads;
}

void ans(vector<vector<int>> group, vector<vector<pair<int, int>>> roads){
    cout << "!" << endl;
    rep(i, group.size()){
        rep(j, group.at(i).size()) cout << group.at(i).at(j) << " ";
        cout << endl;
        rep(j, roads.at(i).size()) cout << roads.at(i).at(j).first << " " << roads.at(i).at(j).second << endl;
    }
}

int main() {
    /* input */
    int N, M, Q, L, W;
    cin >> N >> M >> Q >> L >> W;
    vector<int> G(M);
    rep(i, M) cin >> G.at(i);
    vector<int> lx(N), rx(N), ly(N), ry(N);
    rep(i, N) cin >> lx.at(i) >> rx.at(i) >> ly.at(i) >> ry.at(i);

    /* solve */
    // 色々決める。座標は工夫のやり方がわからないので、あり得る範囲の中央
    vector<City> cities(N);
    rep(i, N){
        cities.at(i).num = i;
        cities.at(i).x = (lx.at(i) + rx.at(i)) / 2;
        cities.at(i).y = (ly.at(i) + ry.at(i)) / 2;
        cities.at(i).dist = dist(0, 0, cities.at(i).x, cities.at(i).y);
        cities.at(i).is_grouped = false;
    }

    // グループを決める
    vector<vector<int>> group(M);
    vector<pair<int, int>> sortedG(M); // {Gのサイズ, index}で、降順ソートする

    rep(i, M){
        sortedG.at(i).first = G.at(i);
        sortedG.at(i).second = i;
    }
    sort(all(sortedG));
    reverse(all(sortedG));

    c_sort(cities);
    rep(i, M){
        vector<int> g(sortedG.at(i).first);
        int base_x, base_y;
        // 基準点(g.at(0))を探す
        rep(j, N){
            if(cities.at(j).is_grouped) continue; // すでに見つけていたら無視
            g.at(0) = cities.at(j).num;
            base_x = cities.at(j).x;
            base_y = cities.at(j).y;
            cities.at(j).is_grouped = true;
            break;
        }
        // 基準点からの距離を新しくdistにしてソート
        rep(j, N) cities.at(j).dist = dist(base_x, base_y, cities.at(j).x, cities.at(j).y);
        c_sort(cities);
        // gの他の要素を入れていく
        for(int j = 1; j < sortedG.at(i).first; j++){
            rep(k, N){
                if(cities.at(k).is_grouped) continue; // すでに見つけていたら無視
                g.at(j) = cities.at(k).num;
                cities.at(k).is_grouped = true;
                break;
            }
        }

        group.at(sortedG.at(i).second) = g;

        // 一番近いグループ化済みの都市からの距離を基準に降順ソート
        rep(j, N){
            if(cities.at(j).is_grouped) continue;
            // グループ化済みの都市のdistを、jからの距離にして、昇順ソート
            rep(k, N){
                if(!cities.at(k).is_grouped) continue;
                cities.at(k).dist = dist(cities.at(j).x, cities.at(j).y, cities.at(k).x, cities.at(k).y);
            }
            c_sort(cities);
            // jのdistを、一番近いグループ化済みとの距離にする
            rep(k, N){
                if(!cities.at(k).is_grouped) continue;
                cities.at(j).dist = cities.at(k).dist;
                break;
            }
        }
        c_sort(cities);
        reverse(all(cities));
    }

    sort(all(cities), [](const City& a, const City& b){
        return a.num < b.num;
    });

    // グループごとに、道を作る場所を決めていく
    vector<vector<pair<int, int>>> roads(M);
    rep(i, M){
        vector<City> group_cities(sortedG.at(i).first);
        rep(j, sortedG.at(i).first){
            group_cities.at(j) = cities.at(group.at(sortedG.at(i).second).at(j));
        }
        if(Q > 0 && 2 <= sortedG.at(i).first && sortedG.at(i).first <= L){
            Q--;
            roads.at(sortedG.at(i).second) = uranai(group_cities);
        }else{
            roads.at(sortedG.at(i).second) = make_roads(group_cities);
        }
    }

    ans(group, roads);
}