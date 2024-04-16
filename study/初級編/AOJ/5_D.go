package main

import "fmt"

func main() {
	var n int
	var tmp int

	fmt.Scanf("%d\n", &n)
	for i := 3; i <= n; i++ {
		if i%3 == 0 {
			fmt.Printf("%d ", i)
			continue
		}
		tmp = i
		for tmp != 0 {
			if tmp%10 == 3 {
				fmt.Printf("%d ", i)
				break
			}
			tmp /= 10
		}
	}
	fmt.Println()
}
