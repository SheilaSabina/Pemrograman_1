angka = int(input('Input\n'))

if angka == 0:
    print("\nOutput\nNol")
elif angka > 0 and angka < 10:
    print("\nOutput\nSatuan")
elif angka >= 10 and angka < 20:
    print("\nOutput\nBelasan")
elif angka >= 20 and angka < 100:
    print("\nOutput\nPuluhan")
else:
    print("\nOutput\nAnda Menginput Melebihi Limit Bilangan")