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
			vector <string> v;
			int cnt=1;
			
			int n;
			cin >>n;
			int a[n];
			for(int &x:a)
				cin >>x;
			for(int i=0; i<n-1; i++)
				{
					for(int j=i+1; j<n; j++)
						{
							if(a[i] >a[j])
								{
									swap(a[i],a[j]);
								}
						}
					string tmp="Buoc " +to_string(cnt++) +":";
					for(int x:a)
						{
							tmp+= " "+to_string(x);
						}
					v.push_back(tmp);
				}
			for(int i=v.size()-1; i>=0; i--)
				{
					cout <<v[i] <<endl;
				}
		}
}
