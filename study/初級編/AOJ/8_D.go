package main

import (
	"fmt"
	"strings"
)

func main() {
	var s string
	var p string
	var replaceS string

	fmt.Scanf("%s\n", &s)
	fmt.Scanf("%s\n", &p)
	s += s

	replaceS = strings.Replace(s, p, "", 1)

	if replaceS != s {
		fmt.Println("Yes")
	} else {
		fmt.Println("No")
	}
}
