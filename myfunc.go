package main

import (
	"fmt"
	"math"
)

func main() {
	fmt.Printf("%d\n", getDigit(123, 4))
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

func iToR(in int) rune {
	return rune(in + 48)
}

func rToI(in rune) int {
	return int(in) - 48
}
