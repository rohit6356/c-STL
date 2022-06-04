#include<bits/stdc++.h>
using namespace std;

int main(){
 

    // pair<int , string> p;
    // // p = make_pair(3,"rohit");
    // // cout<<p.first<<" "<<p.second<<endl;

    // p = {420 , "sharma"};
    // cout<<p.first<<" "<<p.second<<endl;

    // // pair<int , string> &p1 = p;

    // pair<int , string> p1 = p;
    // p1.first = 7;
    // cout<<p1.first<<" "<<p1  .second<<endl;


pair<int , int> p2[3];

for(int i=0; i< 3 ;i++){
    cout<<"enter pair "<< i+1<<" :"<<endl;
    int x,y;
    cin>>x>>y;
   p2[i] = make_pair(x,y);
}
for(int i=0; i< 3 ;i++){
 cout<<p2[i].first<<" "<<p2[i].second<<endl;
}
    return 0;
}