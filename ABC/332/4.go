package main

import "fmt"

func main() {
	var H, W int
	var A [6][6]int
	var B [6][6]int

	fmt.Scanf("%d %d\n", &H, &W)
	for i := 0; i < H; i++ {
		for j := 0; j < W; j++ {
			fmt.Scanf("%d", &A[i][j])
		}
		fmt.Scanf("\n")
	}
	for i := 0; i < H; i++ {
		for j := 0; j < W; j++ {
			fmt.Scanf("%d", &B[i][j])
		}
		fmt.Scanf("\n")
	}

}
