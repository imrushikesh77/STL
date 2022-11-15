#include <iostream>
using namespace std;

template <class T, class F = int, class P = int>
P add ( T x, F y){
    return x+y;
}

template <class T>
T compare(T x, T y){
    return (x > y)? x : y;
}

int main(){
    int a,b;
    
    cin>>a>>b;
    cout<<add<int>(a,b)<<endl;
    cout<<compare<char>('c','d')<<endl;
}