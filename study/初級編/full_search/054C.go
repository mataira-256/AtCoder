package main

import "fmt"

func main() {
	var (
		N int
		M int
		a int
		b int
	)
	var side [10][10]int
	var ans int

	fmt.Scanf("%d %d\n", &N, &M)
	for i := 0; i < M; i++ {
		fmt.Scanf("%d %d\n", &a, &b)
		side[a-1][b-1] = 1
		side[b-1][a-1] = 1
	}

	per := []int{}
	for i := 0; i < N; i++ {
		per = append(per, i)
	}

	for i := 0; i < factorial(N-1); i++ {
		ok := true
		for j := 0; j < N-1; j++ {
			if side[per[j]][per[j+1]] != 1 {
				ok = false
				break
			}
		}

		if ok {
			ans++
		}
		per = nextPermutation(per, N)
	}

	fmt.Println(ans)
}

func factorial(x int) int {
	if x == 0 {
		return 1
	}
	return x * factorial(x-1)
}

func nextPermutation(x []int, n int) []int {
	var left, right int

	for i := n - 2; i >= 0; i-- {
		if x[i] < x[i+1] {
			left = i
			break
		}
	}
	for i := n - 1; i >= 0; i-- {
		if x[left] < x[i] {
			right = i
			break
		}
	}

	x[left], x[right] = x[right], x[left]

	for i := 0; i < (n-left)/2; i++ {
		x[left+1+i], x[n-1-i] = x[n-1-i], x[left+1+i]
	}

	return x
}
