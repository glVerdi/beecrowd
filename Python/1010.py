codigo1, quantidade1, preco1 = input().split()
codigo1 = int(codigo1)
quantidade1 = int(quantidade1)
preco1 = float(preco1)
codigo2, quantidade2, preco2 = input().split()
codigo2 = int(codigo2)
quantidade2 = int(quantidade2)
preco2 = float(preco2)
total = float((quantidade1 * preco1) + (quantidade2 * preco2))
print(f"VALOR A PAGAR: R$ {total:.2f}")