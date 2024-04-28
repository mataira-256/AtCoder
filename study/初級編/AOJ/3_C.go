package main

import "fmt"

func main() {
	var x, y int

	fmt.Scanf("%d %d\n", &x, &y)
	for x != 0 || y != 0 {
		if x < y {
			fmt.Printf("%d %d\n", x, y)
		} else {
			fmt.Printf("%d %d\n", y, x)
		}
		fmt.Scanf("%d %d\n", &x, &y)
	}
}
