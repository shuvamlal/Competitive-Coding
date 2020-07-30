#include<bits/stdc++.h>
using namespace std;

int solve(vector<int> &v, int index, int k){
	if (v.size()==1){
		return v[0];
	}
	index = (index + k)%v.size();
	v.erase(v.begin()+index);
	return solve(v, index, k);
}

int main(){
	vector<int> v;
	int n=40;
	int k=7;
	
	for(int i=0;i<n;i++){
		v.push_back(i+1);
	}
	
	int ans = solve(v, 0, k-1);
	cout<<ans;
	
	return 0;
}