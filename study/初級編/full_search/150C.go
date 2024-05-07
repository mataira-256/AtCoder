package main

import (
	"fmt"
	"math"
)

func main() {
	var (
		N int
		P [10]int
		Q [10]int
	)

	fmt.Scanf("%d\n", &N)
	for i := 0; i < N; i++ {
		fmt.Scanf("%d", &P[i])
	}
	// fmt.Scanln()
	for i := 0; i < N; i++ {
		fmt.Scanf("%d", &Q[i])
	}

	per := []int{}
	for i := 1; i <= N; i++ {
		per = append(per, i)
	}

	var PRank int = -1
	var QRank int = -1
	for i := 0; i < factorial(N); i++ {
		PEqual, QEqual := true, true
		for j := 0; j < N; j++ {
			if P[j] != per[j] {
				PEqual = false
			}
			if Q[j] != per[j] {
				QEqual = false
			}
		}
		if PRank == -1 && PEqual {
			PRank = i
		}
		if QRank == -1 && QEqual {
			QRank = i
		}

		per = nextPermutation(per, N)
	}

	fmt.Println(int(math.Abs(float64(PRank - QRank))))
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
