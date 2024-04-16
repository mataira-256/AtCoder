package main

import "fmt"

func main() {
	var pattern [4]rune = [4]rune{'S', 'H', 'C', 'D'}

	var n int
	var num [4][13]bool
	var inNum int
	var inChar rune
	var index int

	fmt.Scanf("%d\n", &n)
	for i := 0; i < n; i++ {
		fmt.Scanf("%c %d\n", &inChar, &inNum)
		index = 0
		for pattern[index] != inChar {
			index++
		}
		num[index][inNum-1] = true
	}

	for i := 0; i < 4; i++ {
		for j := 0; j < 13; j++ {
			if num[i][j] == false {
				fmt.Printf("%c %d\n", pattern[i], j+1)
			}
		}
	}

}
