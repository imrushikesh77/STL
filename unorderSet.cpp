#include <bits/stdc++.h>
using namespace std;

// * Unordered Set

int main(){
    unordered_set<string> s;
    s.insert("Rushikesh");
    s.insert("Jawale");
    s.insert("Abhi");
    s.insert("Tushar");
    for(auto it: s){
        cout<<it<<" \n";
    }

    string key = "Rushikesh";
    if(s.find(key)==s.end()){
        cout<<"Key not found\n";
    }
    else{
        cout<<"Key found\n";
    }
    return 0;
}