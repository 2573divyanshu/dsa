#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <map>
#include <unordered_map>
using namespace std;

// reverse on string belongs to the algorithm header file
// reverse string using reverse(str.begin(),str.end());
// length of a string using str.length();
// to_string() from the string header file
// sqrt() from the cmath
// maps header file for map

void iterateVector(vector<int> &v)
{
    for(auto it : v)
    {
        cout<<it<<" ";
    };
    cout<<endl;
};

// MERGE SORT
// merger sort has a better TC than insetion sort, bubble sort and selection sort
void merge(int vect[], int low, int mid, int high)
{
    cout<<"merge running"<<endl;
    vector<int> temp;
    int left = low;
    int right = mid+1;
    while(left<=mid && right<=high)
    {
        if(vect[left]<=vect[right])
        {
            temp.push_back(vect[left]);
            left++;
        }
        else
        {
            temp.push_back(vect[right]);
            right++;
        };
    };
    while(left<=mid)
    {
        temp.push_back(vect[left]);
        left++;
    };
    while(right<=high)
    {
        temp.push_back(vect[right]);
        right++;
    };
    for(int i = low; i<=high; i++)
    {
        vect[i] = temp[i-low];
    };
};
void mergeSort(int arr[], int l, int r) {
    cout<<"mergesort running"<<endl;
    // Write Your Code Here
    if(l==r) return;
    int mid = (l+r)/2;
    mergeSort(arr,l,mid);
    mergeSort(arr,mid+1,r);
    merge(arr,l,mid,r);
}
int main()
{
    int vect[] = {3,1,2,4,1,5,6,2,4};
    int size = sizeof(vect)/sizeof(vect[0]);
    mergeSort(vect,0,size);
    for(int i = 0; i<size; i++)
    {
        cout<<vect[i]<<" ";
    };
};

// INSERTION SORT
// takes an element and places it in it's correct position
// void insertionSort(vector<int> &vect)
// {
//     for(int i = 1; i<vect.size(); i++)
//     {
//         int main = i;
//         for(int j = i-1; j>=0; j--)
//         {
//             if(vect[j]>vect[main])
//             {
//                 swap(vect[j],vect[main]);
//                 main = j;
//             };
//         };
//         iterateVector(vect);
//     };
// };
// int main()
// {
//     vector<int> vect = {5,4,3,2,1};
//     insertionSort(vect);
// };
// best case O(n)
// average case O(n^2)

// BUBBLE SORT
// sort pairs
// void bubbleSort(vector<int> &vect)
// {
//     for(int i = 0; i<vect.size(); i++)
//     {
//         for(int j = 0; j<vect.size()-1; j++)
//         {
//             if(vect[j+1]<vect[j])
//             {
//                 swap(vect[j],vect[j+1]);
//             };
//         };
//         iterateVector(vect);
//     };
// };
// int main()
// {
//     vector<int> vect = {5,4,3,2,1};
//     bubbleSort(vect);
// };
// average case and worst case is O(n^2)
// best case is O(n)

// SELECTION SORT
// select minimums
// void selectionSort(vector<int> &vect)
// {
//     for(int i = 0; i<vect.size(); i++)
//     {
//         int mini = i;
//         for(int j = i; j<vect.size(); j++)
//         {
//             if(vect[j]<vect[mini])
//             {
//                 mini = j;
//             };
//         };
//         swap(vect[mini],vect[i]);
//         iterateVector(vect);
//     };
// };
// int main(){
//     vector<int> vect = {5,4,3,2,1};
//     selectionSort(vect);
// };
// TC of selection sort is O(n^2)

// COMPLEXITY OF HASHING USING UNORDERED_MAPS
// storing TC is O(1) (average and best)
// fetch TC is O(1) (average and best)
// in worst case O(n)
// use unordered_map if it give TLE then use map

// COMPLEXITY OF HASHING USING MAPS
// storing and fetching TC O(log(n)) (in all cases, best, average and worst)

// HASHIN USING MAPS (CHARACTER HASHIN)
// int main(){
//     string s;
//     cout<<"Enter the string: ";
//     cin>>s;
//     unordered_map<char,int> map1;
//     for(int i = 0; i<s.length(); i++)
//     {
//         map1[s[i]]++;
//     };
//     // char c;
//     // while(true)
//     // {
//     //     cin>>c;
//     //     if(c=='z')
//     //     {
//     //         break;
//     //     }
//     //     else
//     //     {
//     //         cout<<c<<" occurred "<<map1[c]<<" times"<<endl;
//     //     };
//     // };
//     // iteratoring over the map
//     for(auto it : map1)
//     {
//         cout<<it.first<<" occurred "<<it.second<<endl;
//     };
// };

// HASHING USING MAPS (INTEGER HASHING)
// int main(){
//     int n;
//     cout<<"Enter the size: ";
//     cin>>n;
//     int arr[n];
//     map<int,int> map1;
//     for(int i = 0; i<n; i++)
//     {
//         cin>>arr[i];
//         map1[arr[i]]++;
//     };
//     int num;
//     while(true)
//     {
//         cin>>num;
//         if(num==-1)
//         {
//             break;
//         }
//         else
//         {
//             cout<<num<<" occured "<<map1[num]<<" times"<<endl;
//         };
//     }
// };
// it's TC is O(n);

// MAP STL
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
//     cout << map1['a'] << endl;
//     cout << map1['b'] << endl;
//     cout << map1['c'] << endl;
//     cout << map1['d'] << endl;
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

