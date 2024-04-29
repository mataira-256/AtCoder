package main

import (
	"fmt"
	"strings"
)

func main() {
	var String string = "ABCDEAEDCBA"
	var S, T string
	var isSshort, isTshort bool

	fmt.Scanf("%s\n", &S)
	fmt.Scanf("%s\n", &T)

	isSshort = strings.Contains(String, S)
	isTshort = strings.Contains(String, T)

	if isSshort == isTshort {
		fmt.Printf("Yes")
	} else {
		fmt.Printf("No")
	}
}
