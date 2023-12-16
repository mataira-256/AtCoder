package main

import (
	"fmt"
	"math"
)

func main() {
	var N, D int
	var X [20][20]int
	var ans int
	var sum float64

	fmt.Scanf("%d %d\n", &N, &D)

	for i := 0; i < N; i++ {
		for j := 0; j < D; j++ {
			fmt.Scanf("%d", &X[i][j])
		}
		fmt.Scanf("\n")
	}

	for i := 0; i < N; i++ {
		for j := i + 1; j < N; j++ {
			sum = 0
			for k := 0; k < D; k++ {
				sum += math.Pow(float64(X[i][k]-X[j][k]), 2)
			}
			if math.Mod(math.Sqrt(sum), 1) == 0 {
				ans++
			}
		}
	}

	fmt.Printf("%d\n", ans)
}
