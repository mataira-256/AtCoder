package main

import (
	"fmt"
	"math"
)

func main() {
	var a, b, C float64

	fmt.Scanf("%f %f %f\n", &a, &b, &C)

	S := 0.5 * a * b * math.Sin(C/180*math.Pi)
	L := a + b + math.Sqrt(math.Pow(a, 2)+math.Pow(b, 2)-(2*a*b*math.Cos(C/180*math.Pi)))
	h := S / a * 2
	fmt.Printf("%f\n", S)
	fmt.Printf("%f\n", L)
	fmt.Printf("%f\n", h)
}
