#include<bits/stdc++.h>
using namespace std;

int main(){
	int arr[] = {2,3,5,6,8,10};
	int sum = 10;
	int n = sizeof(arr)/sizeof(int);
	int t[n+1][sum+1];
	
	for(int i=0;i<=n;i++){
		for(int j=0;j<=sum;j++){
			if (i==0 && j != 0){
				t[i][j] = 0;
			}
			else if(j==0){
				t[i][j] = 1;
			}
		}
	}
	
	for(int i=1;i<=n;i++){
		for(int j=1;j<=sum;j++){
			if (arr[i-1] <= j){
				t[i][j] = t[i-1][j-arr[i-1]] + t[i-1][j];
			}
			else{
				t[i][j] = t[i-1][j];
			}
		}
	}
	
	for(int i=0;i<=n;i++){
		for(int j=0;j<=sum;j++){
			cout<<t[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}