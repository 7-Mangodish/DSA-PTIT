#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long

using namespace std;

int main(){
	int t;
	cin >>t;
	while(t--){
		string s;
		cin >>s;
		sort(s.begin(), s.end());
		do{
			cout <<stoi(s) <<endl;
		}
		while(next_permutation(s.begin(), s.end()));
	}
}
