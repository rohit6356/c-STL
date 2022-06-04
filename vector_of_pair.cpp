#include<bits/stdc++.h>
using namespace std;

void printVec( vector<pair<int,int>> v){
    cout<<"size :"<<v.size()<<endl;

    for(int i=0; i<v.size() ;i++){
     cout<<v[i].first<<" "<<v[i].second<<endl;
    }
    cout<<endl;
}

int main(){
//  vector< pair<int , int> > v = {{2,3}, {5,6} ,{ 8,9}};
 vector< pair<int , int> > v1;
int n; cin>>n;
 for (int i = 0; i < n; i++)
 {
     int x,y; cin>>x>>y;
     v1.push_back({x,y});
    //  v1.push_back(make_pair(x,y));
 }
 
 printVec(v1);

    return 0;
}