package main

import "fmt"

func main() {
	var n, m int
	var A [105][105]int
	var b [105]int
	var c int

	fmt.Scanf("%d %d\n", &n, &m)
	for i := 0; i < n; i++ {
		for j := 0; j < m; j++ {
			fmt.Scanf("%d", &A[i][j])
		}
	}
	for i := 0; i < m; i++ {
		fmt.Scanf("%d\n", &b[i])
	}

	for i := 0; i < n; i++ {
		c = 0
		for j := 0; j < m; j++ {
			c += A[i][j] * b[j]
		}
		fmt.Printf("%d\n", c)
	}
}
