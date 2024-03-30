#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
#define ii pair<int,int>
using namespace std;

void TestCase(){
	int n;
	cin >>n;
	vector <string> ans;
	queue <string> q;
	q.push("1");
	ans.push_back("1");
	while(ans.size()<=n && !q.empty()){
		auto t=q.front(); q.pop();
		
		string tmp1=t+"0";
		ans.push_back(tmp1);
		q.push(tmp1);
		
		string tmp2=t+"1";
		ans.push_back(tmp2);
		q.push(tmp2);
		
	}
	for(int i=0; i<n; i++)
		cout <<ans[i] <<" ";
	cout <<endl;
}

int main(){
	int t;
	cin >>t;
	while(t--){
		TestCase();
	}
}
