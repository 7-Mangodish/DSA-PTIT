#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
#define forl(i,a,b) for(int i=a; i<b; i++)
#define forb(i,a,b) for(int i=a; i<=b; i++)

using namespace std;

string s;
int a[20], used[20];
map<int,char> mp;
void out(){
	for(int i=1; i<=s.length(); i++){
		cout <<mp[a[i]];
	}
	cout <<" ";
}

void Try(int k){
	for(int i=1; i<=s.length(); i++){
		if(used[i]==0){// chua dc xu dung
			a[k]=i;
			used[i]=1;// da duoc su dung;
			if(k==s.length())
				out();
			else
				Try(k+1);
			// backtrack;
			used[i]=0;
		}


	}
}
int main(){
	int t;
	cin >>t;
	while(t--){
		cin >>s;
		for(int i=1; i<=s.length(); i++){
			mp[i]=s[i-1];
		}
		Try(1);
		s.clear();
		mp.clear();
		cout <<endl;
	}
}
