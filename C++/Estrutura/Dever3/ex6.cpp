#include <iostream>
using namespace std;
int cubo(int i){
    int a;
    a=i;
    i*=a;
    i*=a;
    return i;
}
int main(int argc, char const *argv[])
{
    cout<<cubo(2);
    return 0;
}
