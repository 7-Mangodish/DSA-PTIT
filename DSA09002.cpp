#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long

using namespace std;

int main(){
	int v;
	cin >>v;
	cin.ignore();
	vector <int> vt[55];
	for(int i=1; i<=v; i++){
		string s;
		getline(cin,s);
		stringstream ss(s);
		string tmp;
		while(ss>>tmp){
			int a=stoi(tmp);
			vt[i].push_back(a);
		}
	}
	for(int i=1; i<=v; i++){
		for(auto x:vt[i]){
			if(x>i){
				cout <<i << " "<<x <<'\n';
			}
		}
	}
}
//3
//2 3
//1 3
//1 2

 
