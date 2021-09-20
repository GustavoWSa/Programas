// 	Busca Sequencial e Binária
// 	1 - Qual é o efeito da ordenação antes das buscas sequencial e binária? Faz diferença? de que forma? Não faz?
// 	2 - Qual função demora mais(compara mais), a busca sequencial ou a busca binária? Por que?
// 	3 - Explique a lógica das buscas sequencial e binária linha a linha levando em consideração,
//	    os seus dados de entrada conforme cada grupo abaixo.
// 			Grupos											valor da pesquisa
//												valor	 valor	grupos 	grupos 
//				  								inicial	 final	ímpares pares
// grupo1 e 2   - 0,1,2,3,4,5,6,7,8,9				0	   9	1	 	5 	
// grupo3 e 4   - 10,11,12,13,14,15,16,17,18,19		10	  19	12		17
// grupo5 e 6   - 20,21,22,23,24,25,26,27,28,29		20	  29	23		28
// grupo7 e 8   - 30,31,32,33,34,35,36,37,38,39		30	  39	37		32
// grupo9 e 10  - 40,41,42,43,44,45,46,47,48,49		40	  49	46		41
// grupo11 e 12 - 50,51,52,53,54,55,56,57,58,59		50	  59	54		59
// grupo13 e 14 - 60,61,62,63,64,65,66,67,68,69		60    69    65		60
// grupo15 e 16 - 70,71,72,73,74,75,76,77,78,79		70	  79	78		73
// grupo17 e 18 - 80,81,82,83,84,85,86,87,88,89		80	  89	89		84
// grupo19 - 20 - 90,91,92,93,94,95,96,97,98,99		90	  99	90		95
//

#include <iostream>
#include <locale.h> 	//necessário para usar setlocale 
using namespace std;
const int nreg=100;		// nreg = número de registros
struct alunos {			// Declara o registro
		int matric;
		string nome;
};
struct alunos reg_alu[nreg];

void ordenar();

void busca_sequencial(int matricula, int valini, int valfim);

void busca_binaria(int matricula, int valini, int valfim);

void mostrar_registros(int valini, int valfim);

int main() {
	setlocale(LC_ALL, "Portuguese");
	int i;
	for (i=0; i<nreg; i++){						// Atribui registros
		reg_alu[i].matric 	= nreg-1-i;
		reg_alu[i].nome 	= "Aluno "; 
	}

	cout << "\n\t Registros ANTES da Ordenacao\n" << endl;
	mostrar_registros(20,29);	// Mostrar antes da ordenação. 1º parâmetro valor inicial 2º parâmetro valor final
	cout << endl << endl;

	ordenar();

	cout << "\n\t Registros DEPOIS da Ordenacao\n" << endl;
	mostrar_registros(20,29);	// Mostrar depois da ordenação. 1º parâmetro valor inicial 2º parâmetro valor final
	cout << endl << endl;

// O valor do seu grupo deve ser colocado no lugar do ?, ?, ? e deve ser o mesmo todas as buscas, 
// sequencial e binária. O os parâmetros são respectivamente por grupo: valor pesquisado, valor inicial e valor final.

	busca_sequencial(23,20,29);					
	busca_binaria(23,20,29);						
	
	return 0;

} // Fim de main()

void ordenar(){								//	Ordenando 
int auxmatric;
string auxnome;
	
for(int l=0; l<nreg-1; l++) { 			// l = posições fixas
	for (int c=l+1; c<nreg; c++) {    	// c = posições sucessoras a posição l
		if (reg_alu[l].matric > reg_alu[c].matric){
			auxmatric	 		= 	reg_alu[l].matric;
			reg_alu[l].matric 	= 	reg_alu[c].matric;
			reg_alu[c].matric 	= 	auxmatric;
			auxnome		 		= 	reg_alu[l].nome;
			reg_alu[l].nome 	= 	reg_alu[c].nome;
			reg_alu[c].nome 	= 	auxnome;
		}
		
	}
}	
};

void busca_sequencial(int matricula, int valini, int valfim){		// valini = valor inicial da busca
	int i = valini, n=0;														// valfim = valor final da busca
	int encontrado = 0; 					 		// falso
	while (i <= valfim && !encontrado) {
		if (reg_alu[i].matric == matricula) {		// Comparação
			encontrado = 1; n++;						// Verdadeiro
		} 
		else {
			i++; n++;
		}
	}	

	cout << "\n\t Busca Sequencial -> ";
	if	(encontrado){
		cout <<  "Matricula " << reg_alu[i].matric << " encontrada na posicao " << i << endl << endl;
	}
	else {
		cout << "Matricula " << matricula << " nao encontrada" << endl << endl;
	}
}
void busca_binaria(int matricula, int valini, int valfim){
	int direita=0, esquerda=0, meio=0, n=0;
	int encontrado = 0; 							// Falso
	esquerda = valini;
	direita = valfim;		//nreg - 1;
	while(esquerda<=direita && !encontrado){
		meio=(direita+esquerda)/2;
		if (reg_alu[meio].matric == matricula)		// Comparação
			encontrado = 1; 						// Verdadeiro
		else 
			if (matricula < reg_alu[meio].matric)
				direita = meio - 1;
			else
				esquerda = meio + 1;
		n++;
	}

	cout << "\n\t Busca Binaria -> ";
	if	(encontrado){
		cout <<  "Matricula " << reg_alu[meio].matric << " encontrada na posicao " << meio << endl << endl;
	}
	else {
		cout << "Matricula " << matricula << " nao encontrada" << endl << endl;
	}
};

void mostrar_registros(int valini, int valfim){				// mostrar os registros
	for (int i=valini; i<=valfim; i++){				
		cout << "\t posicao - " 
			 << i << "  Matricula - " 
			 << reg_alu[i].matric 
			 << " - Nome - " << reg_alu[i].nome	  << endl;
	} 	
};
