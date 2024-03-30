
#include<bits/stdc++.h>
#define ll long long
#define ii pair<int, int>
#define mod (int)1e9+7
using namespace std;

vector <string> v;

// Tinhhau to
ll sol_ht(){
	stack<ll> s;
	for(auto x:v){
		if(x!="*" && x!="/" && x!="+" && x!="-"){
			ll tmp=stoll(x);
			s.push(tmp);
		}
		else{
			ll op1=s.top(); s.pop();
			ll op2=s.top(); s.pop();
			ll tmp;
			if(x=="+")
				tmp=op1+op2;
			if(x=="-")
				tmp=op2-op1;
			if(x=="*")
				tmp=op2*op1;
			if(x=="/")
				tmp=op2/op1;
			s.push(tmp);
		}
	}
	return s.top();
}

//Tinh tien to
ll sol_tt(){

	stack<ll> s;
	for(int i=v.size()-1; i>=0; i--){
		if(v[i]!="*" && v[i]!="/" && v[i]!="+" && v[i]!="-"){
			ll tmp=stoll(v[i]);
			s.push(tmp);
		}
		else{
			ll op1=s.top(); s.pop();
			ll op2=s.top(); s.pop();
			ll tmp;
			if(v[i]=="+")
				tmp=op1+op2;
			if(v[i]=="-")
				tmp=op1-op2;
			if(v[i]=="*")
				tmp=op2*op1;
			if(v[i]=="/")
				tmp=op1/op2;
			s.push(tmp);
		}
	}
	return s.top();	
}

int main(){
	int t;
	cin >>t;
	while(t--){
		int n;
		cin >>n;
		cin.ignore();
		v.clear();
		
		string s;
		getline(cin, s);
		stringstream ss(s);
		string tmp;
		while(ss >>tmp){
			v.push_back(tmp);
		}	
		ll ans;
		// Neu phan tu dau tien la toan hang ->> hau to
		if(v[0]!="*" && v[0]!="/" && v[0]!="+" && v[0]!="-") 
			ans=sol_ht();
		// nguoc lai
		else
			ans=sol_tt();
		cout <<ans <<endl;
	}
}
/*
3 
7
2 3 1 * + 9 -
7
- + 8 * 7 5 9 
3
-4 -10 + 
*/
