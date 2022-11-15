#include <iostream>
#include <array>
#include <tuple> // for get() function
using namespace std;

int main(){
    array <int,5> arr = {1,2,3,4,5};
    array <int,5> arr1 = {11,12,13,14,15};
    array <int,4> arr2 = {};
    //using at() function
    for(int i = 0; i < arr.size(); i++){
        cout << arr.at(i) << " ";
    }
    cout << endl;
    // using get fuction
    // cout << get<0>(arr) << " ";
    // cout << get<1>(arr) << " ";
    // cout << get<3>(arr) << " ";
    // cout << get<4>(arr) << " ";
    // cout << get<5>(arr) << " ";
    // cout << get<6>(arr) << " ";

    // using first(), last() function
    cout << "First element:" << arr.front() << endl;
    cout << "Last element:" << arr.back() << endl;
    // using swap() function
    arr.swap(arr1);
    for(int i = 0; i < arr.size(); i++){
        cout << arr1.at(i) << " ";
    }
    cout << endl;
    // using empty() function
    if(arr.empty()){
        cout << "Yes! it is empty\n";
    }
    else{
        cout << "No! it's not empty\n";
    }
    if(arr2.empty()){
        cout << "Yes! it is empty\n";
    }
    else{
        cout << "No! it's not empty\n";
    }
    // using fill() function
    arr2.fill(1);
    for(int i = 0; i < arr2.size(); i++){
        cout << arr2.at(i) << " ";
    }
    cout << endl;
    return 0;
}