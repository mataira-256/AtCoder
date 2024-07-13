package main

import "fmt"

func main() {
	var (
		N int
		A [200005]int
	)
	var ball [200005]int

	fmt.Scanf("%d\n", &N)
	for i := 0; i < N; i++ {
		fmt.Scanf("%d", &A[i])
	}

	index := -1
	for i := 0; i < N; i++ {
		index++
		ball[index] = A[i]
		for {
			if index <= 0 || ball[index] != ball[index-1] {
				break
			} else {
				index--
				ball[index]++
			}
		}
	}

	fmt.Println(index + 1)
}
