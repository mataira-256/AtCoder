package main

import "fmt"

func main() {
	var a, b int
	fmt.Scanf("%d %d\n", &a, &b)

	fmt.Printf("%d %d %.5f", a/b, a%b, float64(a)/float64(b))
}
