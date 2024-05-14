package main

import (
	"fmt"
	"math"
)

func main() {
	var (
		N int
		t [2005]int
		l [2005]float64
		r [2005]float64
	)
	var ans int

	fmt.Scanf("%d\n", &N)
	for i := 0; i < N; i++ {
		fmt.Scanf("%d %f %f\n", &t[i], &l[i], &r[i])
		// 端点を含まないのは処理しずらいから、+0.1なり-0.1なりして、やりやすくしたい
		if (t[i]-1)/2 == 1 {
			l[i] += 0.1
		}
		if t[i]%2 == 0 {
			r[i] -= 0.1
		}
	}

	for i := 0; i < N-1; i++ {
		for j := i + 1; j < N; j++ {
			if math.Max(l[i], l[j]) <= math.Min((r[i]), (r[j])) {
				ans++
			}
		}
	}

	fmt.Println(ans)
}
