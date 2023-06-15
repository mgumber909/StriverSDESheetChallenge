#include <bits/stdc++.h> 
long long maxSubarraySum(int arr[], int n)
{
   long long int sum=0,m=0;
   for(int i=0;i<n;i++){
       m+=arr[i];
       sum=max(sum,m);
       m=max(m,0LL);
   }

   return sum;
}
