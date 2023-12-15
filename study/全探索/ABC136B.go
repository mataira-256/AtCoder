package main

import "fmt"

func main() {
	var N int
	var ans int

	fmt.Scanf("%d\n", &N)

	for i := 0; i <= N; i++ {
		if solve(i) {
			ans++
		}
	}

	fmt.Printf("%d\n", ans)
}

func solve(n int) bool {
	var digit int

	for n != 0 {
		n /= 10
		digit++
	}

	if digit%2 == 0 {
		return false
	}
	return true
}
