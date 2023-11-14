angka = int(input("Input\n"))
hasil = input("\nOutput\n")

for i in range(1, 51):
    if i % angka == 0:
        print(hasil, end=" ")
    else:
        print(i, end=" ")

print("\n")