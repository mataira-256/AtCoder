package main

import "fmt"

func main() {
	var m, f, r int

	fmt.Scanf("%d %d %d\n", &m, &f, &r)
	for !(m == -1 && f == -1 && r == -1) {
		if m == -1 || f == -1 {
			fmt.Println("F")
		} else if (m + f) >= 80 {
			fmt.Println("A")
		} else if (m + f) >= 65 {
			fmt.Println("B")
		} else if (m + f) >= 50 {
			fmt.Println("C")
		} else if (m + f) >= 30 {
			if r >= 50 {
				fmt.Println("C")
			} else {
				fmt.Println("D")
			}
		} else {
			fmt.Println("F")
		}
		fmt.Scanf("%d %d %d\n", &m, &f, &r)
	}
}
