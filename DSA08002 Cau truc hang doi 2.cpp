#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
#define ii pair<int,int>
using namespace std;

void TestCase(int t){
	queue<int> q;
	while(t--){
		string s;
		getline(cin, s);
		stringstream ss(s);
		string tmp;
		vector <string> v;
		while(ss >>tmp){
			v.push_back(tmp);
		}
		if(v[0]=="PUSH"){
			q.push(stoi(v[1]));
		}
		if(v[0]=="PRINTFRONT"){
			if(q.empty())
				cout <<"NONE";
			else
				cout <<q.front();
		}
		if(v[0]=="POP"){
			if(!q.empty())
				q.pop();
		}
		cout <<endl;
	}
}

int main(){
	int t;
	cin >>t;
	cin.ignore();
	TestCase(t);
}
/*
9
PUSH 1
PUSH 2
POP
PRINTFRONT
PUSH 3
PRINTFRONT
POP
POP
PRINTFRONT
*/
