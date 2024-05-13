package main

import "fmt"

func main() {
	var (
		N int
		A [200005]int
	)
	var ans int
	var ans2 [2][200005]int
	var pos [200005]int

	fmt.Scanf("%d\n", &N)
	for i := 1; i <= N; i++ {
		fmt.Scanf("%d", &A[i])
		pos[A[i]] = i
	}

	for i := 1; i <= N-1; i++ {
		if A[i] == i {
			continue
		}
		ans2[0][ans] = i
		ans2[1][ans] = pos[i]
		ans++
		A[pos[i]], pos[A[i]] = A[i], pos[i]
		A[i], pos[i] = i, i
	}

	fmt.Println(ans)
	for i := 0; i < ans; i++ {
		fmt.Printf("%d %d\n", ans2[0][i], ans2[1][i])
	}

}
