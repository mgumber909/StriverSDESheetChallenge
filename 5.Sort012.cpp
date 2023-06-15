#include <bits/stdc++.h> 
void sort012(int *arr, int n)
{
   int z=0,o=0,t=0;
   for(int i=0;i<n;i++){
      if(arr[i]==0) z++;
      if(arr[i]==1) o++;
      if(arr[i]==2) t++;
   }
   int i=0;
   while(z--) arr[i++]=0;
   while(o--) arr[i++]=1;
   while(t--) arr[i++]=2;

}
