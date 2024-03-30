#include<bits/stdc++.h>
using namespace std;

// ⚡ UNSET THE ITH BIT
int main(){
    int n;
    cout<<"Enter the value of n: ";
    int i;
    cout<<"Enter the value of i: ";
    cout<<unset(n,i)<<endl;
    return 0;
};

// ⚡ SET THE iTH BIT
// int setNthBit(int i, int n)
// {
//     return (n|(1<<i));
// };
// // TC IS O(1)
// int main(){
//     int n;
//     int i;
//     cout<<"Enter the value of n: ";
//     cin>>n;
//     cout<<"Enter the value of i: ";
//     cin>>i;
//     cout<<setNthBit(i,n);
//     return 0;
// };

// ⚡ CHECK IF ITH BIT OF N IS SET OR NOT
// METHOD 1
// int checkIfSet(int m, int n)
// {
//     int i = 0;
//     int lastBit = 0;
//     while(m!=0 && i<=n)
//     {
//         lastBit = m%2;
//         m/=2;
//         i++;
//     };
//     if(i!=n+1) return 0;
//     if(lastBit) return 1;
//     return 0;
// };
// TC O(n)
// METHOD 2 (USING LEFT SHIFT OPERATOR)
// left shift 1 by i
// do thisNum&n 
// if result is 0 then the bit isn't set
// if result is non 0 then the bit is set
// int checkIfSet(int n, int i)
// {
//     return (n&(1<<i))!=0;
// };
// TC is O(1)
// METHOD 3 (USING RIGHT SHIFT)
// int checkIfSet(int n, int i)
// {
//     return ((n>>i)&1)!=0;
// };
// right shift n by i
// do thisNum^1
// if result is 0 then the bit isn't set
// if the result in non 0 then the bit is set
// TC is O(1);
// int main()
// {
//     int n;
//     int i;
//     cout<<"Enter the value of n: ";
//     cin>>n;
//     cout<<"Enter the value of i: ";
//     cin>>i;
//     cout<<checkIfSet(n,i)<<endl;
// };

// ⚡ SWAP TWO NUMBERS
// without using extra space
// void swap(int &a, int &b)
// {
//     a = a^b;
//     b = a^b;
//     a = a^b;
// };
// int main()
// {
//     int a;
//     int b;
//     cout<<"Enter a: ";
//     cin>>a;
//     cout<<"Enter b: ";
//     cin>>b;
//     cout<<"a is "<<a<<" b is "<<b<<endl;
//     swap(a,b);
//     cout<<"a is "<<a<<" b is "<<b<<endl;
//     return 0;
// };

// ⚡ NOT OPERATOR
// just flip the bits

// ⚡ LEFT SHIFT
// x<<k means x*(2^k) 
// (2^31 - 1)<<1 returns overflow

// ⚡ STORING INTEGERS
// out of 32 bits 1st bit is reserved for the sign
// rest 31 bits are used for storing the magnitude
// for storing positive integers, last bit is 0, rest bits store the magnitude
// for storing the negative integer, we first assume the integer to be positive but store it's two's comliment

// ⚡ RIGHT SHIFT
// x>>k returns floor(x/(2^k))

// ⚡ XOR OPERATOR
// if number of 1s is even then 0
// if number of 1s is odd then 1
// int main()
// {
//     int n1 = 13;
//     int n2 = 7;
//     // 13 is 1101
//     // 7 is  0111
//     // 13^2  1010 
//     cout<<(n1^n2)<<endl;
//     return 0;
// };

// ⚡ TWO'S COMPLIMENT
// find one's compliment and add 1 to it

// ⚡ ONE'S COMPLIMENT
// int onescompliment(int n)
// {
//     int result = 0;
//     int mult = 1;
//     while(n!=0)
//     {
//         cout<<(n%2)<<" "<<!(n%2)<<endl;
//         if(n%2==0)
//         {
//             result+=mult;
//         };
//         mult*=2;
//         n/=2;
//     };
//     return result;
// };
// int main()
// {
//     int n;
//     cout<<"Enter the value of n: ";
//     cin>>n;
//     cout<<onescompliment(n)<<endl;
// };

// ⚡ BINARY STRING TO INTEGER 
// int toDecimal(string s)
// {
//     int result = 0;
//     int mult = 1;
//     for(int i = s.length()-1; i>=0; i--)
//     {
//         if(s[i]=='1')
//         {
//             result+=mult;
//         }
//         mult*=2;
//     };
//     return result;
// };
// int main(){
//     string s;
//     cout<<"Enter the string: ";
//     cin>>s;
//     cout<<toDecimal(s)<<endl;
// };

// ⚡ INTEGER TO BINARY STRING
// string binaryString(int n)
// {
//     string result = "";
//     while(n!=0)
//     {
//         cout<<"n is "<<n<<endl;
//         if(n%2==1)
//         {
//             result+="1";
//         }
//         else
//         {
//             result+="0";
//         };
//         n/=2;
//     };
//     reverse(result.begin(),result.end());
//     cout<<result<<endl;
//     return result;
// };
// int main()
// {
//     int n;
//     cout<<"Enter the value of n: ";
//     cin>>n;
//     binaryString(n);
// };