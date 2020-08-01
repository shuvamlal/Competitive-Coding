#include<bits/stdc++.h>
using namespace std;

int main(){
	int wt[4] = {1,3,4,5};
	int val[4] = {1,4,5,7};
	int w=7;
	int n=4;
	int t[n+1][w+1];
	
	for(int i=0;i<n+1;i++){
		for(int j=0;j<w+1;j++){
			if(i==0 || j==0)
				t[i][j] = 0;
		}
	}
	
	for(int i=1;i<n+1;i++)
		for(int j=1;j<w+1;j++){
			if (wt[i-1] <= j){
				t[i][j] = max(val[i-1] + t[i-1][j-wt[i-1]], t[i-1][j]);
			}
			else if (wt[i-1] > j){
				t[i][j] = t[i-1][j];
			}
		}
		
	cout<<t[n][w]<<endl;
	
	for(int i=0;i<n+1;i++){
		for(int j=0;j<w+1;j++)
			cout<<t[i][j]<<" ";
		cout<<endl;
	}
	return 0;
}