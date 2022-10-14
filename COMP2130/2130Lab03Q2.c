#include<stdio.h>
struct point{
	int x, y;
};
struct rect{
	struct point ne, se, nw, sw;
};
int rectArea(struct rect *r){
	int l, w;
	l = (r->se.y)-(r->sw.y);
	w = (r->sw.x) - (r->nw.x);
	return l*w;
}
int main(int argc, char *argv[])
{
	struct rect rectangle;
	int x, y,area;
	printf("Enter Points on NE\n");
	printf("Enter x: ");
	scanf("%d", &x);
	printf("Enter y: ");
	scanf("%d", &y);
	rectangle.ne.x = x;
	rectangle.ne.y = y;
 
	printf("Enter Points on SE\n");
	printf("Enter x: ");
	scanf("%d", &x);
	printf("Enter y: ");
	scanf("%d", &y);
	rectangle.se.x = x;
	rectangle.se.y = y;
 
	printf("Enter Points on NW\n");
	printf("Enter x: ");
	scanf("%d", &x);
	printf("Enter y: ");
	scanf("%d", &y);
	rectangle.nw.x = x;
	rectangle.nw.y = y;
 
	printf("Enter Points on SW\n");
	printf("Enter x: ");
	scanf("%d", &x);
	printf("Enter y: ");
	scanf("%d", &y);
	rectangle.sw.x = x;
	rectangle.sw.y = y;
	
	area = rectArea(&rectangle);
	printf("Area of rectangle is: %d \n", area);
	return 0;
}