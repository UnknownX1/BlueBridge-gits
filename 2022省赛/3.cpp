#include <iostream>
using namespace std;

int main(){
	long long int a,b,n;
	
	cin >> a >> b >> n;
	long long int week=5*a+2*b;
	long long int day=(n/week)*7;
	long long int cnt=(n/week)*week;
	while(1){
		for(int i=1;i<=5;i++){
			cnt+=a;
			day++;
			if(cnt>=n){
				cout << day;
				return 0;
			}
		}
		for(int i=1;i<=2;i++){
			cnt+=b;
			day++;
			if(cnt>=n){
				cout << day;
				return 0;
			}
		}
	}
} 
