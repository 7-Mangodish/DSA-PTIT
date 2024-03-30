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
			int n,m;
			cin >>n >>m;
			set <int> s1;//union
			set<int> s2;
			for(int i=0; i<n; i++)
				{
					int tmp;
					cin >>tmp;
					s1.insert(tmp);
				}
			for(int i=0; i<m; i++)
				{
					int tmp;
					cin >>tmp;
					if(s1.find(tmp)!=s1.end())
						{
							s2.insert(tmp);
						}
					s1.insert(tmp);
				}
			for(int x:s1)
				cout <<x <<" ";
			cout <<endl;
			for(int x:s2)
				cout <<x <<" ";
			cout <<endl;
		}
}
