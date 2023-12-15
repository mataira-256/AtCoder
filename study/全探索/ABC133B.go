package main

import "fmt"

func main() {
	var N, D int
	var ans int

	fmt.Scanf("%d %d\n", &N, &D)

	for i := 0; i < N; i++ {
		for j := 0; j < D; j++ {
			fmt.Scanf("%d", &X[i][j])
		}
		fmt.Scanf("\n")
	}

	fmt.Printf("%d\n", ans)
}
