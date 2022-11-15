#include <iostream>
#include <deque>
#include <iterator>
using namespace std;

// Dequeue

// Queue is first in first out

int main(){
    deque<int> d;
    // push_back()
    d.push_back(5);
    d.push_back(6);
    d.push_back(7);
    // push_front()
    d.push_front(4);
    d.push_back(8);
    d.push_front(3);
    deque<int> :: iterator x;
    for(x=d.begin();x!=d.end();x++){
        cout<<*x<<" ";
    }
    cout<<endl;
    cout<<"Size "<<d.size()<<endl;
    cout<<"Max size "<<d.max_size()<<endl;
    cout<<"Front "<<d.front()<<endl;
    cout<<"Back "<<d.back()<<endl;
    cout<<"Element at 3 is "<<d.at(3)<<endl;
    d.pop_front();
    d.pop_back();
    cout<<"Size after poping elt "<<d.size()<<endl;
    for(x=d.begin();x!=d.end();x++){
        cout<<*x<<" ";
    }
    cout<<endl;
    return 0;
}