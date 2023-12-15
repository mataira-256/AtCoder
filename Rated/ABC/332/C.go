package main

import "fmt"

func main() {
	var N, M int
	var S string
	var M_calc int
	var T_calc, T_max int

	fmt.Scanf("%d %d\n", &N, &M)
	fmt.Scanf("%s\n", &S)

	M_calc = M
	for i := 0; i < N; i++ {
		if S[i] == '0' {
			M_calc = M

			T_calc = 0

		} else if S[i] == '1' {
			if M_calc > 0 {
				M_calc -= 1
			} else {
				T_calc += 1
			}
		} else {
			T_calc += 1
		}

		if T_calc > T_max {
			T_max = T_calc
		}
	}

	fmt.Printf("%d\n", T_max)
}
