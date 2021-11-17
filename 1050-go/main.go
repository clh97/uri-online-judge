package main

import (
	"fmt"
)

type TreeNode struct {
	Name  string
	Left  *TreeNode
	Right *TreeNode
}

func CreateNode(name string) (result *TreeNode) {
	if result == nil {
		result = new(TreeNode)
		result.Left = nil
		result.Right = nil
		result.Name = name
	}
	return result
}

func PrintTree(root *TreeNode) {
	if root == nil {
		fmt.Println("empty tree!")
		return
	}

	fmt.Printf("Name = %s\n", root.Name)
	fmt.Print("Left: ")
	PrintTree(root.Left)
	fmt.Print("Right: ")
	PrintTree(root.Right)
}

func FindAnswer(root *TreeNode, want string) *TreeNode {
	// fmt.Println("name -> ", root.Left.Name)
	if root.Left.Name == want {
		return root.Left
	} else if root.Right.Name == want {
		return root.Right
	}
	return nil
}

func main() {
	var r1 = CreateNode("vertebrado")
	var r2 = CreateNode("invertebrado")

	var c1a = CreateNode("ave")
	var c1b = CreateNode("mamifero")

	r1.Right = c1a
	r1.Left = c1b

	var c2a = CreateNode("inseto")
	var c2b = CreateNode("anelideo")

	r2.Right = c2a
	r2.Left = c2b

	var c3a = CreateNode("carnivoro")
	var c3b = CreateNode("onivoro")

	var c3c = CreateNode("onivoro")
	var c3d = CreateNode("herbivoro")

	var c3e = CreateNode("hematofago")
	var c3f = CreateNode("herbivoro")

	var c3g = CreateNode("hematofago")
	var c3h = CreateNode("onivoro")

	c1a.Right = c3a
	c1a.Left = c3b

	c1b.Right = c3c
	c1b.Left = c3d

	c2a.Right = c3e
	c2a.Left = c3f

	c2b.Right = c3g
	c2b.Left = c3h

	var d4a = CreateNode("aguia")
	var d4b = CreateNode("pomba")

	var d4c = CreateNode("homem")
	var d4d = CreateNode("vaca")

	var d4e = CreateNode("pulga")
	var d4f = CreateNode("lagarta")

	var d4g = CreateNode("sanguessuga")
	var d4h = CreateNode("minhoca")

	c3a.Left = d4a
	c3b.Left = d4b

	c3c.Left = d4c
	c3d.Left = d4d

	c3e.Left = d4e
	c3f.Left = d4f

	c3g.Left = d4g
	c3h.Left = d4h

	var A, B, C string
	fmt.Scanf("%s", &A)
	fmt.Scanf("%s", &B)
	fmt.Scanf("%s", &C)

	var firstNode *TreeNode
	var secondNode *TreeNode
	var thirdNode *TreeNode

	if r1.Name == A {
		firstNode = r1
	} else if r2.Name == A {
		firstNode = r2
	}

	secondNode = FindAnswer(firstNode, B)
	thirdNode = FindAnswer(secondNode, C)

	// fmt.Println("firstNode", firstNode)
	// fmt.Println("secondNode", secondNode)
	// fmt.Println("thirdNode", thirdNode)
	fmt.Println(thirdNode.Left.Name)

}
