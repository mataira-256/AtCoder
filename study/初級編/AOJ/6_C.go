package main

import "fmt"

func main() {
	var peopleNum [4][3][10]int
	var n int
	var b, f, r, v int

	fmt.Scanf("%d\n", &n)
	for i := 0; i < n; i++ {
		fmt.Scanf("%d %d %d %d\n", &b, &f, &r, &v)
		peopleNum[b-1][f-1][r-1] += v
	}

	for i := 0; i < 3; i++ {
		for j := 0; j < 3; j++ {
			for k := 0; k < 10; k++ {
				fmt.Printf(" %d", peopleNum[i][j][k])
			}
			fmt.Println()
		}
		fmt.Println("####################")
	}
	for j := 0; j < 3; j++ {
		for k := 0; k < 10; k++ {
			fmt.Printf(" %d", peopleNum[3][j][k])
		}
		fmt.Println()
	}
}
