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

	left := 0
	for i := N - 2; i >= 0; i-- {
		if P[i] > P[i+1] {
			left = i
			break
		}
	}
	right := 0
	for i := N - 1; i >= 0; i-- {
		if P[i] < P[left] {
			right = i
			break
		}
	}

	P[left], P[right] = P[right], P[left]

	for i := 0; i < (N-left)/2; i++ {
		P[left+1+i], P[N-1-i] = P[N-1-i], P[left+1+i]
	}

	for i := 0; i < N; i++ {
		fmt.Printf("%d ", P[i])
	}
}
