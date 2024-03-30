#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
#define forl(i,a,b) for(int i=a; i<b; i++)
#define forb(i,a,b) for(int i=a; i<=b; i++)

using namespace std;

char c; int n;
vector <char> s;
void Try(char i){
	for(char j=i; j<=c; j++){
		s.push_back(j);
		if(s.size()==n){
			for(auto x:s)
				cout <<x;
			cout <<endl;
		}
			
		else
			Try(j);
		s.pop_back();
	}
}

int main(){
	cin >>c >>n;
	Try('A');
}
