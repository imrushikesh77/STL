#include <iostream>
#include <vector>
#include <iterator>
#include <tuple>
using namespace std;

int main(){
    vector <int> v;
    vector <int> v1 = {1,2,3,4};
    // using push_back()
    v.push_back(1);
    for(int i = 0; i < 8; i++){
        v.push_back(i*2);
    }
    // using swap()
    v.swap(v1);
    for(int i = 0; i < v.size(); i++){
        // using at()
        cout << v.at(i) << " ";
    }
    cout<<endl;
    // using size()
    cout << "size:" << v.size() <<endl;
    // using capacity()
    cout << "capacity:" << v.capacity() <<endl;
    // using resize()
    v.resize(5); // it will reduce size to 2
    cout << "size:" << v.size() <<endl;
    v.shrink_to_fit();
    cout << "capacity:" << v.capacity() <<endl;
    // using empty(){
    if(v.empty()){
        cout << "Yes it is empty\n";
    }
    else{
        cout << "No it is not empty\n";
    }
    // Iterator
    vector<int> ::iterator it;
    for(it = v.begin(); it!=v.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
    // Approch second
    it = v.begin();
    for(int i=0;i<v.size();i++){
        cout<<*(it+i)<<" ";
    }
    cout<<endl;
    vector <int> v2;
    v2.assign(3,8);
    v2.insert(v2.begin(),5);
    v2.insert(v2.end(),2);
    for(auto x:v2){
        cout<<x<<" ";
    }
    cout<<endl;
    // Printing in reverse order
    // for(auto i=v2.rbegin();i!=v2.rend();i++){
    //     cout<<*i<<" ";
    // }

    return 0;
}