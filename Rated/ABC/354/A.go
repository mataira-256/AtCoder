package main

import (
	"fmt"
	"math"
)

func main() {
	var (
		H int
	)
	var ans int

	fmt.Scanf("%d\n", &H)

	for i := 0; true; i++ {
		if math.Pow(2, float64(i))-1 > float64(H) {
			ans = i
			break
		}
	}

	fmt.Println(ans)
}
