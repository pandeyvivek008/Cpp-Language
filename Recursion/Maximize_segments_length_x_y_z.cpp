#include<iostream>
#include<climits>
using namespace std;

int maximizetheCut(int n,int x,int y,int z){
    //base case
    if(n==0) return 0;
   
    if(n<0) return INT_MIN;
        
    int option1 = 1 + maximizetheCut(n-x,x,y,z);
    int option2 = 1 + maximizetheCut(n-y,x,y,z);
    int option3 = 1 + maximizetheCut(n-z,x,y,z);

    int finalAns= max(option1, max(option2,option3));
       return finalAns;
    
}
int main(){
     int n, x, y, z;
    cout << "Enter rope length (n): ";
    cin >> n;
    cout << "Enter possible cut lengths x, y, z: ";
    cin >> x >> y >> z;

    int result= maximizetheCut(n,x,y,z);
    cout<<result<<endl;


}