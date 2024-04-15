package main

import (
	"fmt"
	"math"
)

func main() {
	const pi = math.Pi
	var r float64

	fmt.Scanf("%f\n", &r)

	fmt.Printf("%.6f %.6f\n", r*r*pi, 2*r*pi)
}
