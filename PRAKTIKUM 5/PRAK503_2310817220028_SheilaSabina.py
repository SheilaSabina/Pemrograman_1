def maksimal(a, b):
    x = a
    if a < b:
        x = b
    return x

def minimal(a, b):
    y=a 
    if a > b:
        y = b
    return y

print("Input")
batas = 0
maks = -100000
minim = 100000
bilangan = int(input())
nilai = list(map(int,input().split()))

for i in range(batas, bilangan):
    maks = maksimal(maks, nilai[i])
    minim = minimal(minim, nilai[i])
    batas += 1

print("\nOutput")
print(f"{maks} {minim}")