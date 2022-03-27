#include <stdio.h>
#include <stdlib.h>
int f(int a){
	int digit=0;
	while(a){
		digit=a%10;
		if(digit==2||digit==4){
			return 0;
		}
		a/=10;
	}
	return 1;
}
int main(int argc, char *argv[])
{
	int n=2019,cnt=0;
	for(int i=1;i<n;i++){
		for(int j=i+1;j<n;j++){
			int k=n-i-j;
			if(k<=j){
				continue;
			}
			if(f(i)&&f(j)&&f(k)){
				cnt++;
//				printf("%d : %d %d %d\n",cnt,i,j,k);
			}
		}
	}
	printf("%d",cnt);
  	return 0;
}

