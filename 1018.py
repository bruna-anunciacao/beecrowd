n = int(input())

def notes(n): 
    print(n)
    division = n // 100
    print(f'{division} nota(s) de R$ 100,00')
    n = n - (division * 100)
    division = n // 50
    print(f'{division} nota(s) de R$ 50,00')
    n = n - (division * 50)
    division = n // 20
    print(f'{division} nota(s) de R$ 20,00')
    n = n - (division * 20)
    division = n // 10
    print(f'{division} nota(s) de R$ 10,00')
    n = n - (division * 10)
    division = n // 5
    print(f'{division} nota(s) de R$ 5,00')
    n = n - (division * 5)
    division = n // 2
    print(f'{division} nota(s) de R$ 2,00')
    n = n - (division * 2)
    division = n // 1
    print(f'{division} nota(s) de R$ 1,00')
      
notes(n)