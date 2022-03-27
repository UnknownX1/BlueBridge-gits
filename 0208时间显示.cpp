#include <stdio.h>
int main(){
	long long int a,n;
	scanf("%lld",&a);
	a/=1000; 
	n=a%86400;
	int h,m,s;
	h=n/3600;
	m=(n-(h*3600))/60;
	s=(n-(h*3600)-m*60);
	printf("%02d:%02d:%02d",h,m,s);
	return 0;
} 
