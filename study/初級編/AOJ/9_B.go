package main

import (
	"fmt"
)

func main() {
	var inStr string
	var m int
	var h int

	fmt.Scanf("%s\n", &inStr)
	for !(inStr == "-") {
		fmt.Scanf("%d\n", &m)
		for i := 0; i < m; i++ {
			fmt.Scanf("%d\n", &h)
			inStr = inStr[h:] + inStr[:h]
		}
		fmt.Printf("%s\n", inStr)
		fmt.Scanf("%s\n", &inStr)
	}
}
