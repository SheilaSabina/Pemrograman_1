def reverse(num):
    number = 0
    while num > 0:
        number = number * 10 + num % 10
        num //= 10
    return number

def main():
    print("Input")
    A, B = map(int, input().split())

    A = reverse(A)
    B = reverse(B)

    C = A + B
    result = reverse(C)

    print("\nOutput")
    print(result)

if __name__ == "__main__":
    main()