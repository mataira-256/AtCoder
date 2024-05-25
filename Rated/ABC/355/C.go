package main

import (
	"fmt"
)

func main() {
	var (
		N int
		T int
		A [4000005]int
	)

	fmt.Scanf("%d %d\n", &N, &T)
	for i := 0; i < T; i++ {
		fmt.Scanf("%d", &A[i])
	}
}
