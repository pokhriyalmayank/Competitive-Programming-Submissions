#include<bits/stdc++.h>
using namespace std;
int main(){
	int t,n;
	cin>>t;
	string s;
	while(t--){
		cin>>n;
		cin>>s;
		for(int i=0;i<n;i++)
		cout<<s[i+i];
		cout<<endl;
	}
}
