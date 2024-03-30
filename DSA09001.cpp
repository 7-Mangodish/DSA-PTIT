#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long

using namespace std;
int v,e;
int main(){
	int t;
	cin >>t;
	while(t--){
		cin >>v >>e;
		vector <int> vt[1003];
		for(int i=0; i<e; i++){
			int x,y;
			cin >>x >>y;
			vt[x].push_back(y);
			vt[y].push_back(x);
		}
		for(int i=1; i<=v; i++){
			cout <<i <<':';
			for(auto x:vt[i])
				cout <<" "<<x;
			cout <<endl;
		}
	}
}
/*
Input:
1

6  9

1  2

1  3 

2  3

2  5

3  4

3  5

4  5

4  6

5  6

*/
