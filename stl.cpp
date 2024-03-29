#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#include<map>
using namespace std;

void iterateVector(vector<int> &v)
{
    for(auto it : v)
    {
        cout<<it<<" ";
    };
    cout<<endl;
};

// stopped at 31.54

// ⚡ MAP STL
// concept of key value pairs
// keys are unique
// int main()
// {
//     // declaration
//     map<char, int> map1;
//     // insertion way 1
//     map1['a'] = int('a');
//     map1['b'] = int('b');
//     map1['c'] = int('c');
//     // insertion way 2 (using the insert function)
//     map1.insert({'d', int('d')});
//     // accessing
//     // cout << map1['a'] << endl;
//     // cout << map1['b'] << endl;
//     // cout << map1['c'] << endl;
//     // cout << map1['d'] << endl;
//     // iterating
//     for (auto it : map1)
//     {
//         cout << it.first << " " << it.second << " " << endl;
//     };
//     cout << endl;
//     // finding
//     auto it = map1.find('a');
//     cout<<it->second<<endl;
// };

// ⚡ vectors
// problem with arrays: we cannot change their size in runtime
// but the size of vectors can be changed in the run time
// doubt: emplace back is not working
// even if we have declared the size of the vector, the vector can be expanded
// doubt: push front isn't working
// int main(){
//     // example 1
//     vector<int> v1;
//     v1.push_back(1);
//     v1.push_back(2);
//     v1.push_back(3);
//     // iterateVector(v1);
//     // example 2
//     // vector<pair<int,int>>v1;
//     // v1.push_back({1,2});
//     // v1.push_back({3,4});
//     // cout<<v1[0].first<<endl;
//     // cout<<v1[0].second<<endl;
//     // cout<<v1[1].first<<endl;
//     // cout<<v1[1].second<<endl;
//     // example 3
//     // vector<int> v(5,2);
//     // iterateVector(v);
//     // vector<int> vcopy(v);
//     // iterateVector(vcopy);
//     // example 4
//     // vector<int> v1(3,2);
//     // iterateVector(v1);
//     // v1.push_back(3);
//     // v1.push_back(4);
//     // v1.push_back(5);
//     // iterateVector(v1);
//     // example 5 (iterating an array using iterator)
//     // vector<int> v1 = {1,2,3,4,5};
//     // for(vector<int>::iterator it = v1.begin(); it != v1.end(); it++)
//     // {
//     //     cout<<*(it)<<" ";
//     // };
//     // cout<<endl;
//     // example 6 (using iterators)
//     // vector<int> v1 = {1,2,3,4,5};
//     // vector<int>::iterator it = v1.begin();
//     // cout<<*(it++)<<endl;
//     // cout<<*(it++)<<endl;
//     // cout<<*(it++)<<endl;
//     // cout<<*(it++)<<endl;
//     // cout<<*(it++)<<endl;
//     // example 7 (some more iterators)
//     // vector<int> v1 = {1,2,3,4,5};
//     // vector<int>::iterator it1 = v1.end();
//     // cout<<*(it1)<<endl;
//     // cout<<*(--it1)<<endl;
//     // end points to somewhere after the last element
//     // example 8 (back)
//     // vector<int> v1 = {1,2,3,4,5};
//     // cout<<v1.back()<<endl;
//     // example 9 (iterating through a vectors using iterators)
//     // vector<int> v1 = {1,2,3,4,5};
//     // for(auto it = v1.begin(); it!=v1.end(); it++)
//     // {
//     //     cout<<*(it)<<endl;
//     // };
//     // example 10 (short way to iterator over a vector)
//     // vector<int> vect = {1,2,3,4,5};
//     // for(auto it : vect)
//     // {
//     //     cout<<it<<" ";
//     // };
//     // example 11 (deletion in a vector)
//     // vector<int> vect = {1,2,3,4,5};
//     // iterateVector(vect);
//     // vect.erase(vect.begin(),vect.begin()+1);
//     // iterateVector(vect);
//     // // give two arguments if you want to specify the start position and the end position
//     // vect.erase(vect.begin()+1);
//     // iterateVector(vect);
//     // give one argument if you want to specify only one position
//     // example 12 (insertion in a vector)
//     // vector<int> vect = {1,2,3,4,5};
//     // iterateVector(vect);
//     // vect.insert(vect.begin(),9);
//     // iterateVector(vect);
//     // vect.insert(vect.begin(),2,10);
//     // insertion 2 10s at vect.begin()
//     // iterateVector(vect);
//     // example 13 (inserting the contents of a vector into another vector)
//     // vector<int> vect1 = {1,2,3,4,5};
//     // vector<int> vect2 = {11,12,13,14,15};
//     // iterateVector(vect1);
//     // vect1.insert(vect1.begin(),vect2.begin(),vect2.end());
//     // iterateVector(vect1);
//     // example 14 (getting the size of a vector)
//     // vector<int> vect = {1,2,3,4,5};
//     // cout<<vect.size();
//     // example 15 (swapping a vector)
//     // vector<int> vect1 = {1,2,3};
//     // vector<int> vect2 = {4,5,6};
//     // iterateVector(vect1);
//     // iterateVector(vect2);
//     // swap(vect1,vect2);
//     // iterateVector(vect1);
//     // iterateVector(vect2);
//     // example 16 (empty check)
//     // vector<int> vect1 = {1,2,3};
//     // vector<int> vect2 = {};
//     // cout<<vect1.empty()<<endl;
//     // cout<<vect2.empty()<<endl;
//     // example 17 (push_front function)
//     // vector<int> vect1 = {1,2,3};
//     // iterateVector(vect1);
//     // iterateVector(vect1);
// };

// ⚡ pairs
// int main()
// {
//     // example 1
//     // pair<int,int> p = {1,3};
//     // cout<<"first element is "<<p.first<<endl;
//     // cout<<"second element is "<<p.second<<endl;
//     // example 2
//     // pair<int, pair<int,int>> p = {1,{2,3}};
//     // cout<<"first element is "<<p.first<<endl;
//     // cout<<"second pair is "<<p.second.first<<" "<<p.second.second<<endl;
//     // example 3
//     pair<int,int> arr[] = {{1,2},{3,4},{5,6}};
//     cout<<"first element of array is the pair "<<arr[0].first<<" "<<arr[0].second<<endl;
//     cout<<"second element of array is the pair "<<arr[1].first<<" "<<arr[1].second<<endl;
//     cout<<"third element of array is the pair "<<arr[2].first<<" "<<arr[2].second<<endl;

//     return 0;
// };

// ⚡ one library for everythings
// #include<bits/stdc++.h>

// ⚡header files
// - math.h
// - string.h