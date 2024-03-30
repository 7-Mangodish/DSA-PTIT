#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long

using namespace std;

int main(){
	vector <string > v;
	string str;
	while(getline(cin,str)){
		stringstream ss(str);
		string tmp;
		vector<string> res;		
		while(ss >>tmp){
			res.push_back(tmp);
		}
		
		if(res[0]=="push")
			v.push_back(res[1]);
		if(res[0]=="show"){
			if(v.size()==0)
				cout <<"empty";
			else{
				for(auto x:v)
					cout <<x <<" ";				
			}
			cout <<endl;
		}
		if(res[0]=="pop")
			v.pop_back();
	}
}
/*
push 3
push 5
show
push 7
show
pop
pop
show
*/