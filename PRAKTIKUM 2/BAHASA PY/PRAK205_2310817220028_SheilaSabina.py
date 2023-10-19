import math

print("Input")
variabel = input().split()

tinggi, pythagoras = map(int, variabel)

alas = int(math.sqrt(pythagoras**2 - tinggi**2))
keliling = int(tinggi + pythagoras + alas)
luas = int(1 / 2 * alas * tinggi)

print("\nOutput")
print(f'Alas = {alas} cm')
print(f"Tinggi = {tinggi} cm")
print(f"Keliling = {keliling} cm")
print(f"Luas = {luas} cm^2")