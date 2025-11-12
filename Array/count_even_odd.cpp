/* Q:- ake n numbers from the user (into an array).Count how many are even and how many are odd.Print both count.
Input: [1, 2, 3, 4, 5, 6]
Output:
Even: 3
Odd: 3 */

#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6};
    int size=6;
    int even=0;
    int odd=0;

    for(int i=0; i<size; i++) {
        if(arr[i]%2==0){
            even++;
        }else{
            odd++;
        }
    }
    cout<<"Even: "<<even<<endl;
    cout<<"Odd: "<<odd<<endl;
}