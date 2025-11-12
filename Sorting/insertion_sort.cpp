#include<iostream>
#include<vector>
using namespace std;

void insertionSort(vector<int> &arr){
    int n=arr.size();
    for(int i=0; i<n; i++){
        int current_element=arr[i];
        int j=i-1;

        //Shift elements greter than current_element.
        while(j>=0 && arr[j]>current_element){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=current_element; //Insert current_element in correct position.
    }
}

int main(){
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter elements: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    insertionSort(arr);

    cout << "Sorted array: ";
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}