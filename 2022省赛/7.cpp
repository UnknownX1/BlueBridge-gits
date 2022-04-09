#include<iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	long long int dp[n+1][3];
	if(n==1){
		cout << 1;
		return 0;
	}else{
		dp[1][0]=1;
		dp[2][0]=2;
		dp[2][1]=dp[2][2]=1;
		
		for(int i=3;i<=n;i++){
			dp[i][0]=(dp[i-2][0]%1000000007+dp[i-1][0]%1000000007+dp[i-1][1]%1000000007+dp[i-1][2]%1000000007)%1000000007;
			dp[i][1]=(dp[i-1][0]+dp[i-1][2])%1000000007;
			dp[i][2]=(dp[i-1][0]+dp[i-1][1])%1000000007;
		}
	}
	cout << dp[n][0];
	return 0;
}
