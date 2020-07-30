#include<bits/stdc++.h>
using namespace std;

void solve(string ip, string op){
	if(ip.length()==0){
		cout<<op<<"\n";
		return;
	}
	if (isdigit(ip[0])){
		op.push_back(ip[0]);
		// op2.push_back(ip[0]);
		ip.erase(ip.begin());
		solve(ip, op);
	}
	else{
		string op1=op;
		string op2=op;
		if (isalpha(ip[0])){
			op1.push_back(ip[0]);
			op2.push_back(isupper(ip[0])?tolower(ip[0]):toupper(ip[0]));
			ip.erase(ip.begin());
			solve(ip, op1);
			solve(ip, op2);
		}	
	}
	return;
}

int main(){
	string ip="a1B6";
	string op="";
	solve(ip, op);
	return 0;
}