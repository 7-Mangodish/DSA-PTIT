#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
#define ii pair<int,int>
using namespace std;
int V,E;
vector <ii> e[1005];
int d[1005][1005];
void ktao(){
	cin >> V >>E;
	for(int i=1; i<=V; i++){
		for(int j=1; j<=E; j++){
			if(i==j)
				d[i][j]=0;
			else{
				d[i][j]=mod;
			}
		}
	}
	for(int i=1; i<=E; i++){
		int x,y,w;
		cin >>x >>y >>w;
		d[x][y]=w;
		d[y][x]=w;
	}
}

void Floyd(){
//	Tu tuong: tai moi dinh k, xet xem duong di tu dinh i->j (d i,j) co the ngan hon thong qua dinh k duoc hay khong
	for(int k=1; k<=V; k++){
		for(int i=1; i<=V; i++){
			for(int j=1; j<=V; j++){
				d[i][j]=min(d[i][j], d[i][k]+d[k][j]);
			}
		}
	}
}
int main(){
	ktao();
	Floyd();
	int q;
	cin >>q;
	while(q--){
		int x,y;
		cin >> x >>y;
		cout <<d[x][y] <<endl;
	}
}
