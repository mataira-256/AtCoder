package main

import (
	"fmt"
)

func main() {
	var (
		A, B, C int
	)
	var mod int = 1000000007
	var ans int

	fmt.Scanf("%d %d %d\n", &A, &B, &C)

	ans = A * B % mod * C % mod
	fmt.Println(ans)
}
