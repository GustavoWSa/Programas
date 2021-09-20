/* 9.	Construa um programa que defina as estruturas a seguir:

1.	Turmas: identificador(chave) e localização - permita guardar as informações de até 2 registros.
2.	Professores: Matrícula(chave) e nome - permita guardar as informações de até 5 registros.
3.	Disciplinas: identificador da disciplina, nome, créditos - permita guardar as informações de até 10 registros.
4.	Alunos: matrícula(chave) e nome - permita guardar as informações de até 100 registros.
5.	Notas: data(chave), identificador da turma(chave), matrícula do professor(chave), identificador da disciplina(chave), matrícula do aluno(chave) e notas(AV1, AV2, AV3 e AVD) - permita guardar as informações de até 50 registros.
6.	Faltas: data(chave), identificador da turma(chave), matrícula do professor(chave), identificador da disciplina(chave), matrícula do aluno(chave) e faltas - permita guardar as informações de até 50 registros.

Pede-se:
"	A construção de funções distintas para incluir dados nas respectivas estruturas.
"	A construção de funções distintas para verificar se as informações chaves já existem e se for o caso, não permitir a inclusão das mesmas. 
"	A construção de uma função para calcular e mostrar as médias dos alunos e se ele está aprovado ou reprovado conforme regras do anexo abaixo e em ordem alfabética crescente.
"	A construção de funções distintas para mostrar dados das respectivas estruturas.
"	A construção de funções distintas para pesquisar dados nas respectivas estruturas pela informação chave.
"	A construção de funções distintas para alterar os dados nas respectivas estruturas.
"	A construção de funções distintas para excluir dados nas respectivas estruturas.

OBS: 
o	Chaves - Informação que não se repete.
o	No caso de Matriculados que existem 5 campos chaves, o conjunto não pode se repetir.
o	O campo data se refere a data(ano, mês, dia) + a hora(hora, minuto, segundo)
o	A palavra distinta refere-se a cada estrutura descrita acima.
o	Tanto a inclusão como a alteração e a exclusão de cada estrutura deve ser feita pesquisando a informação(ões) chave(s) de cada estrutura. Para incluir, a(s) informação(ões) chave NÃO pode existir nos registros. Para alterar ou excluir, a(s) informação(ões) chave TEM que existir nos registros.

*/
#include <cstring>
#include <locale.h> 	//necessário para usar setlocale - Definindo caracteres da língua Portuguesa
#include <iostream> 
#include <conio.h>
#include <math.h>
using namespace std;
// Variáveis Globais
const int nregtur=2, nregpro=5, nregdis=10, nregalu=100, nregnot=50, nregfal=50;		// nreg???=número de registros
int i, f;
bool encontrou=false;
struct turma {
	int id_turma;
	string localizacao; 
};
turma turmas[nregtur];
//int VET1[5] = {2,4,89,1,99};
//int VET2[5] = {6,01,55,3,15};

// Assinatura dos métodos

// ROTINAS GENÉRICAS
void inicializa();
bool verificar(int id, int opcao);				// Verifica se existe o registro
// ROTINAS DAS TURMAS
void menu_tur();
void incluir_tur();
void alterar_tur();
void excluir_tur();
void consultar_tur();
// ROTINAS DOS PROFESSORES
void menu_pro();
// ROTINAS DAS DISCIPLINAS
void menu_dis();
// ROTINAS DOS ALUNOS
void menu_alu();
// ROTINAS DAS NOTAS
void menu_not();
// ROTINAS DAS FALTAS
void menu_fal();

int main(){
	setlocale(LC_ALL, "Portuguese");
	int opc = 15;
	inicializa();
	while(opc != 0 ){
		inicializa();
		while(opc < 0 || opc > 6 ){	
			cout << endl << endl;
			cout << "M E N U   P R I N C I P A L" << endl;
			cout << "= = = =   = = = = = = = = =" << endl << endl;			
			cout << "[0] SAIR"<<endl;
        	cout << "[1] Turmas"<<endl;
        	cout << "[2] Professores"<<endl;
        	cout << "[3] Disciplinas"<<endl;
        	cout << "[4] Alunos"<<endl;
        	cout << "[5] Notas"<<endl;
        	cout << "[6] Faltas"<<endl<<endl;;
        	cout << "Opção: "; cin >> opc;
        	system("clear || cls");				// Limpa a tela
			cout << endl;	
			if (opc < 0 || opc > 6)	
				cout << "Não existe exercício com esse número."<< endl;
		}
		
		switch (opc){
			case 1:	{
			    menu_tur();
				break; }
            case 2: {
				menu_pro();
				break; }  
            case 3: {
				menu_dis();
				break; }
            case 4: {
				menu_alu();
            	break; }
            case 5: {
				menu_not();
            	break; }
            case 6: {
				menu_fal();
            	break; }
         	default :
            	break;
		}
		if (opc !=0)	opc = 15;
	}
	
}
// ROTINAS GENÉRICAS
void inicializa(){
	for (int i=0; i<nregtur; i++)
		turmas[i].id_turma=0;
		
}

