def eve(code, pesan1):
    for i in range(len(code)):
        if code[i] == ' ' and pesan1[i] == ' ':
            pesan1[i] = ' '
        elif code[i] == pesan1[i]:
            pesan1[i] = '*'
        else:
            pesan1[i] = '#'

def main():

    print("Input")
    code = input().rstrip('\n')
    pesan1 = input().rstrip('\n')

    print("\nOutput")
    if len(code) != len(pesan1):
        print("Panjang kalimat berbeda, pesan palsu")
        return

    pesan1_list = list(pesan1)
    eve(code, pesan1_list)
    pesan1 = ''.join(pesan1_list)

    bintang = pesan1.count('*')
    pagar = pesan1.count('#')

    print(pesan1)
    print(f"* = {bintang}")
    print(f"# = {pagar}")

    if bintang >= pagar:
        print("Pesan Asli")
    else:
        print("Pesan Palsu")

if __name__ == "__main__":
    main()