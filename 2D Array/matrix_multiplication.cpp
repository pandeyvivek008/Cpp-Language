#include<iostream>
using namespace std;
int main() {
    int r1,c1;
    cout<<"Enter a r1: ";
    cin>>r1;
    cout<<"Enter a c1: ";
    cin>>c1;

    int A[r1] [c1];  // Matrix 1

    for(int i=0; i<r1; i++){
        for(int j=0; j<c1; j++){
            cin>>A [i] [j];
        }
    }

    int r2,c2;
    cout<<"Enter a r2: ";
    cin>>r2;
    cout<<"Enter a c2: ";
    cin>>c2;

    int B[r2] [c2];  // Matrix 2

    for(int i=0; i<r2; i++){
        for(int j=0; j<c2; j++){
            cin>> B[i] [j];
        }
    }

    if(c1!=r2){
        cout<<"Matrix multiplication not possible for this input."<<endl;
        return 0;
    }

    int c[r1] [c2];  // Matrix Ans

    for(int i=0; i<r1; i++){
        for(int j=0; j<c2; j++){
            c[i] [j]=0;
            for(int k=0; k<r2; k++){
                c[i] [j] += A[i] [k] * B[k] [j];  // Matrix Farmula
            }
        }
    }

    for(int i=0; i<r1; i++){
        for(int j=0; j<c2; j++){
            cout<<c[i] [j]<<" ";
        }cout<<endl;
    }
}