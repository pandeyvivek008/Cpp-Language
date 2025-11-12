#include <iostream>
#include<string>
using namespace std;

void sub(string str, string out, int index) {
    if (index >= str.length()) {
        cout << out << " ";
        return;
    } else {
        sub(str, out, index + 1);
        out.push_back(str[index]);
        sub(str, out, index + 1);
    }
}

int main() {
    string str = "abc";
    string out = "";
    sub(str, out, 0);
    return 0;
}
