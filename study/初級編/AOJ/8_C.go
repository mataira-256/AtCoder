package main

import (
	"bufio"
	"fmt"
	"os"
	"strings"
)

func main() {
	alphabet := [26]rune{'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm',
		'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'}
	alphabetNum := [26]int{}
	inStrings := ""

	sc := bufio.NewScanner(os.Stdin)
	for {
		if sc.Scan() == false {
			break
		}
		inStrings += sc.Text()
	}
	inStrings = strings.ToLower(inStrings)

	for _, tmp := range inStrings {
		if tmp >= 'a' && tmp <= 'z' {
			alphabetNum[tmp-'a']++
		}
	}

	for i := 0; i < 26; i++ {
		fmt.Printf("%c : %d\n", alphabet[i], alphabetNum[i])
	}
}
