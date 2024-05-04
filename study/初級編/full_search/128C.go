package main

import "fmt"

func main() {
	var (
		N, M int
		k    [15]int
		s    [15][15]int
		p    [15]int
	)
	var bit [15]int
	var switchSum int
	var switchFlg bool
	var ans int

	fmt.Scanf("%d %d\n", &N, &M)
	for i := 0; i < M; i++ {
		fmt.Scanf("%d", &k[i])
		for j := 0; j < k[i]; j++ {
			fmt.Scanf("%d", &s[i][j])
		}
	}
	for i := 0; i < M; i++ {
		fmt.Scanf("%d", &p[i])
	}

	// bit全探索
	for i := 0; i < (1 << N); i++ {
		// bit変換
		for j := 0; j < N; j++ {
			bit[j+1] = 1 & (i >> j)
			// ↑スイッチ番号が1baseで入力されるから、それの調整
		}
		// 各電球を試す
		switchFlg = true
		for j := 0; j < M; j++ {
			switchSum = 0
			for l := 0; l < k[j]; l++ {
				switchSum += bit[s[j][l]]
			}
			if switchSum%2 != p[j] {
				switchFlg = false
				break
			}
		}
		if switchFlg {
			ans++
		}
	}

	fmt.Printf("%d\n", ans)
}
