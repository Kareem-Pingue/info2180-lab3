#include<stdio.h>
struct point{
	int x, y;
};
struct rect{
	struct point ne, se, nw, sw;
};
int rectArea(struct rect*R)
{
	int L;
	int W;
	//An Arrow operator  allows to access elements in Structures/Unions.
	L=(R->se.y)-(R->sw.y),W=(R->sw.x)-(R->nw.x);
	return L*W;
}
int main(int argc, char *argv[]){

	struct rect R_Angle;
	int x;
	int y; 
	int Area;

	printf("\nNE Points:\n");
	printf("x Value: "), scanf("%d", &x);
	printf("y Value: "),scanf("%d", &y);
	R_Angle.ne.x=x,R_Angle.ne.y=y;
 
	printf("\nSE Points:\n");
	printf("x Value: "), scanf("%d", &x);
	printf("y Value: "), scanf("%d", &y);
	R_Angle.se.x=x,R_Angle.se.y=y;
 
	printf("\nNW Points:\n");
	printf("x Value: "), scanf("%d", &x);
	printf("y Value: "),scanf("%d", &y);
	R_Angle.nw.x=x,R_Angle.nw.y=y;
 
	printf("\nSW Points:\n");
	printf("x Value: "), scanf("%d", &x);
	printf("y Value: "),scanf("%d", &y);
	R_Angle.sw.x=x,R_Angle.sw.y=y;
	
	Area=rectArea(&R_Angle);
	printf("\nR_Angle Area: %d \n", Area);
	return 0;
}