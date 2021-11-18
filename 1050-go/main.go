package main

import "fmt"

func main() {

	var selector int
	fmt.Scanf("%d", &selector)

	ddd := map[int]string{
		61: "Brasilia",
		71: "Salvador",
		11: "Sao Paulo",
		21: "Rio de Janeiro",
		32: "Juiz de Fora",
		19: "Campinas",
		27: "Vitoria",
		31: "Belo Horizonte",
	}

	if val, ok := ddd[selector]; ok {
		fmt.Println(val)
	} else {
		fmt.Println("DDD nao cadastrado")
	}
}
