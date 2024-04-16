package main

import "fmt"

func main() {
	var a, b int
	var ans int
	var op rune

	fmt.Scanf("%d %c %d\n", &a, &op, &b)
	for op != '?' {
		switch op {
		case '+':
			ans = a + b
		case '-':
			ans = a - b
		case '*':
			ans = a * b
		case '/':
			ans = a / b
		}
		fmt.Println(ans)
		fmt.Scanf("%d %c %d\n", &a, &op, &b)
	}
}
