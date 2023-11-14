while True:
    print("\nInput")
    print("Pilih program")
    print("1. Penjumlahan")
    print("2. Pengurangan")
    print("3. Perkalian")
    print("4. Pembagian")
    print("5. Exit")
    angka = int(input("Masukkan Pilihan: "))

    if 1 <= angka <= 4:
        angka1 = float(input("Masukkan nilai pertama: "))
        angka2 = float(input("Masukkan nilai kedua: "))

        if angka == 1:
            hasil = angka1 + angka2
            print(f"Hasil Penjumlahan antara {angka1:.2f} dengan {angka2:.2f} adalah {hasil:.2f}")
        elif angka == 2:
            hasil = angka1 - angka2
            print(f"Hasil Pengurangan antara {angka1:.2f} dengan {angka2:.2f} adalah {hasil:.2f}")
        elif angka == 3:
            hasil = angka1 * angka2
            print(f"Hasil Perkalian antara {angka1:.2f} dengan {angka2:.2f} adalah {hasil:.2f}")
        elif angka == 4:
            if angka2 != 0:
                hasil = angka1 / angka2
                print(f"Hasil Pembagian antara {angka1:.2f} dengan {angka2:.2f} adalah {hasil:.2f}")
            else:
                print("Error! Pembagian dengan nol tidak diperbolehkan.")
    elif angka == 5:
        print("Terimakasih, telah menggunakan kalkulator Sheila Sabina")
        break
    else:
        print("Input Anda salah, silakan coba lagi")