#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
#define forl(i,a,b) for(int i=a; i<b; i++)
#define forb(i,a,b) for(int i=a; i<=b; i++)

using namespace std;
void merge(int a[], int l, int m, int r){
	vector <int> v1(a+l,a+m+1);
	vector <int> v2(a+m+1,a+r+1);
	int i=0,
	j=0;
	while(i<v1.size() && j<v2.size())
		{
			if(v1[i] <v2[j])
				{
					a[l]=v1[i];
					++l;
					++i;
				}
			else
				{
					a[l]=v2[j];
					++l;
					++j;
				}
		}
	while(i<v1.size())
		{
			a[l++]=v1[i];
			++i;
		}
	while(j<v2.size())
		{
			a[l++]=v2[j];
			++j;
		}
}

void merge_sort(int a[], int l, int r){
	if(l>=r)
		return;
	int m=(l+r)/2;
	merge_sort(a,l,m);
	merge_sort(a,m+1,r);
	merge(a,l,m,r);
}

int main(){
	int t;
	cin >>t;
	while(t--)
		{
			int n;
			cin >>n;
			int a[n];
			for(int &x:a)
				cin >>x;
			merge_sort(a,0,n-1);
			for(int x:a)
				cout <<x <<" ";
			cout <<endl;
		}
}
