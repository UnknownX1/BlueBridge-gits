#include<iostream>
using namespace std;

int main(){
	int n;
	int inf=1000000007;
	cin >> n;
	if(n==1){
		cout << 1;
		return 0;
	}else{
		unsigned int a1=2,a2=1;
		unsigned int b1=1,c1=1,atemp,btemp,ctemp;
		
		for(int i=3;i<=n;i++){
			atemp=a2+a1+b1+c1;
			btemp=a1+c1;
			ctemp=a1+b1;
			
			a2=a1;
			a1=atemp%inf;
			b1=btemp%inf;
			c1=ctemp%inf;
		}
		cout << a1;
		return 0;
	}
}
