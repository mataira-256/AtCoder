package main

import "fmt"

func main() {
	var (
		N int
		A [100005]int
	)
	var ans int

	fmt.Scanf("%d\n", &N)
	for i := 0; i < N; i++ {
		fmt.Scanf("%d", &A)
	}

	fmt.Println(ans)
}
