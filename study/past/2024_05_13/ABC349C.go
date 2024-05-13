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

	T1index := strings.Index(S, string(T[0]))
	if T1index != -1 {
		T2index := strings.Index(S[T1index+2:], string(T[1]))
		if T2index != -1 {
			if T[2] == 'X' || strings.Index(S[T2index+2:], string(T[2])) != -1 {
				ans = true
			}
		}
	}

	if ans {
		fmt.Println("Yes")
	} else {
		fmt.Println("No")
	}
}
