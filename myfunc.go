package main

import (
	"fmt"
	"math"
)

func main() {
	var a [5]int
	a[0] = 1
	a[1] = 2
	a[2] = 3
	a[3] = 4
	a[4] = 5

	fmt.Println(a[:])
	for i := 0; i < factorial(5)-1; i++ {
		b := nextPermutation(a[:], 5)
		fmt.Println(b[:])
	}

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

func factorial(x int) int {
	if x == 0 {
		return 1
	}
	return x * factorial(x-1)
}

func nextPermutation(x []int, n int) []int {
	var left, right int

	for i := n - 2; i >= 0; i-- {
		if x[i] < x[i+1] {
			left = i
			break
		}
	}
	for i := n - 1; i >= 0; i-- {
		if x[left] < x[i] {
			right = i
			break
		}
	}

	x[left], x[right] = x[right], x[left]

	for i := 0; i < (n-left)/2; i++ {
		x[left+1+i], x[n-1-i] = x[n-1-i], x[left+1+i]
	}

	return x
}
