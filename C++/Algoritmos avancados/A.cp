/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    float fare[]={0,0,0,0,0,0,0,0,0,0};
    float cel[10];
    for(int i=0;i<9;i++){
        cout << "Digite uma temperatura em farenheit";
        cin>>fare[i];
        fare[i]=(fare[i]-32)/9;
        cel[i]=fare[i]*5;
        cout << cel[i];
    }
    return 0;
}
