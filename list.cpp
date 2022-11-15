#include <iostream>
#include <list>
#include <iterator>
using namespace std;

// Doubly linked list

int main(){
    list <int> l1;
    // using push_back()
    for(int i=1;i<6;i++){
        l1.push_back(i*5);
    }
    //using push_front()
    l1.push_front(0);
    for(auto i = l1.begin(); i!=l1.end();i++){
        cout<<*i<<" ";
    }
    cout<<endl;
    // using reverse()
    l1.reverse();
    for(auto i = l1.begin(); i!=l1.end();i++){
        cout<<*i<<" ";
    }
    cout<<endl;
    //using pop_fornt()
    l1.pop_front();
    // using remove()
    l1.remove(15);
    for(auto i = l1.begin(); i!=l1.end();i++){
        cout<<*i<<" ";
    }
    cout<<endl;
    cout<<l1.size()<<endl;
    return 0;
}