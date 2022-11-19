#include <iostream>
#include <map>
#include <iterator>
using namespace std;

/*
* Maps are associative containers that stores elements in mapped fashion
* Each element has a key and mapped value
* No two mapped values can have same key values
* It will only sort keys not values
* If key is present already then it's value will not override
*/

int main(){
    map <int, int> m;
    // * We can insert elements in map using pair
    m.insert(pair<int,int>(1,10));
    m.insert(pair<int,int>(2,60));
    m.insert(pair<int,int>(3,80));
    // * It will not override
    m.insert(pair<int,int>(5,50));
    m.insert(pair<int,int>(5,90));
    // * We can also insert elements in map like array
    m[9] = 190;
    // * Now it will override and value will be updates
    m[9] = 100;
    // * Another way to update value is
    m.erase(5);
    m.insert(pair<int,int>(5,90));
    map<int, int> :: iterator x;
    for(x = m.begin(); x!=m.end();x++){
       // * x->first - key
       // * x->second - value
       cout<<"Key: "<<x->first<<", Value: "<<x->second<<" \n";
    }
    cout<<endl;

    // * Multimap *
    cout<<"Multimap\n";
    multimap<int, int> map;
    map.insert(pair<int,int>(1,10));
    map.insert(pair<int,int>(2,60));
    map.insert(pair<int,int>(3,80));
    map.insert(pair<int,int>(5,50));
    map.insert(pair<int,int>(5,90));
    // * Array method insertion will not work
    for(auto it:map){
        cout<<"Key: "<<it.first<<" Value: "<<it.second<<endl;
    }
    return 0;
}