#include <iostream>
#include <climits>
using namespace std;

// int largestElementIndex(int arr[], int size) {
//     int max=INT_MIN;
//     int maxindex=-1;
//     for(int i=0; i<size; i++) {
//         if(arr[i]>max){;
//         max=arr[i];
//         maxindex = i;
//     }
// }
//      return maxindex;
// }


// Second technique.
int secondLargestElement(int arr[], int size) {
   int max=INT_MIN;
   int second_max=INT_MIN;
   for(int i=0; i<size; i++) {
    if(arr[i]>max) {
        max = arr[i];
    }
   }
   for(int i=0; i<size; i++) {
    if(arr[i]>second_max && arr[i]!=max) {
        second_max=arr[i];
    }
   }
   return second_max;
}



int main () {
   
    int arr[] = {2, 3, 5, 7, 6, 1, 7};
    int n = 7;
    // int indexoflargest = largestElementIndex(arr, 6);
    // cout << "Largest: " << arr[indexoflargest] << endl;

    // arr[indexoflargest] = -1;  // Invalidate the largest
    // int indexofsecondlargest = largestElementIndex(arr, 6);
    // cout << "Second Largest: " << arr[indexofsecondlargest] << endl;
    cout<<secondLargestElement(arr, n)<<endl;

}