# ALUNO: Joao Prates

# 2

'''F = int(input("quantos graus fahrenheit: "))
C1 = F - 32
C2 = C1 / 1.8

print(f"{C2:.2f} graus Celsius")'''

# 3

#4
'''
def fat(num):
    if num <=1:
        return 1
    return num * fat(num - 1)

def test_fat():
    assert fat(1) == 1
    assert fat(2) == 2
    assert fat(3) == 6
    assert fat(4) == 24
    assert fat(5) == 120

def testes():
    test_fat()

testes()
'''
'''


def ver_senha():
    senha = input("digite senha :")
    qtde = len(senha)
    
    if 5 < qtde < 10:
        return True
    return False

resultado = ver_senha()

if resultado:
    print("senha valida")
else:
    print("invalida")
'''
'''
def par(num):
    if num % 2 == 0:
        return True
    return False



def teste():
    assert par(6) == True
    assert par(5) == False

teste()
'''
def potencia(a, b):
    resultado = 1
    for _ in range(b):
        resultado *= a
    return resultado


a = 3
b = 2
print(f"{a} elevado a {b} é igual a {potencia(a, b)}")