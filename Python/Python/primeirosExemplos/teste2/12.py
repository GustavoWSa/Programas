class Transporte(object):
    def __init__(self,tipo,modelo):
        self.tipo=tipo
        self.modelo=modelo
class Terrestre(Transporte):
        def __init__(self,tipo,modelo,NumRodas,Ano):
            Transporte.__init__(self,tipo,modelo)
            self.NumRodas= NumRodas
            self.Ano= Ano
class Aquatico(Transporte):
        def __init__(self,tipo,modelo,Velocidade,Ano):
            Transporte.__init__(self,tipo, modelo)
            self.Velocidade= Velocidade
            self.Ano= Ano
transporte1= Terrestre("Terrestre","Gol",4,1980)
transporte2= Terrestre("Aéreo","Boeing 447",6,2005)