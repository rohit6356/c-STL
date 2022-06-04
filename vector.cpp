#include<bits/stdc++.h>
using namespace std;

void printVec( vector<int> v){
    cout<<"size :"<<v.size()<<endl;

    for(int i=0; i<v.size() ;i++){
     cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main(){

vector< int > v;
// v.push_back(56);
// v.push_back(5);

int n; cin>>n;
for(int i=0 ; i<n;i++){
    int x; cin>>x;
    v.push_back(x);

}
// v.pop_back();
// printVec(v);

// // vector<int > v2(10);
// // printVec(v2);
// // vector<int > v3(5,7);
// // printVec(v3);

//we can copy one vector to another
// vector <int> v4= v;
// printVec(v4);

//................. Iterator ...............

// vector<int> :: iterator it;
// for(it = v.begin() ; it!= v.end() ; ++it){
//     cout<<*(it)<<endl;
// }

for( auto it = v.begin() ; it!= v.end() ; ++it){
    cout<<*(it)<<endl;
}

//...................range base loop..............
// for(int value : v)
// cout<<value<<" ";

for(int &value : v)  //by reference
cout<<value<<" ";



    return 0;
}