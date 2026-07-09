#include <iostream>
#include <vector>
using namespace std;

void Vectors(){
     vector<int> v;

    cout<<"Size = "<<v.size()<<endl;
    cout<<"Capacity = "<<v.capacity()<<endl;

    v.push_back(10);

    cout<<"Size = "<<v.size()<<endl;
    cout<<"Capacity = "<<v.capacity()<<endl;

    v.push_back(20);

    cout<<"Size = "<<v.size()<<endl;
    cout<<"Capacity = "<<v.capacity()<<endl;

    v.push_back(30);

    cout<<"Size = "<<v.size()<<endl;
    cout<<"Capacity = "<<v.capacity()<<endl;
}

void Vectors2(){
      vector<int> v;

    v.assign(5,100);

    for(int x:v)
        cout<<x<<" "<<endl;
}

void VectorIterator(){

    cout<<"Iterartor in vectors"<<endl;

  
    vector<int> v={10,20,30};

    vector<int>::iterator it;

    it=v.begin();

    cout<<*it<<endl;


    auto itt=v.begin();

    cout<<*itt<<endl;

    itt++;

    cout<<*itt<<endl;

    itt++;

    cout<<*itt<<endl;

    cout<<"Traverse using iterators :"<<endl;

    for(auto ittt=v.begin();ittt!=v.end();ittt++)
    {
        cout<<*ittt<<" "<<endl;
    }


}

int main()
{
    vector<int> v = {10,20,30,40};

    v.pop_back();
cout<<"--------------------------------------------------------"<<endl;

    for(int x : v)
        cout << x << " "<<endl;

    
    cout<<"--------------------------------------------------------"<<endl;

    v.clear();

    cout<<v.size()<<endl;

    cout<<"--------------------------------------------------------"<<endl;

    
    vector<int> v1={10,20,30};

    v1.insert(v1.begin()+1,15);

    for(int x:v1)
        cout<<x<<" "<<endl;

cout<<"--------------------------------------------------------"<<endl;

    vector<int> v2={10,20};

    v2.insert(v2.begin(),3,100);

    for(int x:v2)
        cout<<x<<" "<<endl;

cout<<"--------------------------------------------------------"<<endl;

    vector<int> v4={10,20,30,40};

    v4.erase(v4.begin()+2);

    for(int x:v4)
        cout<<x<<" "<<endl;

    cout<<"--------------------------------------------------------"<<endl;

    Vectors();

    cout<<"--------------------------------------------------------"<<endl;

    Vectors2();

     cout<<"--------------------------------------------------------"<<endl;

     VectorIterator();

}

// ⭐ Interview Tip

// One of the most common interview questions is:

// What is the difference between size() and capacity()?

// size() = the number of elements currently stored.
// capacity() = the amount of allocated storage available before the vector needs to allocate more memory.

// Being able to explain this clearly often leaves a good impression in C++ interviews.



// Q1. Does end() point to the last element?

// ❌ No.

// It points one past the last element.