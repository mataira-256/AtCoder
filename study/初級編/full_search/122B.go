package main

import (
	"fmt"
	"math"
)

func main() {
	var S string
	var count int
	var max int = 0

	fmt.Scanf("%s\n", &S)

	for _, v := range S {
		if v == 'A' || v == 'C' || v == 'G' || v == 'T' {
			count++
		} else {
			max = int(math.Max(float64(count), float64(max)))
			count = 0
		}
	}
	max = int(math.Max(float64(count), float64(max)))

	fmt.Printf("%d\n", max)
}
