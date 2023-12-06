#include<bits/stdc++.h>
using namespace std;
#define ll long long
//// how to assign constant values to a vector////
/*
vector<int>v;
v.assign(5,2);
*/

//// finding the position of the element in the vector////
/*
    int valueToBeDeleted = 3;
    auto it = find(vector.begin(), vector.end(),valueToBeDeleted);

    if (it != vector.end()) {
        vector.erase(it);
    }

*/


/////use of vector of pair////
/*
vector<pair<int, int>> vec;
    vec.push_back(make_pair(1, 2));
    vec.push_back(make_pair(3, 4));
    vec.push_back(make_pair(5, 6));
    // Assigning values
    vec[0].first = 10;
    vec[1].second = 40;

    // Traversing the vector//
    for (const auto& p : vec) {
        cout << p.first << " " << p.second << endl;
    }
*/


//// string processing////
/*
str.erase(str.begin() + 0, str.end() - 6);
str.erase(str.begin() + 4);
 /Deletes 4 characters from index number 1
    str.erase(1, 4);
*/

   ///// use of map/////
/*
 map<int, int> m;
m.insert({1, 10});
for (int i = 0; i < n; i++) {
        cin >> key >> value;
        m.insert({key, value});
    }
for (auto i : m) {
    cout << i.first << " " << i.second << endl;
}

Using begin() and end()
map<int, int> m;
for (auto i = m.begin(); i != m.end(); i++) {
    cout << i->first << " " << i->second << endl;
}
*/

   ////use of set////
/*
std::set<char> a;
    a.insert('G');
    a.insert('F');
    a.insert('G');
    for (auto& str : a) {
        std::cout << str << ' ';
    }
*/
     ////stack in c++////
/*
 stack<int> stack;
    stack.push(21);// The values pushed
    stack.push(22);
    stack.push(24);
    stack.push(25);
    int num=0;
      stack.push(num);
    stack.pop();
    stack.pop();
      stack.pop();

    while (!stack.empty()) {
        cout << stack.top() <<" ";
        stack.pop();
    }
*/

int main()
{
    int t;cin>>t;
    while(t--)
    { int n;cin>>n;


    }
}
