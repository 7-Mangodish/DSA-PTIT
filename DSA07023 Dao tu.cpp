#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
#define ii pair<int,int>
using namespace std;

int main(){
	int t;
	cin >>t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin, s);
		stringstream ss(s);
		string tmp;
		stack<string> st;
		while(ss >>tmp){
			st.push(tmp);
		}
		while(!st.empty()){
			cout <<st.top()<<" ";
			st.pop();
		}
		cout <<endl;
	}
}
