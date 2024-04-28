package main

import (
	"bufio"
	"fmt"
	"os"
	"strings"
)

func main() {
	var W string
	var inStr string
	var ans int

	fmt.Scanf("%s\n", &W)
	W = " " + W + " "
	sc := bufio.NewScanner(os.Stdin)
	sc.Scan()
	inStr = sc.Text()
	for inStr != "END_OF_TEXT" {
		inStr = " " + inStr + " "
		inStr = strings.Replace(inStr, " ", "  ", -1)
		inStr = strings.ToLower(inStr)

		ans += strings.Count(inStr, W)

		sc.Scan()
		inStr = sc.Text()
	}
	fmt.Printf("%d\n", ans)
}
