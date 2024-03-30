#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
#define forl(i,a,b) for(int i=a; i<b; i++)
#define forb(i,a,b) for(int i=a; i<=b; i++)

using namespace std;
int n;
string a;
bool ok=true;
void ktao(){
	for(int i=1; i<=n; i++)
		{
			a[i]='A';
		}
}

void sinh(){
	int i=n;
	while(a[i]!='A')
		{
			--i;
			if(i==0)
				break;
		}
	if(i==0)
		ok=false;
	else
		{
			for(int j=i; j<=n; j++)
				{
					if(a[j]=='A')
						a[j]='B';
					else
						a[j]='A';
				}
		}
}
int main(){
	int t;
	cin >>t;
	while(t--)
		{
			cin >>n;
			ktao();
			while(ok)
				{
					for(int i=1; i<=n; i++)
						{
							cout << a[i];		
						}	
					cout <<" ";
					sinh();	
				}		
			ok=true;
			cout <<endl;
		}
}
