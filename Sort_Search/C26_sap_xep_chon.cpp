#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
#define forl(i,a,b) for(int i=a; i<b; i++)
#define forb(i,a,b) for(int i=a; i<=b; i++)

using namespace std;

int main(){
	int n;
	cin >>n;
	int a[n];
	for(int &x :a)
		cin >>x;
	int k=1;
	for(int i=0; i<n-1; i++)
		{
			int min=i;
			for(int j=i+1; j<n; j++)
				{
					if(a[j] <a[min])
						min=j;
				}
			swap(a[min], a[i]);
			cout <<"Buoc " <<k++ <<": ";
			for(int x:a)
				cout <<x <<" ";
			cout <<endl;
			
		}
}
