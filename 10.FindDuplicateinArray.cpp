#include <bits/stdc++.h>

int findDuplicate(vector<int> &arr, int n){
	vector<int> v(n);
	for(int i=0;i<n;i++){
		v[arr[i]]++;
		if(v[arr[i]]==2) return arr[i];
	}
	
}
