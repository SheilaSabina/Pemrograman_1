def create_matrix(rows, cols, nilai):
    matriks = []
    indeks = 0

    for i in range(rows):
        row = []
        for j in range(cols):
            row.append(nilai[indeks])
            indeks += 1
        matriks.append(row)

    return matriks

def print_matrix(matriks):
    for row in matriks:
        print(" ".join(map(str, row)))

print("Input")
rows, cols = map(int, input().split())
nilaimatriks = list(map(int, input().split()))

matriks = create_matrix(rows, cols, nilaimatriks)

print("\nOutput")
print_matrix(matriks)