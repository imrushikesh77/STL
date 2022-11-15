#include <iostream>
#include <forward_list>
#include <iterator>
using namespace std;

// Singly linked list

int main(){
    forward_list<int> l1;
    forward_list<int> l2;
    forward_list<int> l3;
    // first method to assign
    l1.assign({1,2,3,4,5});
    // second method to assign
    l2.assign(5,7);
    forward_list<int> :: iterator x;
    for(x = l1.begin();x!=l1.end();x++){
        cout<<*x<<" ";
    }
    cout<<endl;
    for(x = l2.begin();x!=l2.end();x++){
        cout<<*x<<" ";
    }
    cout<<endl;
    // copying one list to another
    l3.assign(l1.begin(),l1.end());
    x=l3.begin();
    x++;
    // using insert_after()
    l3.insert_after(x,{7,8,9});
    for(x = l3.begin();x!=l3.end();x++){
        cout<<*x<<" ";
    }
    cout<<endl;
    return 0;
}