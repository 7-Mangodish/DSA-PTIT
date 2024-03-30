#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long

using namespace std;
int n,k;
int a[12][12];
bool used[12];
vector< vector <int> > v;
vector <int> tmp;
int s=0;

void Try(int i){
	for(int j=1; j<=n; j++){
		if(used[j]){

			tmp.push_back(j);
			s+=a[i][j];
//			cout <<i <<" " <<j <<" "<<s <<endl;
			used[j]=false;
			if(i<n)
				Try(i+1);
			else{
				if(s==k)
					v.push_back(tmp);
			}
			
			tmp.pop_back();
			s-=a[i][j];
			used[j]=true;
		}
	}
}

int main(){
	cin >> n >>k;
	memset(used, true, sizeof(used));
	for(int i =1; i<=n; i++){
		for(int j=1; j<=n; j++){
			cin >>a[i][j];
		}
	}
	Try(1);
	cout <<v.size() <<endl;
	for(auto x:v){
		for(auto i:x)
			cout <<i <<" ";
		cout <<endl;
	}
}
