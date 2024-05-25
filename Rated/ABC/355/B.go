package main

import "fmt"

func main() {
	var (
		N, M int
		A, B [105]int
	)
	var C [205]int

	for i := 0; i < 205; i++ {
		C[i] = -1
	}

	fmt.Scanf("%d %d\n", &N, &M)
	for i := 0; i < N; i++ {
		fmt.Scanf("%d", &A[i])
		C[A[i]] = 1
	}
	for i := 0; i < M; i++ {
		fmt.Scanf("%d", &B[i])
		C[B[i]] = 0
	}

	var ok bool = false
	var before int = -1
	for i := 0; i < 205; i++ {
		if C[i] == -1 {
			continue
		} else if C[i] == 1 && before == 1 {
			ok = true
			break
		}
		before = C[i]
	}

	if ok {
		fmt.Println("Yes")
	} else {
		fmt.Println("No")
	}
}
