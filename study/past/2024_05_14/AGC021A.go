package main

import (
	"fmt"
	"math"
)

func main() {
	var (
		N int
	)
	var ans int

	fmt.Scanf("%d\n", &N)

	for i := 1; i <= checkDigits(N); i++ {
		fmt.Print(getDigit(N, i))
	}
	fmt.Println()

	fmt.Println(ans)
}

func getDigit(num int, digit int) int {
	return (num / int(math.Pow(10, float64(digit-1)))) % 10
}

func checkDigits(num int) int {
	var digit int

	for num != 0 {
		num /= 10
		digit++
	}
	return digit
}
