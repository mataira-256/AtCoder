package main

import (
	"fmt"
	"math"
)

func main() {
	var n int
	var x [105]float64
	var y [105]float64
	var p1, p2, p3, pInf float64

	fmt.Scanf("%d\n", &n)
	for i := 0; i < n; i++ {
		fmt.Scanf("%f", &x[i])
	}
	for i := 0; i < n; i++ {
		fmt.Scanf("%f", &y[i])
	}

	pInf = 0
	for i := 0; i < n; i++ {
		diff := math.Abs(x[i] - y[i])
		p1 += diff
		p2 += math.Pow(diff, 2)
		p3 += math.Pow(diff, 3)
		if pInf < diff {
			pInf = diff
		}
	}
	p2 = math.Sqrt(p2)
	p3 = math.Cbrt(p3)

	fmt.Printf("%f\n", p1)
	fmt.Printf("%f\n", p2)
	fmt.Printf("%f\n", p3)
	fmt.Printf("%f\n", pInf)
}
