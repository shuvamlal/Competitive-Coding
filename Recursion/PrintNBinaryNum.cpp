#include<bits/stdc++.h>
using namespace std;

void solve(string op, int n1, int n2, int n, vector<string> &v){
	if (n==0){
		v.push_back(op);
		return;
	}
	string op1=op;
	op1.push_back('1');
	solve(op1, n1+1, n2, n-1, v);
	
	if(n1>n2){
		string op2 = op;
		op2.push_back('0');
		solve(op2, n1, n2+1, n-1, v);
	}
	return;
}

int main(){
	int n=4;
	int n1=0, n2=0;
	vector<string> v;
	string op = "";
	solve(op, n1, n2, n, v);
	
	for(auto x:v){
		cout<<x<<" ";
	}
	return 0;
}