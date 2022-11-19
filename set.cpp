#include <iostream>
#include <set>
#include <iterator>
using namespace std;
/*
* Are associative containers
* Each elt has to be unique
* Elements are stored in order
* Values are unindexed
* Values can't be modified once it is added
* It is possible to remove and add element
* Follows Binary search tree implementayion
* If we don't want perticular order or sorting then we can use unorder set 
*/
int main(){
    multiset<int> s;
    // Multiset can store duplicate values
    s.insert(1);
    s.insert(2);
    s.insert(2);
    s.insert(5);
    s.insert(3);
    s.insert(3);
    set<int> :: iterator it;
    for(it =s.begin();it!=s.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
    set<int, greater<int>> s1;
    // Stotres values in decreasing order
    s1.insert(1);
    s1.insert(2);
    s1.insert(2);
    s1.insert(5);
    s1.insert(3);
    set<int> :: iterator i;
    for(i =s1.begin();i!=s1.end();i++){
        cout<<*i<<" ";
    }
    cout<<endl;
    set<int> s2(s.begin(),s.end());
    set<int> :: iterator x;
    for(x =s2.begin();x!=s2.end();x++){
        cout<<*x<<" ";
    }
    cout<<endl;
    return 0;
}