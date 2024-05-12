package main

import "fmt"

func main() {
	var (
		N int
		H [105]int
	)
	var ans int = -1

	fmt.Scanf("%d\n", &N)
	for i := 0; i < N; i++ {
		fmt.Scanf("%d", &H[i])
	}

	for i := 1; i < N; i++ {
		if H[0] < H[i] {
			ans = i + 1
			break
		}
	}

	fmt.Println(ans)
}
