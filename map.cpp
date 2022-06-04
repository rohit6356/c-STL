#include<bits/stdc++.h>
using namespace std;

// map print sorted of keys
//map have unique key
// insert and access of a single element in map with O(log(n)) time complexity;
//map

void printMap(map<int , string> &m){
for(auto &value : m){
    cout<<value.first<<" "<<value.second<<endl;
}
}

int main(){
// map<int , string> m;
// m[1] = "abc";  
// m[5] = "john";
// m[2] = "Mars";
// m.insert({4,"jupiter"});
// m[6];    
// map<int , string> :: iterator it;
// for(it = m.begin() ; it!= m.end() ; ++it){
//     cout<<(*it).first<<" "<<(*it).second<<endl;
// }

// printMap(m);

// find function

// auto it = m.find(5);       //time complexity O(log(n))
// auto it = m.find(8);
// if(it == m.end())
// cout<<"No value find"<<endl;
// else
// cout<<(*it).first<<" "<<(*it).second<<endl;


//erase function
// m.erase(5);
// auto it = m.find(2);
// m.erase(it); 

// printMap(m);

// m.clear()

/*
given n string , print unique string in lexographical order with their frequency
*/

map<string , int> m;
int n; cin>>n;
for(int i=0; i<n ; i++){
  string s; cin>>s;
  m[s] = m[s] + 1;
  m[s]++;  
}

for(auto value : m){
    cout<<value.first<<" "<<value.second<<endl;
}

    return 0;
}