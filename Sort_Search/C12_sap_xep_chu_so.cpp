#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
#define forl(i,a,b) for(int i=a; i<b; i++)
#define forb(i,a,b) for(int i=a; i<=b; i++)

using namespace std;

int main(){
	int t;
	cin >>t;
	
	while(t--)
		{
			int n;
			cin >>n;
			cin.ignore();
			set <char> s;
			for(int i=0; i<n; i++)
				{
					string tmp;
					cin >>tmp;
					for(int j=0; j<tmp.length(); j++)
						{
							s.insert(tmp[j]);
						}
				}
			for(auto x:s)
				cout <<x <<" ";
			cout <<endl;
		}
}