// PROBLEMS WITH ARRAY HASHING
// is it won't work if the size of input is too large
// solution is hash_map or map

// HASHING USING ARRAYS (character hashin)
// int main()
// {
//     string s;
//     cout<<"Enter the string: ";
//     cin>>s;
//     // this will hash for all characters
//     // int arr[255] = {0};
//     // this will hash for alphbet characters
//     int arr[25] = {0};
//     for(int i = 0; i<s.length(); i++)
//     {
//         arr[s[i]-'a']++;
//     };
//     char c;
//     while(true)
//     {
//         cin>>c;
//         if(c=='z')
//         {
//             break;
//         }
//         else
//         {
//             cout<<c<<" occurred "<<arr[c-'a']<<" times"<<endl;
//         };
//     };
// };

// HASHING USING ARRAYS (integer hashing)
// int main(){
//     int n;
//     cout<<"Enter the size of the array: ";
//     cin>>n;
//     int arr[n];
//     int max = INT32_MIN;
//     cout<<"Enter the elements: ";
//     for(int i = 0; i<n; i++)
//     {
//         cin>>arr[i];
//         if(arr[i]>max)
//         {
//             max = arr[i];
//         };
//     };
//     int frekArr[max+1] = {0};
//     for(int i = 0; i<n; i++)
//     {
//         frekArr[arr[i]]++;
//     };
//     int num = 0;
//     while(true)
//     {
//         cin>>num;
//         if(num==-1)
//         {
//             break;
//         };
//         cout<<num<<" occurred "<<frekArr[num]<<" times"<<endl;
//     };
// };
// limitations:
// inside the main function the maximum size of the array that we can declare is 10^7, outside main it's 10^7
// for boolean the values are 10^7 and 10^8

// HASHING BRUTEFORCE
// the bruteforce method
// int frek(int n, vector<int> vect)
// {
//     int count = 0;
//     for(int i = 0; i<vect.size(); i++)
//     {
//         if(vect[i]==n)
//         {
//             count++;
//         }
//     };
//     return count;
// };
// int main(){
//     vector<int> vect{1,2,2,3,3,3,4,4,4,4,5,5,5,5,5,};
//     cout<<frek(1, vect)<<endl;
//     cout<<frek(2, vect)<<endl;
//     cout<<frek(3, vect)<<endl;
//     cout<<frek(4, vect)<<endl;
//     cout<<frek(5, vect)<<endl;
// };
// this has a TC of O(Q*n)
// where n is the size of the vector
// Q is the number of distinct integers present

// GCD/HCF
// int calcGCD(int n, int m)
// {
//     while (n > 0 && m > 0)
//     {
//         if (n > m)
//         {
//             n %= m;
//         }
//         else
//         {
//             m %= n;
//         };
//     };
//     if (n == 0)
//     {
//         return m;
//     }
//     else
//     {
//         return n;
//     };
// };
// int main()
// {
//     cout << calcGCD(20, 10) << endl;
// };
// TC is O(log(min(a,b))) (base phi)

// CHECK PRIME
// one way is to loop till n this will lead to TC O(n)
// another way is to loop till sqrt(n) this will lead to O(sqrt(n))

// PRINT ALL DIVISORS
// void printAllDivs(int n)
// {
//     // for (int i = 1; i <= sqrt(n); i++)
//     for (int i = 1; i*i<=n; i++)
//     {
//         if (n % i == 0)
//         {
//             cout << i << " ";
//             if (n / i != i)
//             {
//                 cout << n/i << " ";
//             }
//         };
//     };
// };
// int main()
// {
//     int n;
//     cin >> n;
//     printAllDivs(n);
// };
// TC of this alsgo is O(sqrt(N))

// CONVERTING NUMBER TO STRING
// int main()
// {
//     int n = 123;
//     string s = to_string(n);
//     cout<<s<<endl;
// }

// EXTRACTION OF DIGITS FROM A NUMBER
// one way
// int main()
// {
//     int n;
//     cout<<"Enter the value of n: ";
//     cin>>n;
//     while(n>0)
//     {
//         int digit = n%10;
//         cout<<digit<<" ";
//         n/=10;
//     };
// };
// TC for this method is O(log10(n))
// second way
// int main(){
//         int n;
//         cout<<"Enter the value of n: ";
//         cin>>n;
//         cout<<"Number of digits: "<<(int)(log10(n)+1)<<endl;
// };

// TLEs
// most of them do 10^8 operations in 1 second

// SPACE COMPLEXITY
// rate at which space occuped increases wrt to input is called the TC
// total space = auxiliary space + input space
// aux space is space taken to solve the problem
// input space is the space to store the input
// never change the input data unless asked to

// TIME COMPLEXITY
// rate at which time taken increases wrt to input is called the TC
// TC is measured in O(n) (Big O Notation)
// rules:
// - always calculate worst case TC
// - avoid constants
// - ignore lower values
// int main()
// {
//     int N;
//     cin>>N;
//     for(int i = 0; i<N; i++)
//     {
//         cout<<"Hi"<<endl;
//     };
// };
// this code has TC of O(n);
// worst case using Big O Notation (upper bound)
// best case using Theta Notation
// average case using Omega Notation (lower bound)
// O(4N^3 + 3N^2 + 8) ~ O(N^3)

// PI
// get pi's value using this
// but first include the the cmath header file
// int main()
// {
//     cout<<M_PI<<endl;
//     return 0;
// };