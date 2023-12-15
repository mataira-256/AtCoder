package main

import "fmt"

func main() {
	var N, S, K int
	var P [110]int
	var Q [110]int
	var sum int

	fmt.Scanf("%d %d %d\n", &N, &S, &K)
	for i := 0; i < N; i++ {
		fmt.Scanf("%d %d\n", &P[i], &Q[i])
	}

	for i := 0; i < N; i++ {
		sum += P[i] * Q[i]
	}

	if sum < S {
		sum += K
	}

	fmt.Print(sum)
}
