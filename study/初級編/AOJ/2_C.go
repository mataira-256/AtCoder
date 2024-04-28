package main

import "fmt"

func main() {
	var a, b, c int
	var tmp int

	fmt.Scanf("%d %d %d\n", &a, &b, &c)

	if a > b {
		tmp = a
		a = b
		b = tmp
	}
	if b > c {
		tmp = b
		b = c
		c = tmp
	}
	if a > b {
		tmp = a
		a = b
		b = tmp
	}

	fmt.Printf("%d %d %d\n", a, b, c)
}
