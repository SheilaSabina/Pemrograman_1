def biodata(tahun_lahir, nama, asal):
    tahun_sekarang = 2020
    umur = tahun_sekarang - tahun_lahir

    print(f"Perkenalkan Nama Saya: {nama}")
    print(f"Umur Saya: {umur}")
    print(f"Saya Adalah Angkatan: {tahun_sekarang}")
    print(f"Asal Saya dari: {asal}")

def main():
    tahun_lahir = int(input("Input\n"))
    nama = input()
    asal = input()

    print("\nOutput")
    biodata(tahun_lahir, nama, asal)

if __name__ == "__main__":
    main()