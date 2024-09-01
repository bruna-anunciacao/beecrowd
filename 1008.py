number, hours = [int(input()) for _ in range(2)]
valuePerHour = round(float(input()), 2)
salary = valuePerHour * hours
print(f'NUMBER = {number}')
print(f'SALARY = U$ {salary:.2f}')