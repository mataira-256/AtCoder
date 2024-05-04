package main

import (
	"fmt"
)

func main() {
	var (
		N, K int
		P    int
	)
	var PIndex [200005]int
	var max, min int
	var ans int

	fmt.Scanf("%d %d\n", &N, &K)
	for i := 1; i <= N; i++ {
		fmt.Scanf("%d", &P)
		PIndex[P-1] = i
	}

	ans = N
	for i := 0; i < N-K+1; i++ {
		max = PIndex[i]
		min = PIndex[i]
		for j := 0; j < K; j++ {
			max = max2(max, PIndex[i+j])
			min = min2(min, PIndex[i+j])
		}
		ans = min2(ans, max-min)
	}

	fmt.Println(ans)
}

func max2(a int, b int) int {
	if a > b {
		return a
	} else {
		return b
	}
}

func min2(a int, b int) int {
	if a < b {
		return a
	} else {
		return b
	}
}
