#include <iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	if(n==1){
		cout << 1;
		return 0;
	}
	int first,end; 
	if(n%2==0){ //Å¼Êı 
		first=2*n-2;
		end=2*(n-(n+1)/2);
		for(int i=first;i>=end;i-=2){
			cout << i << endl;
		}
		for(int i=end;i<=first;i+=2){
			cout << i << endl;
		}
	}else{ //ÆæÊı 
		first=2*n-2;
		end=2*(n-(n+1)/2);
		for(int i=first;i>end;i-=2){
			cout << i << endl;
		}
		for(int i=end;i<=first;i+=2){
			cout << i << endl;
		}
	}
	return 0; 
} 
