#include <stdio.h>
#include <math.h>
int main()
{
	int n;
	int maxindex=1,max=0,dep=0;
	scanf("%d",&n); 
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]); 
	}
	while(pow(2,dep)<=n){
		dep++;
	}
	for(int i=1;i<=dep;i++){
		int cnt=0;
		int max1=pow(2,i);
		if(i==dep){
			max1=n+1;
		}
		for(int j=pow(2,i-1);j<max1;j++){
			cnt+=a[j-1];
		}
		if(cnt>max){
			maxindex=i;
			max=cnt;
		}
	}
	printf("%d",maxindex);
	return 0;
}
