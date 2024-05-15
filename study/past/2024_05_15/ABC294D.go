package main

import "fmt"

func main() {
	var (
		N     int
		Q     int
		ibent [500005][2]int
	)

	fmt.Scanf("%d %d\n", &N, &Q)
	for i := 0; i < Q; i++ {
		fmt.Scanf("%d", &ibent[i][0])
		ibent[i][1] = -1
		if ibent[i][0] == 2 {
			fmt.Scanf("%d", &ibent[i][1])
		}
		fmt.Scanln()
	}

	for i := 0; i < Q; i++ {
		fmt.Println(ibent[i])
	}
}
