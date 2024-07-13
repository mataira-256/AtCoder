package main

import (
	"fmt"
)

func main() {
	var (
		N int
		A [200005]int
	)
	var cumSum [200005]int
	var ans int

	cumSum[0] = 0
	fmt.Scanf("%d\n", &N)
	for i := 0; i < N; i++ {
		fmt.Scanf("%d", &A[i])
		cumSum[i+1] = cumSum[i] + A[i]
	}
	fmt.Scanln()

	const mod = 1000000007
	for i := 0; i < N; i++ {
		sum := (cumSum[N] - cumSum[i+1]) % mod
		ans += A[i] * sum
		ans %= mod
	}

	fmt.Println(ans)
}
