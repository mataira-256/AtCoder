package main

import "fmt"

var A [5][5]int
var grid [5][5]int
var crane [5][2]int
var inIndex [5]int
var ansString [5]string

func main() {
	var (
		N int
	)

	fmt.Scanf("%d\n", &N) // 結局全部5らしいね
	for i := 0; i < N; i++ {
		fmt.Scanf("%d %d %d %d %d\n", &A[i][0], &A[i][1], &A[i][2], &A[i][3], &A[i][4])
	}

	for i := 0; i < N; i++ {
		for j := 0; j < N; j++ {
			grid[i][j] = -1
		}
		crane[i][1] = i
	}

	for i := 0; i < N; i++ {
		ansString[i] = "PRRRRQLLLLPRRRRQLLLLPRRRRQLLLLPRRRRQLLLLPRRRRQ"
	}

	for i := 0; i < N; i++ {
		fmt.Println(crane[i])
	}

	answer()
}

func answer() {
	for i := 0; i < 5; i++ {
		fmt.Println(ansString[i])
	}
}

func pick(n int) {
	ansString[n] += "P"
}

func release(n int) {
	ansString[n] += "Q" // 離すを表すQの英単語って何なん？
}

func up(n int) {
	ansString[n] += "U"
}

func down(n int) {
	ansString[n] += "D"
}

func left(n int) {
	ansString[n] += "L"
}

func right(n int) {
	ansString[n] += "R"
}

func stay(n int) {
	ansString[n] += "."
}

func boom(n int) {
	ansString[n] += "B"
}

func inbound() {
	for i := 0; i < 5; i++ {
		if grid[i][0] == -1 {
			grid[i][0] = A[i][inIndex[i]]
			inIndex[i]++
		}
	}
}

func outbound() {
	for i := 0; i < 5; i++ {
		grid[i][4] = -1
	}
}

func showGrid() {
	fmt.Println("---showGrid---")
	for i := 0; i < 5; i++ {
		for j := 0; j < 5; j++ {
			fmt.Printf("%2d ", grid[i][j])
		}
		fmt.Println()
	}
	fmt.Println("--------------")
}
