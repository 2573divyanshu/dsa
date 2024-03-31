#include<bits/stdc++.h>
using namespace std;

// ⚡ 

// ⚡ ODD CHECK (FASTER)
// n&1

// ⚡ DIVISION BY (FASTER)
// n>>1;

// ⚡ COUNT NUMBER OF SET BITS
// METHOD 1 (BRUTEFORCE)
// int countSetBits(int n)
// {
//     int count = 0;
//     while(n!=0)
//     {
//         count += n&1;
//         n>>=1;
//     };
//     return count;
// };
// METHOD 2 (OPTIMAL)
// int countSetBits(int n)
// {
//     int count = 0;
//     while(n!=0)
//     {
//         count++;
//         n = n&(n-1);
//     };
//     return count;
// };
// TC is O(number of setBits)
// TC is O(31) for worst case
// int main(){
//     int n;
//     cout<<"Enter the value of n: ";
//     cin>>n;
//     cout<<"number of set bits "<<countSetBits(n)<<endl;
//     return 0;
// };

// ⚡ CHECK IF THE NUMBER IS POWER OF 2 OR NOT
// int checkIfPowerOf2(int n)
// {
//     if(n<=0) return 0;
//     return ((n&(n-1))==0);
// };
// int main()
// {
//     int n;
//     cout<<"Enter the value of n: ";
//     cin>>n;
//     if(checkIfPowerOf2(n))
//     {
//         cout<<"yes"<<endl;
//     }
//     else
//     {
//         cout<<"no"<<endl;
//     };
//     return 0;
// };

// ⚡ REMOVING THE LAST SET BIT (RIGHTMOST)
// METHOD 1 (BRUTEFORCE)
// int removeLastSetBit(int n)
// {
//     int mask = 1;
//     while((n&mask)==0)
//     {
//         mask<<=1;
//     };
//     return n^mask;
// };
// METHOD 2 (OPTIMAL)
// int removeLastSetBit(int n)
// {
//     return n&(n-1);
// };
// int main()
// {
//     int n;
//     cout<<"Enter the value of n: ";
//     cin>>n;
//     cout<<removeLastSetBit(n);
// };

// ⚡ RELATION BETWEEN THE BINARY REPRESENTATION OF N AND N-1
// a-0 = 16 10000
// a-1 = 15 01111
// b-0 = 40 101000
// b-1 = 39 100111
// c-0 = 84 1010100
// c-1 = 83 1010011

// ⚡ TOGGLE THE ITH BIT
// METHOD 1 (BRUTEFORCE)
// int toggleIthBit(int n,int i)
// {
//     if(n&(1<<i))
//     {
//         return n&~(1<<i);
//     }
//     else
//     {
//         return n|(1<<i);
//     };
// };
// METHOD 2 (OPTIMAL)
// int togggleIthBit(int n, int i)
// {
//     return n^(1<<i);
// };
// int main()
// {
//     int n;
//     int i;
//     cout<<"Enter the value of n: "<<endl;
//     cin>>n;
//     cout<<"Enter thev value of i: "<<endl;
//     cin>>i;
//     cout<<togggleIthBit(n,i)<<endl;
//     return 0;
// };

// ⚡ UNSET THE ITH BIT
// METHOD 1 (BRUTE FORCE)
// int unsetIthBit(int n, int i)
// {
//     int mask = 0;
//     int nCopy = n;
//     while(nCopy!=0)
//     {
//         mask = (mask<<1)|1;
//         nCopy>>=1;
//     };
//     // return ~(mask&(1<<i))&n;
// };
// METHOD 2 (BETTER) 
// int unsetIthBit(int n, int i)
// {
//     return n&(__INT32_MAX__-(1<<i));
// };
// METHOD 3 (OPTIMAL)
// int unsetIthBit(int n, int i)
// {
//     return n&(~(1<<i));
// };
// int main()
// {
//     int n;
//     int i;
//     cout<<"Enter the value of n: ";
//     cin>>n;
//     cout<<"Enter the value of i: ";
//     cin>>i;
//     cout<<unsetIthBit(n,i)<<endl;
//     return 0;
// };

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
// another way
// void swap(int &a, int &b)
// {
//     a = a+b;
//     b = a-b;
//     a = a-b;
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
//     // cout<<"its ones compliment is "<<(~n)<<endl;
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