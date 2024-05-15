package main

import (
	"fmt"
	"math"
)

func main() {
	var (
		N int
		A int
	)
	var count [405]int
	var ans int

	fmt.Scanf("%d\n", &N)
	for i := 0; i < N; i++ {
		fmt.Scanf("%d", &A)
		count[A+200]++ // indexが負の値にならないようにしたい
	}
	fmt.Scanln()

	for i := 0; i < 400; i++ {
		if count[i] != 0 {
			for j := i + 1; j < 401; j++ {
				if count[j] != 0 {
					ans += int(math.Pow(float64(j-i), 2)) * count[i] * count[j]
				}
			}
		}
	}

	fmt.Println(ans)
}
