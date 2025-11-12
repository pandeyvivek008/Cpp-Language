/* Q:- Take an array and a number x from user.Count how many times x appears in the array.
Input:
Enter size: 6  
Enter array: 2 4 2 3 2 1  
Enter number to count: 2

Output:
Frequency of 2 is: 3 */

#include<iostream>
using namespace std;
int main() {
    int arr[]={2,4,2,3,2,1};
    int size=6;
    int count=0;
    int x;
    cout<<"Enter number to count: ";
    cin>>x;
    for(int i=0; i<size; i++) {
        if(arr[i]==x){
            count++;
        }
    }
    cout<<"Frequency of "<<x<<" is: "<<count;
}

