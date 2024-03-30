#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
#define forl(i,a,b) for(int i=a; i<b; i++)
#define forb(i,a,b) for(int i=a; i<=b; i++)

using namespace std;

int main(){
	int t;
	cin >>t;
	while(t--){
		int n,k;
		cin >>n >>k;
		int a[k+1];
		set <int> s;
		for(int i=1; i<=k; i++){
			cin >>a[i];
			s.insert(a[i]);
		}
		int before=s.size();
		
		int i=k;
		while(a[i]==n-k+i){// lap cho den khi tim den phan tu khac;
			--i;
		}
		if(i==0)
			cout <<k <<endl;
		else{
			++a[i];
			s.insert(a[i]);
			for(int j=i+1; j<=k; j++){
				a[j]=a[j-1]+1;	
				s.insert(a[j]);
			}
			cout <<s.size()-before <<endl;
		}

	}
}
