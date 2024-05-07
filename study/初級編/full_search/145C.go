package main

import (
	"fmt"
	"math"
)

func main() {
	var (
		N int
		x [10]int
		y [10]int
	)
	var ans float64

	fmt.Scanf("%d\n", &N)
	for i := 0; i < N; i++ {
		fmt.Scanf("%d %d\n", &x[i], &y[i])
	}

	var sumDistance float64
	permutation := []int{}
	for i := 0; i < N; i++ {
		permutation = append(permutation, i)
	}
	for i := 0; i < factorial(N); i++ {
		for j := 0; j < N-1; j++ {
			sumDistance += math.Sqrt(math.Pow(float64(x[permutation[j]]-x[permutation[j+1]]), 2) + math.Pow(float64(y[permutation[j]]-y[permutation[j+1]]), 2))
		}
		permutation = nextPermutation(permutation, N)
	}

	ans = sumDistance / float64(factorial(N))
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
