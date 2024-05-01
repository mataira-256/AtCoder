func checkDigits(num int) int {
	var digit int

	for num != 0 {
		num /= 10
		digit++
	}
	return digit
}

func iToR(in int) rune {
	return rune(in + 48)
}

func rToI(in rune) int {
	return int(in) - 48
}