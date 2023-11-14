satu, dua = map(int, input("Input\n").split())

print("\nOutput")
if satu < dua:
    for s in range(satu, dua+1):
        print(s, satu+dua-s, end="-" if s < dua else "")
elif satu > dua:
    for s in range(satu, dua-1, -1):
        print(s, satu+dua-s, end="-" if s > dua else "")
else:
    print(satu, dua)