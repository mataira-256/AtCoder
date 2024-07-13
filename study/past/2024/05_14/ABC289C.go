package main

import "fmt"

func main() {
	var (
		N int
		M int
		C [15]int
		a [15][15]int
	)
	var ans int

	fmt.Scanf("%d %d\n", &N, &M)
	for i := 0; i < M; i++ {
		fmt.Scanf("%d\n", &C[i])
		for j := 0; j < C[i]; j++ {
			fmt.Scanf("%d", &a[i][j])
		}
		// fmt.Scanln()
	}

	bit := [15]int{}
	for i := 1; i < (1 << M); i++ {

		for j := 0; j < M; j++ {
			bit[j] = (i >> j) & 1
		}

		ok := true
		for j := 1; j <= N; j++ {
			numOk := false
			for k := 0; k < M; k++ {
				if bit[k] == 1 {
					for l := 0; l < C[k]; l++ {
						if a[k][l] == j {
							numOk = true
							break
						}
					}
				}
				if numOk {
					break
				}
			}
			if !numOk {
				ok = false
			}
		}
		if ok {
			ans++
		}

	}

	fmt.Println(ans)
}
