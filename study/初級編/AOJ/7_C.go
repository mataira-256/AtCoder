package main

import "fmt"

func main() {
	var r, c int
	var num [105][105]int

	fmt.Scanf("%d %d\n", &r, &c)
	for i := 0; i < r; i++ {
		for j := 0; j < c; j++ {
			fmt.Scanf("%d", &num[i][j])
		}
	}

	for i := 0; i < r+1; i++ {
		for j := 0; j < c; j++ {
			fmt.Printf("%d ", num[i][j])
			num[i][c] += num[i][j]
			num[r][j] += num[i][j]
		}
		fmt.Printf("%d\n", num[i][c])
	}
}
