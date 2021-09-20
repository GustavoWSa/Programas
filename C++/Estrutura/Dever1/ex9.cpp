#include <iostream>
using namespace std;
int main(){
    string jogo[3][3];
    int lin,col;
    for(int j=0;j<3;j++){
        for(int k=0;k<3;k++){
            jogo[j][k]="_";
        }
    }
    for(int i=0;i<9;i++){
    cout<<"Vez do X, que linha? ";
    cin>>lin;
    lin-=1;
    cout<<"E a coluna? ";
    cin>>col;
    col-=1;
    jogo[lin][col]="X";
    for(int j=0;j<3;j++){
        for(int k=0;k<3;k++){
            cout<< jogo[j][k] << " ";
        }
        cout<< "\n";
    }
    cout<<"Vez do O, que linha? ";
    cin>>lin;
    lin-=1;
    cout<<"E a coluna? ";
    cin>>col;
    col-=1;
    jogo[lin][col]="O";
    for(int j=0;j<3;j++){
        for(int k=0;k<3;k++){
            cout<< jogo[j][k] << " ";
        }
        cout<< "\n";
    }
    }
}
