/* Q:- Takes an array from the user. Finds and prints the second largest element.
Input: [10, 5, 20, 8, 6]  
Output: Second largest = 10 */

#include<iostream>
#include <climits>
using namespace std;
int main(){
    int arr[]={10,5,20,8,6};
    int size=5;
    int max = INT_MIN;
    int secondlargest = INT_MIN;

    for(int i=0; i<size; i++){
        if(arr[i]>max){
            secondlargest=max;
            max=arr[i];
        }else if(arr[i]>secondlargest && arr[i]!=max){
            secondlargest=arr[i];
        }
    }
    if(secondlargest==INT_MIN){
       cout << "No second largest" << endl;
    }else
    cout << "Second largest = " << secondlargest << endl;
}