package main

import (
	"fmt"
	"math"
)

func main() {
	var (
		N int
		A [20]int
		x int
		y int
	)
	var testimony [20][20]int
	var ans int

	fmt.Scanf("%d\n", &N)
	for i := 0; i < N; i++ {
		for j := 0; j < N; j++ { // 証言がないところを-1で埋めておく
			testimony[i][j] = -1
		}
		fmt.Scanf("%d\n", &A[i])
		for j := 0; j < A[i]; j++ {
			fmt.Scanf("%d %d\n", &x, &y)
			testimony[i][x-1] = y // 証言先が1baseだから調整
		}
	}

	// bit全探索
	var bit [20]int
	for i := 0; i < (1 << N); i++ {
		// bit変換
		for j := 0; j < N; j++ {
			bit[j] = 1 & (i >> j)
		}

		ok := true
		for j := 0; j < N && ok; j++ {
			if bit[j] == 1 {
				for k := 0; k < N; k++ {
					if (testimony[j][k] != -1) && (testimony[j][k] != bit[k]) {
						ok = false
						break
					}
				}
			}
		}

		if ok {
			honestNum := 0
			for j := 0; j < N; j++ {
				honestNum += bit[j]
			}
			ans = int(math.Max(float64(ans), float64(honestNum)))
		}
	}

	fmt.Println(ans)
}
