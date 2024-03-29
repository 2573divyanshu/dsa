// count digits (one way)
// int digitCount = (int)(log10(n)+1);

// count digits (second way)
// keep extracting digits untill nothing's left

// constructing a number from digits
// initialize number = 0;
// keep doing number = number*10 + digit;

// gcd of a and b is:
// gcd of a%b and b (if a>b)
// gcd of b%a and a (if b>a)

// sum of divisors of all whole numbers from 1 to n (both inclusive)
// 1*(n/1) + 2*(n/2) + 3*(n/3) + 4*(n/4) + 5*(n/5)

// check prime
// instead of running the loop from 1 to n 
// run it from 1 to sqrt(n)

// sum of divisors of n
// run loop till sqrt(n)
// add the divisor
// divide the n by the divisor
// if the result is not is not the same divisor
// then add the sum also
// for (int i = 1; i*i<n; i++)
// {
//     if(n%i==0)
//     {
//         sum+=i;
//         if(n/i!=i)
//         {
//             sum += n/i;
//         };
//     };
// };

// getting binary of a number
// int result = 0;
// int mult = 1;
// while(n!=0)
// {
//   int lastBit = n&1;
//   result += lastBit*mult;
//   mult*=10;
//   n>>=1;
// };

// getting binary of a number
// bitset<32> bit1(n);
// string s1 = bit1.to_string();

// getting number from a binary
// long long ans = bitset<32>(binRepr).to_ulong();

// rotating an array to the left by k places
// for(int i = 0; i<n; i++)
// {
//   vect[(i+(n-k))%k] = vectCopy(i);
// }

// rotating an array to the right by k places
// for(int i = 0; i<n; i++)
// {
//   vect[(i+k)%k] = vectCopy(i);
// }

