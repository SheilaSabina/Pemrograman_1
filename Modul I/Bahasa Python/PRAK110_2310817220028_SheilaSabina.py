import math

x = 5
y = 12
z = int(math.sqrt(y**2 + x**2))
a = x + y + z
b = int(1/2*x*y)

print(f"Diketahui :\nAlas = {x} cm\nTinggi = {y} cm\n")
print(f"Jawab : \nSisi A = {y} cm\nSisi B = {z} cm\nSisi C = {x} cm")
print(f"Keliling = {a} cm\nLuas = {b} cm²")