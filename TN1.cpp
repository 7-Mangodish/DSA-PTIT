#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long

using namespace std;

int main(){
	int t;
	cin >>t;
	cin.ignore();
	while(t--){
//		cin.ignore();
		string s;
		getline(cin,s);
		vector <string> v;
		stringstream ss(s);
		string tmp;
		while(ss >> tmp){
			v.push_back(tmp);
		}
		for(auto x:v){
			for(int j=x.size()-1; j>=0; j--){
				cout <<x[j];
			}
			cout <<" ";
		}
		cout <<endl;
	}
}
/*
2
ABC DEF
123 456
*/