//ashish_07
#include<bits/stdc++.h>
using namespace std;
int main(){
	int N,K,X;
	cin>>N>>K;

	for(int i=1;i<=K;i++){
			if(N%10==0){
				N = N/10;
			}else{
				N = N-1;
			}
		}
		cout<<N;
	}
