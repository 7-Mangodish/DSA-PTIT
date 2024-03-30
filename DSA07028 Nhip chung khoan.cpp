#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
#define ii pair<int,int>
using namespace std;

int main(){
	int t;
	cin >>t;
	while(t--){
		int n;
		cin >>n;
		int a[n+1];
		for(int i=1; i<=n; i++)
			cin >>a[i];
		int f[n+1]; // F[i] Luu day tang liwn tiep tai gia tri i
		fill(f, f+n+1, 1);
		
		int i=1; 
		stack <int> s;
		while(i <=n){
			// Neu stack rong va gia tri dang xet van nho hon gia tri tai dinh
			if(s.empty() || a[s.top()] >a[i]){
				s.push(i);
				++i;
			}
			else{
			// 
				int t=s.top(); s.pop();
				f[i]+=f[t];
				
			}
		}
		for(int i=1; i<=n; i++)
			cout <<f[i] <<" ";
		cout <<endl;
	}
}
