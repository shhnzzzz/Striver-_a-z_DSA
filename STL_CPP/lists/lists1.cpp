// What is a list?
// A list in C++ STL is implemented as a Doubly Linked List.
// Unlike a vector, elements are not stored continuously in memory.

#include<bits/stdc++.h>
using namespace std;

int main()
{
    list<int> l;

    cout<<l.size()<<endl;


    l.push_back(10);
    l.push_back(20);
    l.push_back(30);

    for(int x:l)
        cout<<x<<" "<<endl;

      l.push_front(30);
    l.push_front(20);
    l.push_front(10);

    for(int x:l)
        cout<<x<<" "<<endl;

    l.pop_back();

    for(int x:l)
        cout<<x<<" "<<endl;
    

    cout<<l.back();

    if(l.empty())
        cout<<"Empty";


    l.clear();

    cout<<l.size();

     list<int> l2={10,20,30};

     for(auto it=l2.begin();it!=l2.end();it++)
    {
        cout<<*it<<" ";
    }
}