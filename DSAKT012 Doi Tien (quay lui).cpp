#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
#define ii pair<int,int>
using namespace std;
int n,s;
int a[50];
//vector <int> v;
int cnt=0, sum=0, ans=INT_MAX;
bool used[50];
void ktao(){
	cin >>n >>s;
	for(int i=1; i<=n; i++)
		cin >>a[i];
	memset(used, false, sizeof used);
}

void Try(int k){
	for(int i=k+1; i<=n; i++){
		if(!used[i]){
			sum+=a[i];
			used[i]=true;
			cnt++;
			if(sum<s){
				Try(i);
			}
			else{
				if(sum==s){
					ans=min(ans, cnt);
				}
				else{
					cnt--;
					sum-=a[i];
					used[i]=false;				
					return;	
				}
			}
			cnt--;
			sum-=a[i];
			used[i]=false;
		}
	}
}
int main(){
	ktao();
	Try(0);
	if(ans==INT_MAX)
		cout <<-1;
	else
		cout <<ans;
}
