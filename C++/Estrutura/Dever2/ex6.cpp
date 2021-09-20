 #include <iostream>
using namespace std;
int main(){
    struct Aluno{
        string nomeA;
        string nomeT;
        long matricula;
        string nomeP;
        int faltas;
        float nota[3];
    };
    int n;
    cout<<"Quantos alunos quer registrar?";
    cin>>n;
    Aluno alunos[n];
    for(int i=0;i<n;i++){
        cout<<"Digite o nome do " << i+1 << " aluno";
        cin>>alunos[i].nomeA;
        cout<<"Digite a turma do " << i+1 << " aluno";
        cin>>alunos[i].nomeT;
        cout<<"Digite a matricula do " << i+1 << " aluno";
        cin>>alunos[i].matricula;
        cout<<"Digite o nome do professor do " << i+1 << " aluno";
        cin>>alunos[i].nomeP;
        cout<<"Digite a nota da AV1 do " << i+1 << " aluno";
        cin>>alunos[i].nota[0];
        cout<<"Digite a nota da AV2 do " << i+1 << " aluno";
        cin>>alunos[i].nota[1];
        cout<<"Digite a nota da AV3 do " << i+1 << " aluno";
        cin>>alunos[i].nota[2];
        cout<<"Digite quantas faltas teve o " << i+1 << " aluno";
        cin>>alunos[i].faltas;
    }
    for(int i=0;i<n;i++){
        cout<<"O nome do aluno " << i+1 << " é: " << alunos[i].nomeA;
        cout<<"O nome da turma do aluno " << i+1 << " é: " << alunos[i].nomeT;
        cout<<"A matricula do aluno " << i+1 << " é: " << alunos[i].matricula;
        cout<<"O nome do professor do aluno " << i+1 << " é: " << alunos[i].nomeP;
        cout<<"A nota da av1 do aluno " << i+1 << " é: " << alunos[i].nota[0];
        cout<<"A nota da av2 do aluno " << i+1 << " é: " << alunos[i].nota[1];
        cout<<"A nota da av3 do aluno " << i+1 << " é: " << alunos[i].nota[2];
        cout<<"O numero de faltas do aluno " << i+1 << " é: " << alunos[i].faltas;
    }
}