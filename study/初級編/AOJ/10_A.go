package main

import (
	"fmt"
	"math"
)

func main() {
	var x1, y1, x2, y2 float64

	fmt.Scanf("%f %f %f %f\n", &x1, &y1, &x2, &y2)
	fmt.Printf("%f\n", math.Sqrt(math.Pow(x2-x1, 2)+math.Pow(y2-y1, 2)))
}