bool verificar(int id, int opcao){
	bool t = false;
	int vezes=0;
	if (opcao==1)
		for (int i=0; i<nregtur; i++)
			if (id == turmas[i].id_turma){
				vezes = vezes+1;
			}
	if (opcao==1 and vezes>1) {		// inclusão
		//cout << "Estou na rotina de verificar" << endl;
		t = true;
	}
	if (opcao==2 and vezes==1) 		// 2 ou 3 Alteração ou exclusão
		t = true;
	return t;
}
// ROTINAS DAS TURMAS
void menu_tur(){
	int opc = 15;
	while(opc != 0 ){
	
		while(opc < 0 || opc > 4 ){	
			cout << endl << endl;
			cout << "C A D A S T R O   D E   T U R M A S" << endl;
			cout << "= = = = = = = =   = =   = = = = = =" << endl << endl;
			cout << "[0] SAIR"<<endl;
        	cout << "[1] Incluir"<<endl;
        	cout << "[2] Alterar"<<endl;
        	cout << "[3] Excluir"<<endl;
        	cout << "[4] Consultar"<<endl;
        	cout << "Opção: "; cin >> opc;
        	system("clear || cls");				// Limpa a tela
			cout << endl;	
			if (opc < 0 || opc > 4)	
				cout << "Não existe exercício com esse número."<< endl;
		}
		switch (opc){
			case 1:	{
				incluir_tur();
				break; }
            case 2: {
				alterar_tur();
				break; }  
            case 3: {
				excluir_tur();
				break; }
			case 4: {
				consultar_tur();
				break; }
            default :
            	break;
		}
		if (opc !=0)	opc = 15;
	}
}
void incluir_tur(){
	encontrou=false;
	for (int i=0; i<nregtur; i++){
		cout << endl << endl;
		cout << "I N C L U S Ã O   D E   T U R M A S" << endl;
		cout << "= = = = = = = =   = =   = = = = = =" << endl << endl;
		cout << "Informe o identificador: "; cin >> turmas[i].id_turma;
		while (encontrou=verificar(turmas[i].id_turma, 1)){
	    	cout << "Identificador já existe e por isso, não pode ser incluído" << endl;
			cout << "Informe o identificador: "; cin >> turmas[i].id_turma;
	    }
		cout << "Informe a localização..: "; cin >> turmas[i].localizacao;
        system("clear || cls");				// Limpa a tela
	}
}
void alterar_tur(){
	encontrou=false;
	cout << endl << endl;
	cout << "A L T E R A Ç Ã O   D E   T U R M A S" << endl;
	cout << "= = = = = = = = =   = =   = = = = = =" << endl << endl;
	cout << "Informe o identificador: "; cin >> turmas[i].id_turma;
	while (encontrou=verificar(turmas[i].id_turma, 2)){						// 2 significa que veio da rotina de alteração
	   	cout << "Identificador não existe e por isso, não pode ser alterado" << endl;
		cout << "Informe o identificador: "; cin >> turmas[i].id_turma;
	   }
	cout << "localização atual..: " << turmas[i].localizacao << endl;
	cout << "localização nova...: "; cin >> turmas[i].localizacao;
	cout << "Alteração feita" << endl;
	system ("pause");
    system("clear || cls");				// Limpa a tela
}
void excluir_tur(){
		encontrou=false;
	cout << endl << endl;
	cout << "E X C L U S Ã O   D E   T U R M A S" << endl;
	cout << "= = = = = = = =   = =   = = = = = =" << endl << endl;
	cout << "Informe o identificador: "; cin >> turmas[i].id_turma;
	while (encontrou=verificar(turmas[i].id_turma, 2)){ 			// 2 significa que veio da rotina de exclusão
	   	cout << "Identificador não existe e por isso, não pode ser excluído" << endl;
		cout << "Informe o identificador: "; cin >> turmas[i].id_turma;
	   }
	turmas[i].id_turma=0;
	turmas[i].localizacao = "";
	cout << "Exclusão feita" << endl;
	system ("pause");
    system("clear || cls");				// Limpa a tela
}
void consultar_tur(){
	cout << endl << endl;
	cout << "C O N S U L T A   D E   T U R M A S" << endl;
	cout << "= = = = = = = =   = =   = = = = = =" << endl; 
	for (int i=0; i<nregtur; i++){
		cout << endl;
		cout << i+1 << "º identificador: " << turmas[i].id_turma << endl;
		cout << i+1 << "ª localização..: " << turmas[i].localizacao << endl;
		cout << "-----------------------------------------";
	}
	cout << endl << endl;
	system("pause");
   	system("clear || cls");	
}
// ROTINAS DOS PROFESSORES
void menu_pro(){
}
// ROTINAS DE DISCIPLINAS
void menu_dis(){
}
// ROTINAS DE ALUNOS
void menu_alu(){
}
// ROTINAS DE NOTAS
void menu_not(){
}
// ROTINAS DE FALTAS
void menu_fal(){
}


