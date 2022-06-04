#include<bits/stdc++.h>
using namespace std;

unordered_map<char , int> m = { {'(' , -1}, {'[' , -2},{'{' , -3}, {')' , 1}, {']' , 2},{'}' , 3} };

string is_balanced(string st){
 stack<char> s;
for(char element : st){
    if(m[element] < 0){
        s.push(element);
    }
    else{
        if(s.empty()) return "NO";
        if(m[s.top()] + m[element] != 0) return "NO";
        s.pop();
    }
}
if(s.empty()) return "YES";
return "NO";
}

int main(){

// stack<int> s;
// s.push(6);
// s.push(66);
// s.push(666);
// s.push(656);
// s.push(55);
// while(!s.empty()){
//     cout<<s.top()<<" ";
//     s.pop();
// }


//............... balance paranthesis.............

int n;
cin>>n;

for(int i=0; i<n ;i++){
    string s; cin>>s;
   cout<<is_balanced(s);
}
    return 0; 
}