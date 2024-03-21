alunos = []
#classe
class Aluno:

    def __init__(self, ra: int, nome: str, nota: float) -> None:
        self._ra = max(0, ra)
        self._nome = nome
        self._nota = max(0, nota)

    @property
    def ra(self):
        return self._ra
    
    @ra.setter
    def ra(self, ra):
        if ra > 0:
            self._ra = ra

    @property
    def nome(self):
        return self._nome
    
    @nome.setter
    def nome(self, nome):
        self._nome = nome

    @property
    def nota(self):
        return self._nota
    
    @nota.setter
    def nota(self, nota):
        if nota >= 0:
            self._nota = nota

    def __repr__(self):
        return str(self.ra) + " - " + self.nome

#Função Arquivo

with open("Dados.txt", "r") as f:
    f.read()

'''def excluir():#está função por conta do arquivo q eu já havia criado virou um bololo de gato q le linhas identifica o ra calcula onde deve excluir e apaga, de vez em quando erra e exclui tudo que está abaixo
    with open("Dados.txt", "r") as f:
        linhas = f.readlines()

    aluno_existe = False
    with open("Dados.txt", "w") as w:
        escrever = True
        for linha in linhas:
            if "RA..................: " in linha and str(ra) in linha:
                aluno_existe = True
                escrever = False
            elif linha == "\n":
                escrever = True
                continue

            if escrever:
                w.write(linha)
            else:
                if linha == "\n":
                    escrever = True

    if not aluno_existe:
        print("Aluno não encontrado.")
    else:
        print(f"Aluno de RA: {ra} excluído com sucesso.")
        '''
'''def editar(): #está função juntei a função de excluir e salvar, exclui linhas onde possui o ra e salva outro em cima, porem está errada pois alem de corrigir o aluno cria outro igual
    with open("Dados.txt", "r") as f:
        linhas = f.readlines()

    aluno_existe = False
    with open("Dados.txt", "w") as w:
        escrever = True
        for linha in linhas:
            if "RA..................: " in linha and str(ra) in linha:
                aluno_existe = True
                escrever = False
            elif linha == "\n":
                escrever = True
                w.write(f"RA..................: {ra}\n")
                w.write(f"Aluno...............: {nome}\n")
                w.write(f"Nota................: {nota}\n\n")
                continue

            if escrever:
                w.write(linha)
            else:
                if linha == "\n":
                    escrever = True

    if not aluno_existe:
        print("Aluno não encontrado.")
    else:
        print(f"Aluno de RA: {ra} excluído com sucesso.")
'''
def salvar():#perfeita
    with open("Dados.txt", "a") as f:
        f.write(f"RA..................: {ra}\n")
        f.write(f"Aluno...............: {nome}\n")
        f.write(f"Nota................: {nota}\n\n")

def visualizar():#perfeita
    f = open("Dados.txt", "r")
    conteudo = f.read()
    print(conteudo)
#Função resto
def get_aluno(ra):#foi o professor
    for Aluno in alunos:
        if Aluno["ra"] == ra:
            return Aluno
    return None

def menu_principal():#foi o professor
    print("===== Menu Principal =====")
    print("=                        =")
    print("= 1 - Novo Aluno         =")
    print("= 2 - Editar Aluno       =")
    print("= 3 - Remover Aluno      =")
    print("= 4 - Visualizar Alunos  =")
    print("= 5 - Ver Qtde de Alunos =")
    print("= 6 - Ver Notas          =")
    print("=                        =")
    print("= 0 - Sair               =")
    print("==========================")
    

def get_opcao():#foi o professor
    opcoes_validas = ["0", "1", "2", "3","4"]
    opcao = input("Opção: ")
    while opcao not in opcoes_validas:
        opcao = input("Opção Invalida! Digite novamente: ")
    return opcao

while True:
    menu_principal()
    opcao = get_opcao()
    
    if opcao == "0":#ok
        break

    if opcao == "1":#ok
        print("==== Cadastro de Aluno====")
        ra = int(input("= Digite o RA [int]: "))
        while get_aluno(ra):
            ra = int(input("RA ja existente! Digite o RA [int]: "))
        nome = input("= Digite o nome: ")
        nota = float(input("= Digite a nota [float]: "))
        
        Aluno = {}
        Aluno["ra"] = ra
        Aluno["nome"] = nome
        Aluno["nota"] = nota

        alunos.append(Aluno)

        print(alunos)
        #salvar()

    if opcao == "2":#erro
        ra = int(input("= Digite o RA: "))
        Aluno = get_aluno(ra)
        while not Aluno:
            ra = int(input("Aluno não encontrado! Digite o RA: "))
            if ra == "0":
                break
            Aluno = get_aluno(ra)
        nome = input("= Digite o nome: ")
        nota = float(input("= Digite a nota [float]: "))
        
        Aluno = {}
        Aluno["ra"] = ra
        Aluno["nome"] = nome
        Aluno["nota"] = nota

        alunos.append(Aluno)
        print(Aluno)
       # editar()
    if opcao == "3":#depende
        ra = int(input("= Digite o RA: "))
        Aluno = get_aluno(ra)
        while not Aluno:
            ra = int(input("Aluno não encontrado! Digite o RA: "))
            if ra == "0":
                break
        
            Aluno = get_aluno(ra)
        #excluir()
        print(Aluno)
    if opcao == "4":#perfeito
       visualizar()
    
    if opcao == "5":#fazendo
        len(alunos)
       #sum?    sugestão carlos
       #possivel contar linhas em arquivo tb, menos eficiente porem não depende do programa continuar em execução
        