#include<iostream>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect *R1,Rect *R2){
    double x1min = R1->x,x2min = R2->x,x1max = R1->w+R1->x,x2max = R2->w+R2->x;
    double y1max = R1->y,y2max = R2->y,y1min = R1->y-R1->h,y2min = R2->y-R2->h;
    
    double dx=min(x1max,x2max)-max(x1min,x2min);
    double dy=min(y1max,y2max)-max(y1min,y2min);
    
    if(dx<0){
    return 0;
    }else{
    return (dx)*(dy);
    }


}