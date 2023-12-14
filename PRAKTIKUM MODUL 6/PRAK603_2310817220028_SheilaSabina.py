def guru(a, b, kalia, kalib):
    for i in range(a):
        print(f"{kalia[i] * kalib[i]} ", end="")
    print()

def main():
    print("Input")
    a, b = map(int, input().split())

    if a != b:
        print("\nJumlah tidak sama")
        return

    kalia = list(map(int, input().split()))
    kalib = list(map(int, input().split()))

    print("\nOutput")
    guru(a, b, kalia, kalib)

if __name__ == "__main__":
    main()