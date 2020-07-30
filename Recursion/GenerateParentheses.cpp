#include<bits/stdc++.h>
using namespace std;

void solve(string op, int open, int close, vector<string> &v){
	if (open==0 && close==0){
		v.push_back(op);
		return;
	}
	if (open!=0){
		string op1 = op;
		op1.push_back('(');
		solve(op1, open-1, close, v);
	}
	if (open < close){
		string op2= op;
		op2.push_back(')');
		solve(op2, open, close-1, v);
	}
	return;
}

int main(){
	int n=4;
	int open=n, close=n;
	vector<string> v;
	string op="";
	solve(op, open, close, v);
	for(auto x:v){
		cout<<x<<" ";
	}
	cout<<"\n";
	cout<<v.size();
	return 0;
}