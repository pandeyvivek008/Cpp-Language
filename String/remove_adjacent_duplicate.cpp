#include<iostream>
#include<string>
using namespace std;
int main(){
    string str1="abbaca";
    string str2;
    size_t index=0;

    while(index < str1.length()){
            if(str2.length() && str2.back() == str1[index]){
                str2.pop_back();
            }else{
                str2.push_back(str1[index]);
            }
            index++;
        }
    
    cout<<str2;
}