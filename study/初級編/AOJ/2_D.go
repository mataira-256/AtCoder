package main

import "fmt"

func main() {
	var W, H, x, y, r int

	fmt.Scanf("%d %d %d %d %d\n", &W, &H, &x, &y, &r)

	if 0 <= x-r && x+r <= W && 0 <= y-r && y+r <= H {
		fmt.Println("Yes")
	} else {
		fmt.Println("No")
	}
}
