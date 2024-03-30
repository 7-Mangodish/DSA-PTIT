#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
#define ii pair<int,int>
using namespace std;

void TestCase(int t){
	queue<int> q;
	cin.ignore();
	while(t--){
		string s;
		getline(cin, s);
		stringstream ss(s);
		string tmp;
		vector <int> v;
		while(ss >>tmp){
			v.push_back(stoi(tmp));
		}
		int n=v[0];
		if(n==1)
			cout <<q.size();
		if(n==2){
			if(q.empty())
				cout <<"YES";
			else
				cout <<"NO";
		}
		if(n==3){
			q.push(v[1]);
		}
		if(n==4){
			if(!q.empty())
				q.pop();
		}
		if(n==5){
			if(q.empty())
				cout <<-1;
			else
				cout <<q.front();
		}
		if(n==6){
			if(q.empty())
				cout <<-1;
			else
				cout <<q.back();			
		}
		cout <<endl;
	}
}

int main(){
	int t;
	cin >>t;
	while(t--){
		int q;
		cin >>q;
		TestCase(q);
		cout <<endl;
	}
}
/*
1
14
3 1
3 2
3 3
5
6
4
4
4
4
4
3 5
3 6
5
1
*/
