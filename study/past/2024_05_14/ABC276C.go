package main

import "fmt"

func main() {
	var (
		N int
		P [105]int
	)

	fmt.Scanf("%d\n", &N)
	for i := 0; i < N; i++ {
		fmt.Scanf("%d", &P[i])
	}
	fmt.Scanln()

	fmt.Println(P[:N])
}
