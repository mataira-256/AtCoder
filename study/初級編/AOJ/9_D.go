package main

import "fmt"

func main() {
	var str string
	var q int
	var order string
	var a, b int
	var p string

	fmt.Scanf("%s\n", &str)
	fmt.Scanf("%d\n", &q)
	for i := 0; i < q; i++ {
		fmt.Scanf("%s", &order)
		switch order {
		case "print":
			fmt.Scanf("%d %d\n", &a, &b)
			fmt.Printf("%s\n", str[a:b+1])
		case "reverse":
			fmt.Scanf("%d %d\n", &a, &b)

		case "replace":
			fmt.Scanf("%d %d %s\n", &a, &b, &p)
			str = str[:a] + p + str[b+1:]
		}
	}
}

func reverseStr(str string) string {
	runes := []rune(str)
	for i := 0; i < len(str); i++ {
		runes[i], runes[len(str)-i] = runes[len(str)-i], runes[i]
	}
	return string(runes)
}
