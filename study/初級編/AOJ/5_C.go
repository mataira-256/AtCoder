package main

import "fmt"

func main() {
	var H, W int

	fmt.Scanf("%d %d\n", &H, &W)
	for !(H == 0 && W == 0) {
		for i := 0; i < H; i++ {
			for j := 0; j < W; j++ {
				if (i+j)%2 == 0 {
					fmt.Printf("#")
				} else {
					fmt.Printf(".")
				}
			}
			fmt.Println()
		}
		fmt.Println()
		fmt.Scanf("%d %d\n", &H, &W)
	}
}
