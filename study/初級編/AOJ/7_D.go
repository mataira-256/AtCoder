package main

import "fmt"

func main() {
	var n, m, l int
	var A [105][105]int
	var B [105][105]int
	var C [105][105]int

	fmt.Scanf("%d %d %d\n", &n, &m, &l)
	for i := 0; i < n; i++ {
		for j := 0; j < m; j++ {
			fmt.Scanf("%d", &A[i][j])
		}
	}
	for i := 0; i < m; i++ {
		for j := 0; j < l; j++ {
			fmt.Scanf("%d", &B[i][j])
		}
	}

	for i := 0; i < n; i++ {
		for j := 0; j < l; j++ {
			for k := 0; k < m; k++ {
				C[i][j] += A[i][k] * B[k][j]
			}
		}
	}

	for i := 0; i < n; i++ {
		for j := 0; j < l-1; j++ {
			fmt.Printf("%d ", C[i][j])
		}
		fmt.Printf("%d\n", C[i][l-1])
	}
}
