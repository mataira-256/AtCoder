package main

import "fmt"

func main() {
	var a, b int

	fmt.Scanf("%d %d\n", &a, &b)
	fmt.Printf("%d %d\n", a*b, (a+b)*2)
}
