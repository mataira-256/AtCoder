package main

import "fmt"

func main() {
	var n int
	var x [105]int
	var y [105]int

	fmt.Scanf("%d\n", &n)
	for i := 0; i < n; i++ {
		fmt.Scanf("%d", &x[i])
	}
	for i := 0; i < n; i++ {
		fmt.Scanf("%d", &y[i])
	}
}
