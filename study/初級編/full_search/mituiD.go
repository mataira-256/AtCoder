package main

import (
	"fmt"
)

func main() {
	var N int
	var S string
	var ans int

	fmt.Scanf("%d\n", &N)
	fmt.Scanf("%s\n", &S)

	fmt.Printf("%d\n", ans)
}

func iToR(in int) rune {
	return rune(in + 48)
}
