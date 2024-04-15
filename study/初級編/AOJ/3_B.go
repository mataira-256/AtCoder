package main

import "fmt"

func main() {
	var x int

	fmt.Scanf("%d\n", &x)
	for i := 0; x != 0; i++ {
		fmt.Printf("Case %d: %d\n", i+1, x)
		fmt.Scanf("%d\n", &x)
	}
}
