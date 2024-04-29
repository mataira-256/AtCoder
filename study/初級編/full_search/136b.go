package main

import "fmt"

func main() {
	var N int
	var ans int

	fmt.Scanf("%d\n", &N)

	for i := 1; i <= N; i++ {
		if (1 <= i && i <= 9) ||
			(100 <= i && i <= 999) ||
			(10000 <= i && i <= 99999) {
			ans++
		}
	}
	fmt.Println(ans)
}
