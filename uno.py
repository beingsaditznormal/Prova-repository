def somma_pari(n):
    return sum(i for i in range(1, n+1) if i % 2 == 0)

if __name__ == "__main__":
    print("Hello, World!")
    risultato = somma_pari(100)
    print(f"La somma dei numeri pari da 1 a 100 è: {risultato}")
