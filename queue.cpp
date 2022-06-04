#include<bits/stdc++.h>
using namespace std;

int main(){

    queue<string> q;

    q.push("rohit");
    q.push("virat");
    q.push("yuvraj");
    q.push("sanju");
    q.push("khan");

    
while(!q.empty()){
    cout<<q.front()<<" ";
    q.pop();
}

    return 0;
}