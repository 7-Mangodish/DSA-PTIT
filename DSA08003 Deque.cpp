#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
#define ii pair<int,int>
using namespace std;

void TestCase(int t){
	deque<int> q;
	while(t--){
		string s;
		getline(cin, s);
		stringstream ss(s);
		string tmp;
		vector <string> v;
		while(ss >>tmp){
			v.push_back(tmp);
		}
		if(v[0]=="PUSHFRONT"){
			q.push_front(stoi(v[1]));
		}
		
		if(v[0]=="PRINTFRONT"){
//			cout <<q.size() <<endl;
			if(q.empty())
				cout <<"NONE";
			else
				cout <<q.front();
		}
		
		if(v[0]=="POPFRONT"){
			if(!q.empty())
				q.pop_front();
		}
		
		if(v[0]=="PUSHBACK"){
			q.push_back(stoi(v[1]));
		}
		
		if(v[0]=="PRINTBACK"){
			if(q.empty())
				cout <<"NONE";
			else
				cout <<q.back();			
		}
		
		if(v[0]=="POPBACK"){
			if(!q.empty())
				q.pop_back();			
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
10
PUSHBACK 1
PUSHFRONT 2
PUSHBACK 3
PRINTFRONT
POPFRONT
PRINTFRONT
POPFRONT
PRINTBACK
POPFRONT
PRINTBACK
*/