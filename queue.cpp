#include <iostream>
#include <queue>
#include <iterator>
using namespace std;

// Queue

int main(){
    // queue<int> q;
    // q.push(1);
    // q.push(2);
    // q.push(3);
    // q.push(4);
    // q.push(10);
    // q.push(5);
    // while(!q.empty()){
    //     cout<<q.front()<<" ";
    //     q.pop();
    // }
    // cout<<endl;

    // Min priority queue
    priority_queue<int, vector<int>, greater<int>> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(10);
    q.push(5);
    while(!q.empty()){
        cout<<q.top()<<" ";
        q.pop();
    }
    cout<<endl;

    // Max priority queue
    priority_queue<int> q1;
    q1.push(1);
    q1.push(2);
    q1.push(3);
    q1.push(4);
    q1.push(10);
    q1.push(5);
    while(!q1.empty()){
        cout<<q1.top()<<" ";
        q1.pop();
    }
    cout<<endl;
    return 0;
}