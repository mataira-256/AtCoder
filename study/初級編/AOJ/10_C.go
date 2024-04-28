package main

import (
	"fmt"
	"math"
)

func main() {
	var n int
	var s [1005]int
	var sum int
	var ave float64
	var variance float64

	fmt.Scanf("%d\n", &n)
	for !(n == 0) {
		variance = 0
		sum = 0
		ave = 0
		for i := 0; i < n; i++ {
			fmt.Scanf("%d", &s[i])
			sum += s[i]
		}
		ave = float64(sum) / float64(n)
		for i := 0; i < n; i++ {
			variance += math.Pow(float64(s[i])-ave, 2)
		}
		variance /= float64(n)

		fmt.Printf("%f\n", math.Sqrt(variance))

		fmt.Scanf("%d\n", &n)
	}
}
