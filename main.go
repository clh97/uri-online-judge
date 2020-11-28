package main

import (
	"bufio"
	"fmt"
	"os"
	"strconv"
	"strings"
)

type InputProduct struct {
	Code        int
	Qty         int
	SinglePrice float64
}

func main() {
	reader := bufio.NewReader(os.Stdin)
	productOneStr, _ := reader.ReadString('\n')
	productTwoStr, _ := reader.ReadString('\n')

	productOneTokens := strings.Split(productOneStr, " ")
	productTwoTokens := strings.Split(productTwoStr, " ")

	products := []InputProduct{}

	productOneCode, _ := strconv.Atoi(productOneTokens[0])
	productOneQty, _ := strconv.Atoi(productOneTokens[1])
	productOnePrice, _ := strconv.ParseFloat(strings.TrimSuffix(productOneTokens[2], "\n"), 32)
	productOnePrice = float64(productOnePrice)

	productOne := InputProduct{Code: productOneCode, Qty: productOneQty, SinglePrice: productOnePrice}

	productTwoCode, _ := strconv.Atoi(productTwoTokens[0])
	productTwoQty, _ := strconv.Atoi(productTwoTokens[1])
	productTwoPrice, _ := strconv.ParseFloat(strings.TrimSuffix(productTwoTokens[2], "\n"), 32)
	productTwoPrice = float64(productTwoPrice)

	productTwo := InputProduct{Code: productTwoCode, Qty: productTwoQty, SinglePrice: productTwoPrice}

	products = append(products, productOne)
	products = append(products, productTwo)

	var total float64

	for _, p := range products {
		total += p.SinglePrice * float64(p.Qty)
	}

	fmt.Printf("VALOR A PAGAR: R$ %.2f\n", total)
}
