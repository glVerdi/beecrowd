import math
PI = 3.14159
A, B, C = map(float, input().split())
areaTri = (A * C) / 2
areaCir = PI * pow(C, 2.0)
areaTra = (A + B) / 2 * C
areaQua = (B * B)
areaRe = (A * B)
print(f"TRIANGULO: {areaTri:.3f}")
print(f"CIRCULO: {areaCir:.3f}")
print(f"TRAPEZIO: {areaTra:.3f}")
print(f"QUADRADO: {areaQua:.3f}")
print(f"RETANGULO: {areaRe:.3f}")