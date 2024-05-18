package main

import (
	"fmt"
	"strings"
)

func main() {
	var (
		N int
		S [105]string
		C int
	)
	var T int
	var winIndex int

	fmt.Scanf("%d\n", &N)
	for i := 0; i < N; i++ {
		fmt.Scanf("%s %d\n", &S[i], &C)
		T += C
	}

	winIndex = T % N

	for i := 0; i < N-1; i++ {
		for j := 0; j < N-i-1; j++ {
			if strings.Compare(S[j], S[j+1]) == 1 {
				S[j], S[j+1] = S[j+1], S[j]
			}
		}
	}

	fmt.Println(S[winIndex])
}
