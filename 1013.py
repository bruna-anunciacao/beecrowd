a, b, c = input().split()
a = int(a)
b = int(b)
c = int(c)
def biggerThan(a, b, c):
    temporary = (a + b + abs(a - b)) / 2
    result = (temporary + c + abs(temporary - c)) / 2
    return int(result)

print(f'{biggerThan(a, b, c)} eh o maior')