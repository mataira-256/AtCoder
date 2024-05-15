package main

import "fmt"

func main() {
	var a int
	var b int
	var c int
	var s string

	fmt.Scanf("%d\n", &a)
	fmt.Scanf("%d %d\n", &b, &c)
	fmt.Scanf("%s\n", &s)

	fmt.Printf("%d %s\n", a+b+c, s)
}
