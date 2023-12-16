package main

import "fmt"

func main() {
	var N int
	var repuList [12]int

	fmt.Scanf("%d\n", &N)

	repuList[0] = 1
	for i := 1; i < 12; i++ {
		repuList[i] = repuList[i-1]*10 + 1
	}

	for i := 0; i < 12; i++ {
		for j := 0; j < i+1; j++ {
			for k := 0; k < j+1; k++ {
				N--
				if N == 0 {
					fmt.Printf("%d", repuList[i]+repuList[j]+repuList[k])
				}
			}
		}
	}
}
