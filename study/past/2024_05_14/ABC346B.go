package main

import (
	"fmt"
	"strings"
)

func main() {
	var (
		W int
		B int
	)
	var S string = strings.Repeat("wbwbwwbwbwbw", 30)
	var ans bool = false

	fmt.Scanf("%d %d\n", &W, &B)

	for i := 0; i < 12; i++ {
		wCount := 0
		bCount := 0
		for j := 0; j < W+B; j++ {
			if S[i+j] == 'w' {
				wCount++
			} else {
				bCount++
			}
		}
		if wCount == W && bCount == B {
			ans = true
			break
		}
	}

	if ans {
		fmt.Println("Yes")
	} else {
		fmt.Println("No")
	}
}
