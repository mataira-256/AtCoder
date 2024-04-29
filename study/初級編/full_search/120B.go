package main

import (
	"fmt"
	"math"
)

func main() {
	var A, B, K int
	var num int
	var count int

	fmt.Scanf("%d %d %d\n", &A, &B, &K)

	num = int(math.Min(float64(A), float64(B))) + 1

	for count != K {
		num--
		if A%num == 0 && B%num == 0 {
			count++
		}
	}

	fmt.Println(num)
}
