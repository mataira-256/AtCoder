package main

import (
	"fmt"
	"math"
)

func main() {
	var N int
	var ans int

	fmt.Scanf("%d\n", &N)

	for i := int(math.Sqrt(float64(N))); i >= 1; i-- {
		if N%i == 0 && i*(N/i) == N {
			ans = checkDigits(N / i)
			break
		}
	}

	fmt.Printf("%d\n", ans)
}

func checkDigits(num int) int {
	var digit int

	for num != 0 {
		num /= 10
		digit++
	}
	return digit
}
