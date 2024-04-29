package main

import (
	"fmt"
	"strings"
)

func main() {
	var N int
	var S string
	var count int
	var isReplace bool = true

	fmt.Scanf("%d\n", &N)
	fmt.Scanf("%s\n", &S)

	for isReplace {
		isReplace = false
		if S != strings.Replace(S, "ABC", "", 1) {
			S = strings.Replace(S, "ABC", "", 1)
			count++
			isReplace = true
		}
	}

	fmt.Printf("%d\n", count)
}
