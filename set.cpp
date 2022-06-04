#include<bits/stdc++.h>
using namespace std;

void printSet(set <string> s){
    for(string value : s ){
        cout<<value<<" ";
    }
    cout<<endl;
}

int main(){

set <string> s;
s.insert("rohit");
s.insert("john");
s.insert("john");
s.insert("mars");

printSet(s);

 return 0;
}