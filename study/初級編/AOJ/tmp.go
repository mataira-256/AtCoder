package main

import "fmt"

func main() {
	str := "12345"
	runes := []rune(str)
	for i := 0; i < len(str)/2; i++ {
		runes[i], runes[len(str)-i-1] = runes[len(str)-i-1], runes[i]
	}
	str = string(runes)

	fmt.Printf("%s", str)
}
