import math
A = float(input())
B = float(input())
C = float(input())
if A == 0.0:
    print("Impossivel calcular")
elif (math.pow(B, 2.0) - 4.0 * A * C) < 0:
    print("Impossivel calcular")
else:
    R1 = (-B + math.sqrt(math.pow(B, 2.0) - 4.0 * A * C)) / (2.0 *A)
    R2 = (-B - math.sqrt(math.pow(B, 2.0) - 4.0 * A * C)) / (2.0 *A)
    print(f"R1 = {R1:.5f}")
    print(f"R2 = {R2:.5f}")