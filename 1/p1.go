package main

import "fmt"

func main() {
	fmt.Println(sumkn(3, 1000) + sumkn(5, 1000) - sumkn(15, 1000))
}

func sumkn(k, n int) int {
	// closed form summation formula
	p := (n - 1) / k
	return (k * p * (p + 1)) / 2
}
