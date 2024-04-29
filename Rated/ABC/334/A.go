package main

import "fmt"

func main() {
	var B, G int

	fmt.Scanf("%d %d\n", &B, &G)

	if B > G {
		fmt.Printf("Bat\n")
	} else {
		fmt.Printf("Glove\n")
	}
}
