#include<iostream>
using namespace std;


int main(){
	int n,m,kk;
	cin >> n >> m >> kk;
	int a[n][m];
	int count=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin >> a[i][j];
			if(a[i][j]<=kk) {
				count++;
			}
		}
	}
	if(n>1&&m>1){
		count=0;
		for(int i=0;i<n;i++){
			for(int j=i;j<n;j++){
				for(int k=0;k<m;k++){
					for(int l=k;l<m;l++){
						int cnt=0;
						for(int p=i;p<=j;p++){
							for(int q=k;q<=l;q++){
								cnt+=a[p][q];
							}
						}
						if(cnt<=kk){
							count++;
						}
					}
				}
			}
		}
		
		
		
	}

	cout << count;
	return 0;
	
	
}
