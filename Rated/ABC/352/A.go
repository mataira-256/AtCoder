package main

import "fmt"

func main() {
	var (
		N int
		X int
		Y int
		Z int
	)

	fmt.Scanf("%d %d %d %d\n", &N, &X, &Y, &Z)

	if (X < Z && Z < Y) || (X > Z && Z > Y) {
		fmt.Println("Yes")
	} else {
		fmt.Println("No")
	}
}
