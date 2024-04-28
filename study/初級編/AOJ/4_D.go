package main

import "fmt"

func main() {
	var n int
	var a [10010]int
	var max, min, sum int

	fmt.Scanf("%d\n", &n)
	for i := 0; i < n; i++ {
		fmt.Scanf("%d", &a[i])
		sum += a[i]
	}

	max, min = a[0], a[0]
	for i := 1; i < n; i++ {
		if max < a[i] {
			max = a[i]
		}
		if a[i] < min {
			min = a[i]
		}
	}
	fmt.Printf("%d %d %d\n", min, max, sum)
}
