package main

import "fmt"

func main() {

	left, right := 3, 7
	str := "0123456789"

	for i := left; i < right; i++ {
		fmt.Printf("%c", str[i])
	}
	// fmt.Println(str[3:7])
}
