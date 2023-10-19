print("Input")
variabel = input().split()

jari_jari, tinggi = map(int, variabel)

phi = 3.142857
volume = phi * (jari_jari**2) * tinggi
luas = 2 * phi * jari_jari * (jari_jari + tinggi)
keliling = 2 * phi * jari_jari

print("\nOutput")
print(f"Volume = {volume:.2f}")
print(f"Luas = {luas:.2f}")
print(f"Keliling = {keliling:.2f}")