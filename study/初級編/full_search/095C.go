package main

import "fmt"

func main() {
	var A, B, C, X, Y int
	var ans int

	fmt.Scanf("%d %d %d %d %d\n", &A, &B, &C, &X, &Y)

	/* Cは2の倍数枚買うから最初から値段を2倍しておく */
	C *= 2

	/* Aの購入数のほうが多くなるように値を入れ替える */
	if X < Y {
		A, B = B, A
		X, Y = Y, X
	}

	if C <= A {
		ans = C * X
	} else if C <= B || C <= A+B {
		ans = C*Y + A*(X-Y)
	} else {
		ans = A*X + B*Y
	}

	fmt.Printf("%d\n", ans)
}
