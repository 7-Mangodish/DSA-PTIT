#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
#define forl(i,a,b) for(int i=a; i<b; i++)
#define forb(i,a,b) for(int i=a; i<=b; i++)

using namespace std;
string s;
bool ok=true;


int main(){
	int t;
	cin >>t;
	int cnt;
	while(t--){
		int cnt;
		string s;
		cin >>cnt;
		cin >>s;
		cout <<cnt << " ";
		if(next_permutation(s.begin(), s.end()))
			cout <<s <<endl;
		else
			cout <<"BIGGEST" <<endl;
	}
}
