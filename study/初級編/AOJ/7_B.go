package main

import "fmt"

func main() {
	var n, x int
	var ans int

	fmt.Scanf("%d %d\n", &n, &x)
	for !(n == 0 && x == 0) {
		ans = 0
		for i := 1; i <= n; i++ {
			for j := i + 1; j <= n; j++ {
				for k := j + 1; k <= n; k++ {
					if i+j+k == x {
						ans++
					}
				}
			}
		}

		fmt.Printf("%d\n", ans)
		fmt.Scanf("%d %d\n", &n, &x)
	}
}
