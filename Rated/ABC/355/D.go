package main

import "fmt"

func main() {
	var (
		N    int
		l, r [100005]int
	)
	var ans int

	fmt.Scanf("%d\n", &N)
	for i := 0; i < N; i++ {
		fmt.Scanf("%d %d\n", &l[i], &r[i])
	}

	for i := 0; i < N-1; i++ {
		for j := i + 1; j < N; j++ {
			if r[i]-l[j] >= 0 {
				ans++
			}
		}
	}

	fmt.Println(ans)
}
