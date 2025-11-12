// Moore's voting algorithm.
#include<iostream>
using namespace std;
int main(){
    int arr[]={7,7,5,7,5,1,5,7,5,5,7,7,5,5,5,5};
    int size=16;
    int count=0;
    int el;

    for(int i=0; i<size; i++){
        if(count == 0){
            count = 1;
            el=arr[i];
        }else if(arr[i] == el){
            count++;
        }else{
            count--;
        }
    }
    int count1=0;
        for(int i=0; i<size; i++){
            if(arr[i] == el){
                count1++;
            }
        }
        if(count1 > (size/2)){
                cout<<"Majority Element: "<<el<<endl;
            }else{
                cout<<"No Majority Element"<<endl;;
            }
}