print("Input")
s = int(input())

matrixA = []
print("Matriks A")
for i in range(s):
    row = list(map(int, input().split()))
    matrixA.append(row)

matrixB = []
print("Matriks B")
for i in range(s):
    row = list(map(int, input().split()))
    matrixB.append(row)

result = [[0 for _ in range(s)] for _ in range(s)]

for i in range(s):
    for j in range(s):
        for k in range(s):
            result[i][j] += matrixA[i][k] * matrixB[k][j]

print("\nOutput")
print("Matriks AXB")
for i in range(s):
    for j in range(s):
        print(result[i][j], end=" ")
    print()