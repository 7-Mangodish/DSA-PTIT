#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long

using namespace std;

int a[1005][1005];
int main(){
	int n;
	cin >>n;
	cin.ignore();
	memset(a, 0, sizeof a);
	for(int i=1; i<=n; i++){
		string s;
		getline(cin ,s);
		stringstream ss(s);
		string tmp;
		while(ss >>tmp){
			int m=stoi(tmp);
			a[i][m]=a[m][i]=1;
		}
	}
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++)
			cout <<a[i][j] <<" ";
		cout <<endl;
	}
}
/*
3
2 3
1 3
1 2
*/