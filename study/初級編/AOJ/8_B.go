package main

import (
	"fmt"
)

func main() {
	var x string
	var ans int

	fmt.Scanf("%s\n", &x)
	for !(x == "0") {
		ans = 0
		for _, tmp := range x {
			ans += int(tmp) - '0'
		}
		fmt.Printf("%d\n", ans)
		fmt.Scanf("%s\n", &x)
	}
}
