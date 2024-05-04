package main

import "fmt"

func main() {
	var (
		S string
		T string
	)
	var SIndex int = 0

	fmt.Scanf("%s\n", &S)
	fmt.Scanf("%s\n", &T)

	for i, v := range T {
		if v == rune(S[SIndex]) {
			fmt.Printf("%d ", i+1)
			SIndex++
		}
	}
}
