package main

import "fmt"

func main() {
	var N int
	var num int
	var max int
	var ans int = 1

	fmt.Scanf("%d\n", &N)

	for i := 1; i <= N; i++ {
		num = solve(i)
		if num > max {
			max = num
			ans = i
		}
	}

	fmt.Printf("%d\n", ans)
}

func solve(n int) int {
	var num int

	for n%2 == 0 && n != 0 {
		n /= 2
		num++
	}

	return num
}
