package main

import "fmt"

func main() {
	var N int
	var ans int

	fmt.Scanf("%d\n", &N)
	for i := 105; i <= N; i += 2 {
		if countDivisor(i) == 8 {
			ans++
		}
	}

	fmt.Printf("%d\n", ans)
}

func countDivisor(num int) int {
	var divNum int = 1
	var count int

	for i := 2; i <= num; i++ {
		if num%i == 0 {
			num /= i
			count++
			i--
		} else {
			if count != 0 {
				divNum *= count + 1
				count = 0
			}
		}
	}
	if count != 0 {
		divNum *= count + 1
	}

	return divNum
}
