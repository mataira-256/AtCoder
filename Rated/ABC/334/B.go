package main

import "fmt"

func main() {
	var A, M, L, R int
	var ans int

	fmt.Scanf("%d %d %d %d", &A, &M, &L, &R)

	L = L + ((A-L)%M+M)%M
	R = R - ((R-A)%M+M)%M

	ans = (R-L)/M + 1

	fmt.Printf("%d\n", ans)

}
