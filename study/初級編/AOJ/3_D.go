package main

import "fmt"

func main() {
	var a, b, c int
	var numCount int

	fmt.Scanf("%d %d %d\n", &a, &b, &c)

	for i := a; i <= b; i++ {
		if c%i == 0 {
			numCount++
		}
	}

	fmt.Println(numCount)

}
