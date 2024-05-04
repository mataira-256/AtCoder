package main

import (
	"fmt"
	"strconv"
	"strings"
)

func main() {
	var N int
	var S string
	var ans int

	fmt.Scanf("%d\n", &N)
	fmt.Scanf("%s\n", &S)

	S += "  "
	for i1 := 0; i1 < 10; i1++ {
		for j1, v1 := range S {
			if v1 == iToR(i1) {
				for i2 := 0; i2 < 10; i2++ {
					for j2, v2 := range S[j1+1:] {
						if v2 == iToR(i2) {
							for i3 := 0; i3 < 10; i3++ {
								if strings.Contains(S[j1+j2+2:], strconv.Itoa(i3)) {
									ans++
								}
							}
							break
						}
					}
				}
				break
			}
		}
	}

	fmt.Printf("%d\n", ans)
}

func iToR(in int) rune {
	return rune(in + 48)
}
