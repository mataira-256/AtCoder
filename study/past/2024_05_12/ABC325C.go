package main

import "fmt"

func main() {
	var (
		H, W int
		S    string
	)
	var grid [1005][1005]int
	var ans int

	fmt.Scanf("%d %d\n", &H, &W)
	for i := 0; i < H; i++ {
		fmt.Scanf("%s\n", &S)
		for j := 0; j < W; j++ {
			if S[j:j+1] == "#" { // 文字列のまま計算するの嫌いだからintにする
				grid[i+2][j+2] = 1 // 上下左右に余裕持たせることによって、out of indexを防げる！やったぜ！
			}
		}
	}

	for i := 2; i < H+2; i++ {
		for j := 2; j < W+2; j++ {
			if grid[i][j] == 1 { // 1を見つけたら、それと繋がっている1を2に変換したい
				grid = dfs(i, j, grid)
				ans++
			}
		}
	}

	// for i := 1; i < H+1; i++ {
	// 	fmt.Println(grid[i][1 : W+1])
	// }

	fmt.Println(ans)
}

func dfs(y int, x int, grid [1005][1005]int) [1005][1005]int {
	grid[y][x] = 2
	change := true
	up, down, left, right := y, y, x, x // これ使って探索する範囲を絞る
	for change {                        // 変更されなかったら終わる
		change = false
		for i := up - 1; i <= down+1; i++ {
			for j := left - 1; j <= right+1; j++ {
				if grid[i][j] == 1 { //範囲内の1に隣接する2があるか探す
					adj2 := false
					for k := -1; k <= 1; k++ {
						for l := -1; l <= 1; l++ {
							if grid[i+k][j+l] == 2 {
								adj2 = true
								change = true
								grid[i][j] = 2
								up = minInt(up, i)
								down = maxInt(down, i)
								left = minInt(left, j)
								right = maxInt(right, j)
								break
							}
						}
						if adj2 {
							break
						}
					}
				}
			}
		}
	}

	return grid
}

func maxInt(a int, b int) int {
	if a > b {
		return a
	}
	return b
}

func minInt(a int, b int) int {
	if a < b {
		return a
	}
	return b
}
