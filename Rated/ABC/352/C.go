package main

import "fmt"

func main() {
	var (
		N int
		A int
		B int
	)
	var diffMax int = 0

	var ans int

	fmt.Scanf("%d\n", &N)
	for i := 0; i < N; i++ {
		fmt.Scanf("%d %d\n", &A, &B)
		ans += A
		if B-A > diffMax {
			diffMax = B - A
		}
	}
	ans += diffMax

	fmt.Println(ans)
}
