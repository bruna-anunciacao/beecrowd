name = input()
fixedSalary = round(float(input()), 2)
sellValue = round(float(input()), 2)

def percentage(percent, whole):
  return (percent * whole) / 100.0

result = fixedSalary + percentage(15, sellValue)
print(f'TOTAL = R$ {result:.2f}')