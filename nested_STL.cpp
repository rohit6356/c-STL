#include<bits/stdc++.h>
using namespace std;

int main(){

map< pair<string,string> , vector<int> > m;
int N; cin>>N;

for(int i=0; i<N ;i++){
   string fn , ln ;
   cin>>fn>>ln;
   int ct;
   cin>>ct;
    
    for(int j=0; j<ct ; j++){
        int x; cin>>x;
         m[{fn , ln}].push_back(x);
    }
}

for(auto &pr : m){
    auto &name = pr.first;
    auto &marks = pr.second;

    cout<<name.first<<" "<<name.second<<" "<<marks.size()<<endl;
    for(auto &value : marks){
        cout<<value<<" ";
    }
    cout<<endl;
}

    return 0;
}