#include<bits/stdc++.h>
using namespace std;

void primefact(int n){
	for(int i=2; i*i<=n; i++){
		if(n%i==0){
			int count = 0;
			while(n%i==0){
				count++;
				n/=i;
			}
				cout << i << "^" << count <<" ";
		}
	}
	if(n>1){
		cout << n << "^" << 1 << endl;
	}
	else{
		cout << endl;
	}
}

int32_t main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		primefact(n);
	}
}