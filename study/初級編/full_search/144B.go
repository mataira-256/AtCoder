package main

import "fmt"

func main() {
	var N int

	fmt.Scanf("%d\n", &N)

	for i := 1; i < 10; i++ {
		if N%i == 0 && N/i < 10 && i*(N/i) == N {
			fmt.Printf("Yes\n")
			return
		}
	}

	fmt.Printf("No\n")
}
