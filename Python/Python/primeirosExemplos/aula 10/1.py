class Calculadora:
    def __init__(self,a,b):
        self.a=a
        self.b=b
    def soma(self):
        return self.a + self.b
    def subtracao(self):
        return self.a- self.b
    def multiplicacao(self):
        return self.a * self.b
    def divisao(self):
        return self.a/self.b
a=int(input("Digite o primeiro numero"))
b=int(input("Digite o segundo numero"))
c= Calculadora(a,b)
print(c.soma(),c.subtracao(),c.multiplicacao(),c.divisao())