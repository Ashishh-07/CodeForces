//ashish_07
#include<bits/stdc++.h>
using namespace std;
int main(){
	int x,m,n,p,count=0;
	cin>>x;
	for(int i=0;i<x;i++)
	{
		cin>>m>>n>>p;
		if(m==1&&n==1&&p==1){
			count++;
		}else if(m==1&&n==1){
			count++;
		}else if(m==1&&p==1){
			count++;
		}else if(p==1&&n==1){
			count++;
		}else{
			
		}
	}
	cout<<count;
	return 0;
}
