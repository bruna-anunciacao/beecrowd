a, b, c = input().split()
a = float(a)
b = float(b)
c = float(c)
resultA = (a * c) / 2
resultB = 3.14159 * c ** 2
resultC = ((a + b) * c) / 2
resultD = b ** 2
resultE = a * b

print(f'TRIANGULO: {resultA:.3f}')
print(f'CIRCULO: {resultB:.3f}')
print(f'TRAPEZIO: {resultC:.3f}')
print(f'QUADRADO: {resultD:.3f}')
print(f'RETANGULO: {resultE:.3f}')