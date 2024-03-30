#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long

using namespace std;

int main(){
	vector <string> v;
	int q;
	cin >>q;
	cin.ignore();	
	while(q--){
		string s;
		getline(cin,s);
		stringstream ss(s);
		string tmp;
		vector <string> res;
		while(ss >>tmp){
			res.push_back(tmp);
		}
//		cout <<res.size() <<endl;
		if(res[0]=="PUSH")
			v.push_back(res[1]);
		if(res[0]=="POP"){
			if(v.empty())
				continue;
			else
				v.pop_back();					
		}
		if(res[0]=="PRINT"){
			if(v.empty())
				cout <<"NONE";
			else
				cout <<v.back();
			cout <<endl;
		}
	}
}
/*
9
PUSH 1
PUSH 2
POP
PRINT
PUSH 3
PRINT
POP
POP
PRINT
*/