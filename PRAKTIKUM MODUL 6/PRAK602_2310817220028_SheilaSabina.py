print("Input")
ruangan6 = int(input())
zetsuputih = list(map(int, input().split()))

for i in range(ruangan6):
    zetsuputih[i] *= (i + 1)

print("\nOutput")
for i in range(ruangan6):
    print(zetsuputih[i], end=" ")