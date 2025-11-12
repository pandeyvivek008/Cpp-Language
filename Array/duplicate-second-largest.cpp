#include <iostream>
#include <climits>
using namespace std;

int largestElementIndex(int arr[], int size) {
    int max=INT_MIN;
    int maxindex=-1;
    for(int i=0; i<size; i++) {
        if(arr[i]>max){;
        max=arr[i];
        maxindex = i;
    }
}
     return maxindex;
}

int main () {
   
    int arr[] = {2, 3, 5, 7, 6, 1,7};
    int n=7;
    int indexoflargest = largestElementIndex(arr, n);
    cout << "Largest: " << arr[indexoflargest] << endl;
    
    int largestelement = arr[indexoflargest];
    for(int i=0; i<n; i++) {
        if(arr[i]==largestelement){
            arr[i]=-1;
        }
    }
    
    int indexofsecondlargest = largestElementIndex(arr, n);
    cout << "Second Largest: " << arr[indexofsecondlargest] << endl;

}