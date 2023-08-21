#include<bits/stdc++.h>
using namespace std;

bool prime[90000001];
int n = 90000000;
vector <int> v;
void sieve(){
	for(int i=2; i*i<=n; i++){
		if(prime[i]==0){
			for(int j=i*i; j<=n; j+=i){
				prime[j]=1;
			}
		}
	}
	for(int i=2; i<=n; i++){
		if(prime[i] == 0){
			v.push_back(i);
		}
	}
}

int32_t main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	sieve();
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		cout << v[n-1] << endl;
	}
	return 0;
}