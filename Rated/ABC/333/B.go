package main

import (
	"fmt"
)

func main() {
	var tmpString string = "ABCDE"
	var S, T string
	var Slen, Tlen int

	fmt.Scanf("%s\n", &S)
	fmt.Scanf("%s\n", &T)

	for i := 0; i < 5; i++ {
		if tmpString[i] == S[0] {
			Slen += i
		}
		if tmpString[i] == S[1] {
			Slen -= i
		}
		if tmpString[i] == T[0] {
			Tlen += i
		}
		if tmpString[i] == T[1] {
			Tlen -= i
		}
	}

	if abs(Slen) == abs(Tlen) {
		fmt.Printf("Yes\n")
	} else {
		fmt.Printf("No\n")
	}
}

func abs(n int) int {
	if n < 0 {
		return n * -1
	} else {
		return n
	}
}
