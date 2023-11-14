angka = int(input("Input\n"))

print("\nOutput")

for s in range(1, angka + 1, 2):
    print(f"{s} ", end="")

print()

for s in range(angka, 1, -2):
    print(f"{s} ", end="")

print()