a, b = map (int, input('Input\n').split())

if a <= b:
    satu = a
    dua = b
else:
    satu = b
    dua = a

print("Output")
print(f"{int(satu)} {int(dua)}")