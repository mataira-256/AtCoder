package main

import (
	"bufio"
	"fmt"
	"os"
	"strings"
)

func main() {
	var inString string

	sc := bufio.NewScanner(os.Stdin)
	sc.Scan()
	inString = sc.Text()

	for _, c := range inString {
		if c >= 'a' && c <= 'z' {
			fmt.Printf("%s", strings.ToUpper(string(c)))
		} else if c >= 'A' && c <= 'Z' {
			fmt.Printf("%s", strings.ToLower(string(c)))
		} else {
			fmt.Printf("%c", c)
		}
	}
	fmt.Println()
}
