// What is a pair?

// A pair is an STL container that stores exactly two values together.

// The two values can be:

// Same data type
// Different data types

// Think of it as a box with two compartments.



#include <bits/stdc++.h>
using namespace std;
void Pairs(){
    pair<int,int> p={1,3};
    cout<<p.first<<" "<<p.second<<endl;
    pair<int,pair<int,int>> p1={2,{4,5}};
    cout<<p1.first<<" "<<p1.second.first<<" "<<p1.second.second<<endl;

    pair<int,int> arr[]={{1,2},{3,4},{5,6}};

    pair<string,double> product;

    product.first = "Laptop";
    product.second = 79999.99;

    cout << product.first << endl;
    cout << product.second << endl;
}
int main(){
    Pairs();

       pair<int,int> p1 = {1,2};
    pair<int,int> p2 = {10,20};

    swap(p1,p2);

    cout << p1.first << " " << p1.second << endl;
    cout << p2.first << " " << p2.second << endl;
}

// Where is pair used in DSA?

// You'll see it frequently in:

// ✅ Graphs (adjacency lists: {neighbor, weight})
// ✅ Priority Queues (store {distance, node})
// ✅ Maps (each element is a pair<const Key, Value>)
// ✅ Sorting based on two values
// ✅ BFS and Dijkstra's Algorithm
// ✅ Dynamic Programming (storing coordinates or states)