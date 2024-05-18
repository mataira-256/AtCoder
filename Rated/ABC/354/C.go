package main

import (
	"fmt"
)

func main() {
	var (
		N int
		A [200005]int
		C [200005]int
	)
	var ansm int
	var ansi [200005]int

	fmt.Scanf("%d\n", &N)
	for i := 0; i < N; i++ {
		fmt.Scanf("%d %d\n", &A[i], &C[i])
	}

	fmt.Println()
}
