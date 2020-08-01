#include<bits/stdc++.h>
using namespace std;

vector<int> v[100], vis(100), len(100);

void dfs(int node, int cnt){
	vis[node] = 1;
	len[node] = cnt;
	for(auto child: v[node]){
		if (vis[child]==0){
			dfs(child, len[node]+1);
		}
	}
}

int main(){
	
	int n, e;
	cin>>n>>e;
	int x, y;
	for(int i=0;i<e;i++){
		cin>>x>>y;
		v[x].push_back(y);
		v[y].push_back(x);
	}
	
	int cnt=0;
	
	dfs(9, cnt);
	
	for(int i=1;i<n;i++){
		cout<<i<<"->"<<len[i]<<"\n";
	}
	cout<<endl;
	
	return 0;
}