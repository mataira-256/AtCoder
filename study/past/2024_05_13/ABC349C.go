package main

import (
	"fmt"
	"strings"
)

func main() {
	var (
		S string
		T string
	)
	var ans bool = false

	fmt.Scanf("%s\n", &S)
	fmt.Scanf("%s\n", &T)

	S = strings.ToUpper(S)

	TIndex := [3]int{}
	TIndex[0] = strings.Index(S, string(T[0]))
	TIndex[1] = strings.Index(S[TIndex[0]+1:], string(T[1]))
	TIndex[2] = strings.Index(S[TIndex[0]+1+TIndex[1]+1:], string(T[2]))

	if TIndex[0] != -1 && TIndex[1] != -1 && (TIndex[2] != -1 || T[2] == 'X') {
		ans = true
	}

	if ans {
		fmt.Println("Yes")
	} else {
		fmt.Println("No")
	}
}
