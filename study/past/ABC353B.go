package main

import "fmt"

func main() {
	var (
		N int
		K int
		A [105]int
	)
	var ans int = 1

	fmt.Scanf("%d %d\n", &N, &K)
	for i := 0; i < N; i++ {
		fmt.Scanf("%d", &A[i])
	}

	vacant := K
	for i := 0; i < N; i++ {
		if vacant-A[i] < 0 {
			vacant = K - A[i]
			ans++
		} else {
			vacant -= A[i]
		}
	}

	fmt.Println(ans)
}
