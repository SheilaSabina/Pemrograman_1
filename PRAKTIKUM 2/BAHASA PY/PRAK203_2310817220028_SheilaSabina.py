print("Input")
angka = input().split()

a, b, i, j, x, y = map(float, angka)

total = (a - b) * i / j - (x + y)

print("\nOutput")
print(f"{total:.3f}")