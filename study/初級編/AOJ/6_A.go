package main

import "fmt"

func main() {
	var n int
	var a [105]int

	fmt.Scanf("%d\n", &n)
	for i := 0; i < n; i++ {
		fmt.Scanf("%d", &a[i])
	}

	for i := n - 1; i >= 1; i-- {
		fmt.Printf("%d ", a[i])
	}
	if 0 < n {
		fmt.Printf("%d", a[0])
	}
	fmt.Println()
}
