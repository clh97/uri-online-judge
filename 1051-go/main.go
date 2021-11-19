package main

import (
	"fmt"
)

func main() {
	var salary float64
	fmt.Scanf("%f", &salary)

	if salary <= 2000.0 {
		fmt.Println("Isento")
		return
	}

	if salary > 2000.0 && salary <= 3000.0 {
		fmt.Printf("R$ %.2f\n", (salary-2000.0)*0.08)
		return
	} else if salary > 3000.0 && salary <= 4500.0 {
		fmt.Printf("R$ %.2f\n", ((salary-3000.0)*0.18)+(1000*0.08))
		return
	} else {
		fmt.Printf("R$ %.2f\n", ((salary-4500.0)*0.28)+(1500*0.18)+(1000*0.08))
		return
	}
}
