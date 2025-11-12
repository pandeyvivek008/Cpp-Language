#include<iostream>
using namespace std;
int main () {
//     int arr[] = {1,2,3,4};

//    //cout<<sizeof(arr)<<endl;
//   int size = sizeof(arr)/ sizeof(arr[0]);

//   //for loop
//   for(int idx=0; idx<size; idx++) {
//     cout<<arr[idx]<<endl;
//   }

//   //for each loop
//   for(int ele:arr) {
//     cout<<ele<<endl;
//   }

//   //while loop
//   int index=0;
//   while(index<size) {
//     cout<<arr[index]<<endl;
//     index++;
//   }

char vowels[5];
//for loop
// for(int i=0; i<5; i++) {
//     cout<<"Enter a vowel char: ";
//     cin>>vowels[i];
// }

//for each loop
for(char & ele:vowels){
    cin>>ele;
}

for(int i=0; i<5; i++) {
    cout<<vowels[i]<<" ";
}
}