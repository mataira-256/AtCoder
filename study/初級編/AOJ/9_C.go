package main

import (
	"fmt"
	"strings"
)

func main() {
	var n int
	var tStr, hStr string
	var tPoint, hPoint int

	fmt.Scanf("%d\n", &n)
	for i := 0; i < n; i++ {
		fmt.Scanf("%s %s\n", &tStr, &hStr)
		switch strings.Compare(tStr, hStr) {
		case -1:
			hPoint += 3
		case 0:
			tPoint += 1
			hPoint += 1
		case 1:
			tPoint += 3
		}
	}
	fmt.Printf("%d %d\n", tPoint, hPoint)
}
