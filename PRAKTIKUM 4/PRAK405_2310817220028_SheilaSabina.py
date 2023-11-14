s, e = map(int, input("Input\n").split())

angka = 0

for l in range(1, s + 1):
    row_angka = 0
    for a in range(1, l + 1):
        result = a * e
        print(f"({a} * {e}) = {result}", end="")
        if a != l:
            print(" + ", end="")
        row_angka += result
    print(f" = {row_angka}")
    angka += row_angka

print(angka)