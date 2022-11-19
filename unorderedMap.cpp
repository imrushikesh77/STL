#include <bits/stdc++.h>
using namespace std;

int main(){
    unordered_map<string, int> m;
    m["Rushi"] = 18;
    m["Jawale"] = 19;
    m["Jawale"] = 40;
    m["Abhi"] = 20;
    for(auto it:m){
        cout<<"Key: "<<it.first<<", Value: "<<it.second<<endl;
    }
    cout<<"\n\n";
    unordered_multimap<string, int> map({
        {"RushiM", 100},
        {"AbhiJ", 200},
        {"Tushar", 300},
        {"Tushar", 500}
    });
    for(auto it:map){
        cout<<"Key: "<<it.first<<", Value: "<<it.second<<endl;
    }
    return 0;
}