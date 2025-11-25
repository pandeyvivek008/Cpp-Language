#include <iostream>
using namespace std;
int main () {
    int a = 31;
    int b = 1;
    int c = 6;
    if(a>b && a>c){
        cout<<"A is largest";
    }
    else if(b>c && b>a){
        cout<<"B is largest";
    }
    else {
        cout<<"C is largest";
    }
}