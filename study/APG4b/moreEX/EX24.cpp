#include <bits/stdc++.h>
using namespace std;

struct Clock{
    int hour;
    int minute;
    int second;

    void set(int h, int m, int s){
        hour = h;
        minute = m;
        second = s;
    }

    string to_str(){
        string ret_str = "";

        if(hour < 10) ret_str += "0";
        ret_str += to_string(hour) + ":";
        
        if(minute < 10) ret_str += "0";
        ret_str += to_string(minute) + ":";
        
        if(second < 10) ret_str += "0";
        ret_str += to_string(second);

        return ret_str;
    }

    void shift(int diff_second){
        int m = 60;
        int h = m * 60;
        int d = h * 24;
        int shift_second = hour * h + minute * m + second + diff_second;// % d;    // n日+m秒引くという引数の場合、m秒引くという状態にしたい
                                                                                   // ってしたかったんだけど、入力の範囲的にないらしいですねごめんなさい
        if(shift_second < 0) shift_second = d + shift_second;   // 前日に行った場合の調整をしたい
        shift_second %= d;     // 翌日に行った場合の調整

        hour = shift_second / h;
        minute = (shift_second%h) / m;
        second = shift_second % m;

    }
};

// -------------------
// ここから先は変更しない
// -------------------

int main() {
  // 入力を受け取る
  int hour, minute, second;
  cin >> hour >> minute >> second;
  int diff_second;
  cin >> diff_second;

  // Clock構造体のオブジェクトを宣言
  Clock clock;

  // set関数を呼び出して時刻を設定する
  clock.set(hour, minute, second);

  // 時刻を出力
  cout << clock.to_str() << endl;

  // 時計を進める(戻す)
  clock.shift(diff_second);

  // 変更後の時刻を出力
  cout << clock.to_str() << endl;
}
