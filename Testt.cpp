#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
#define ii pair<int,int>
using namespace std;

int main(){
	string s="0 1";
		stringstream ss(s);
		string tmp;
		vector <int> v;
		while(ss >>tmp){
			v.push_back(stoi(tmp));
		}
		for(auto x:v)
			cout <<x <<" ";
}
