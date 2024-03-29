#include<bits/stdc++.h>
using namespace std;
vector<int> sortedArray(vector<int> a, vector<int> b) {
  // Write your code here
  vector<int> result;
  int left = 0;
  int right = 0;
  int n = a.size();
  int m = b.size();
  while (left < n && right < m) {
    cout<<"main running"<<endl;
    if (a[left] < b[right]) {
      if (a[left] != a[left + 1]) {
        result.push_back(a[left]);
      };
        left++;
    } else if(a[left]>b[right]) {
      if (b[right] != b[right + 1]) {
        result.push_back(b[right]);
      };
        right++;
    }
    else
    {
        if((a[left]!=a[left+1])&&(b[right]!=b[right+1]))
        {
            result.push_back(a[left]);
        }
        left++;
        right++;
    }
  };
  while (left < n) {
    cout<<"left running"<<endl;
    if (a[left] != a[left + 1]) {
      result.push_back(a[left]);
    };
      left++;
  };
  while (right < m) {
    
    cout<<"right running"<<endl;
    if (b[right] != b[right + 1]) {
      result.push_back(b[right]);
    };
      right++;
  };
  return result;
};
int main()
{
    vector<int> vect1 = {3,3,4,5,6,7,8,9,9,9};
    vector<int> vect2 = {2,4,10,10};
    sortedArray(vect1,vect2);
    return 0;
};