package main

import "fmt"

func main() {
	var (
		x int
		y int
	)
	var ans int

	fmt.Scanf("%d %d\n", &x, &y)

	for x <= y {
		x *= 2
		ans++
	}

	fmt.Println(ans)
}
