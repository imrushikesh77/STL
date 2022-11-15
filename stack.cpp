#include <iostream>
#include <stack>
#include <iterator>
using namespace std;

// Stack

// stack is first in last out

int main(){
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
    return 0;
}