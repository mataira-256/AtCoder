package main

import "fmt"

func main() {
	var (
		N     int
		Q     int
		event [500005][2]int
	)
	var last int = 1
	var min int
	var called [500005]int
	var count3 int
	var ans [500005]int

	fmt.Scanf("%d %d\n", &N, &Q)
	for i := 0; i < Q; i++ {
		fmt.Scanf("%d", &event[i][0])
		if event[i][0] == 2 {
			fmt.Scanf("%d", &event[i][1])
		}
	}

	for i := 0; i < Q; i++ {
		switch event[i][0] {
		case 1:
			called[last-1] = last
			last++
		case 2:
			called[event[i][1]-1] = 0
		case 3:
			for called[min] == 0 {
				min++
			}
			ans[count3] = called[min]
			count3++
		}
	}

	for i := 0; i < count3; i++ {
		fmt.Println(ans[i])
	}
}
