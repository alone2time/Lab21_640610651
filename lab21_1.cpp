#include<iostream>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect R1,Rect R2){
	double fx,fy;
	if(R1.x+R1.w > R2.x){

		if(R1.x > R2.x){
			fx = R1.w - (R1.x-R2.x);
		}else fx = R1.w - (R2.x-R1.x);
		if(fx > R1.w){
			fx = R1.w;
		}else if(fx > R2.w){
			fx = R2.w;
		}else fx = fx ;

		if(R1.y > R2.y){
			fy = R1.h - (R1.y-R2.y);
		}else fy = R1.h - (R2.y-R1.y);
		if(fy > R1.h){
			fy = R1.h;
		}else if(fy > R2.h){
			fy = R2.h;
		}else fy = fy ;

		return fx*fy;
	}else return 0;
}

int main(){
	Rect R1 = {1,1,5,5};
	Rect R2 = {2,2,5,5};	
	cout << overlap(R1,R2);

	return 0;
}
