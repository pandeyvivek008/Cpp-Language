#include<iostream>
using namespace std;

bool checkEligible(int age, int limit) {
    if(age>=limit) {
        return true;
    }else {
        return false;
    }
}

int main () {
   int voting_limit = 18;
   int is_eligible_for_voting = checkEligible(17,voting_limit);
   if(is_eligible_for_voting) {
    cout<<"Yes,the current person is eligible for voting.";
   }else {
    cout<<"No,the current person is not eligible for voting.";
   }
}