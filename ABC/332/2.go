package main

import "fmt"

func main() {
	var K, G, M int
	var G_ml, M_ml int

	fmt.Scanf("%d %d %d\n", &K, &G, &M)

	for i := 0; i < K; i++ {
		if G_ml == G {
			G_ml = 0
		} else if M_ml == 0 {
			M_ml = M
		} else {
			G_ml += M_ml
			M_ml = G_ml - G
			if M_ml < 0 {
				M_ml = 0
			}
			G_ml -= M_ml
		}
	}

	fmt.Printf("%d %d", G_ml, M_ml)
}
