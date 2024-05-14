package main

import "fmt"

func main() {
	var (
		N    int
		a, b int
		K    int
		P    [105]int
	)
	var ans bool = true

	fmt.Scanf("%d\n", &N)
	fmt.Scanf("%d %d\n", &a, &b)
	fmt.Scanf("%d\n", &K)
	for i := 1; i <= K; i++ {
		fmt.Scanf("%d", &P[i])
	}
	fmt.Scanln()
	P[0], P[K+1] = a, b

	for i := 0; i <= K+1; i++ {
		for j := 0; j < i; j++ {
			if P[i] == P[j] {
				ans = false
				break
			}
		}
		if !ans {
			break
		}
	}

	if ans {
		fmt.Println("YES")
	} else {
		fmt.Println("NO")
	}
}
