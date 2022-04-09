#include<iostream>
#include<vector> 
using namespace std;

struct Point{
	public:
		int x,y,r,uid,isboom;
		vector<int> yb;
		Point(int xx,int yy,int zz,int id){
			x=xx;
			y=yy;
			r=zz;
			uid=id;
			isboom=0;
		}
		
}; 
vector<Point> T;
bool is_2in1(int x1,int y1,int x2,int y2,int r){ //ÅÐ¶Ï2ÊÇ·ñÔÚ1±¬Õ¨·¶Î§ÄÚ 
	return ((double)(x1-x2)*(x1-x2)+(double)(y1-y2)*(y1-y2)<=(double)r*r);
}

void boom(Point &p){
	p.isboom=1;
	for(vector<int>::iterator it2=p.yb.begin();it2!=p.yb.end();it2++){
		if(T.at(*it2).isboom==0){
			boom(T.at(*it2));
		}
	}
	return;
}
int main(){
	int m,n,count=0;
	cin >> n >> m;

	for(int i=0;i<n;i++){
		int x,y,r;
		cin >> x >> y >> r;
		
		T.push_back(Point(x,y,r,count));
		count++;
	}
	vector<Point>::iterator ii,jj;
	for(ii=T.begin();ii!=T.end();ii++){
		for(jj=T.begin();jj!=T.end();jj++){
			if(is_2in1((*ii).x,(*ii).y,(*jj).x,(*jj).y,(*ii).r)){
				(*ii).yb.push_back((*jj).uid);
			}
			if(is_2in1((*jj).x,(*jj).y,(*ii).x,(*ii).y,(*jj).r)){
				(*jj).yb.push_back((*ii).uid);
			}
		}
	}

	for(int i=0;i<m;i++){
		int x,y,r;
		cin >> x >> y >> r;
		
		for(vector<Point>::iterator it=T.begin();it!=T.end();it++){
			if(((*it).isboom==0)&&(is_2in1(x,y,(*it).x,(*it).y,r))){
				boom(*it);
			}
		}
	}
	int res=0;
	for(vector<Point>::iterator it=T.begin();it!=T.end();it++){
			if((*it).isboom==1){
				res+=1;
			}
	}
	cout << res;
	return 0;
}
