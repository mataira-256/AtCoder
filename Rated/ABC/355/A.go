package main

import "fmt"

func main() {
	var (
		A, B int
	)

	fmt.Scanf("%d %d\n", &A, &B)

	if A == B {
		fmt.Println(-1)
	} else {
		fmt.Println(6 - A - B)
	}
}
