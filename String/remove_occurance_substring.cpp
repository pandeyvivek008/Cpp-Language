#include<iostream>
#include<string>
using namespace std;
int main (){
    string str="abccbabadd";
    string part="ab";
    size_t pos;

    while((pos = str.find(part)) != string::npos){
        str.erase(pos,part.length());  //s.erase(index,length)
    }
    cout<<str;

}