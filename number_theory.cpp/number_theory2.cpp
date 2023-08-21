#include<bits/stdc++.h>
using namespace std;

void sieve(int n){
	int prime[n+3];
	memset(prime,0,sizeof(prime));
	for(int i=2; i*i<=n; i++){
		if(prime[i]==0){
			for(int j = i*i; j<=n; j+=i){
				prime[j]=1;
			}
		}
	}
	for(int i=2; i<=n; i++){
		if(prime[i]==0){
			cout << i << " ";
		}
	}
	cout << endl;
}

int32_t main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n; cin >> n;
	sieve(n);
}