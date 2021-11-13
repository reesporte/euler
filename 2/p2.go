package main

import (
	"fmt"
	"math"
)

func main() {
	// every third index of the fibonacci sequence is even
	total := 0.0
	lastVal := 0.0
	for i := 0.0; lastVal < 4000000; i = i + 3 {
		total += lastVal
		lastVal = fib(i)
	}
	fmt.Println(int(total))
}

func fib(n float64) float64 {
	// given an index `n` of the fibonacci sequence, return the fibonacci number at
	// that index
	return (math.Pow(-1, 1-n)*math.Pow(math.Phi, -1*n) + math.Pow(math.Phi, n)) / math.Sqrt(5)
}
