#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
#define ii pair<int,int>
using namespace std;

void TestCase(){
	int n;
	cin >>n;
	queue <string> q;
	q.push("6");
	q.push("8");
	vector <string> ans;
	while(!q.empty()){
		string t=q.front();
		q.pop();
		if(t.size()>n)
			break;
		ans.push_back(t);
		q.push(t+"6");
		q.push(t+"8");
	}
	cout <<ans.size() <<endl;
	for(int i=ans.size()-1; i>=0; i--){
		cout <<ans[i] <<" ";
	}
	cout <<endl;
}

int main(){
	int t;
	cin >>t;
	while(t--){
		TestCase();
	}
}

