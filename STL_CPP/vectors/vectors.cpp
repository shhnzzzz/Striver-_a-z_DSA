// What is a Vector?

// A vector is a dynamic array.

// Unlike a normal array:

//  Size can increase automatically.
//  Size can decrease automatically.
//  Elements are stored in contiguous memory (just like arrays).
//  Supports random access (v[3]) in O(1) time.

#include <bits/stdc++.h>
using namespace std;

void Vectors() {

    vector<int> v;

    v.emplace_back(2);
    v.emplace_back(1);

    vector<pair<int,int>> vec;

    vec.push_back({1,2});
    vec.emplace_back(3,4);

    vector<int> v1(5,100);

    vector<int> v2(5);

    cout << v[0] << " " << v.at(0) << endl;
    cout << v.back() << endl;
}

int main() {
    Vectors();
     vector<int> v={100,200,300};

    cout<<v.at(0)<<endl;
    cout<<v.at(1)<<endl;
    cout<<v.at(2)<<endl;

    
    cout<<v.front()<<endl;

    cout<<v.back()<<endl;

    cout<<v.size()<<endl;


    if(v.empty())
        cout<<"Vector is Empty"<<endl;
    else
        cout<<"Vector is Not Empty"<<endl;

    for(int x : v)
        cout<<x<<" "<<endl;

    for(int i=0;i<v.size();i++)
{
    cout<<v[i]<<" "<<endl;
}
}