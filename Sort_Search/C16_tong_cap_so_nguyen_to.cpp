#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
#define forl(i,a,b) for(int i=a; i<b; i++)
#define forb(i,a,b) for(int i=a; i<=b; i++)

using namespace std;
bool chk(int n){
	if(n<2)
		return false;
	for(int i=2; i<=sqrt(n); i++)
		{
			if(n%i==0)
				return false;
		}
	return true;
}
int main(){
	int t;
	cin >>t;
	while(t--)
		{
			int n;
			cin >>n;
			bool ok=false;
			for(int i=2; i<=n/2; i++)
				{
					if(chk(i)== true && chk(n-i)==true)
						{
							cout <<i <<" "<<n-i <<endl;
							ok=true; 
							break;
						}
				}
			if(!ok)
				cout <<-1 <<endl;
		}
}
