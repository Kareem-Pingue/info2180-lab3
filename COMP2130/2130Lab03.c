//Kareem Pingue 620146393
//Q1
#include <stdio.h>

int main(int argc, char *argv[]) {

  float a[2][3], b[3][2], c[2][2];
  int d, e;

  float prim_val;
  float val2 = 0;
  float val3 = 0;

  printf("\n1st Matrix\n");
  // Array @ 0; less than 2; dncrement
  for (d = 0; d < 2; d++) {
    printf("Row 1 Elements %d\n", d + 1);
    for (e = 0; e < 3; e++) {
      printf("Enter Culomn %d Value:  \n", e + 1);
      scanf("%f", &prim_val), a[d][e] = prim_val;
    }
  }
  printf("\n2nd Matrix\n");
  // Array @ 0; less than 2; dncrement
  for (d = 0; d < 3; d++) {
    printf("Row 1 Elements\n", d + 1);
    for (e = 0; e < 3; e++) {
      printf("Enter Culomn %d Value: \n", e + 1);
      scanf("%f", &prim_val), b[d][e] = prim_val;
    }
  }
  for (d=0; d<2; d++) {
    for (e=0; e<3; e++) {
      val2 = val2 + a[d][e]*b[d][e], val3 = val3 + a[d][e]*b[d][e];
    }
    c[d][0] = val2,  c[d][1] = val3;
    val2, val3 = 0;
  }
  for (d=0; d<2; d++) {
    for (e=0; e<2; e++)
      printf("%.2f	", c[d][e]);
    printf("\n");
  }
  return 0;
}

//Q2
#include<string.h>

int main(int argc, char *argv[])
{
	char string_sort[30];
    char val4;
	int f;
    int g;
    int h;

	printf("Please enter the string here: \n");
	scanf("%s", &string_sort), 	h =strlen(string_sort);
	for (f=0; f<h;f++)
		for (g = f+1; g<h; g++){
			if (string_sort[f]>string_sort[g])
            {
				val4 = string_sort[f], string_sort[f]=string_sort[g], string_sort[g]=val4;
			}
	}
	printf("%s\n", string_sort);
	return 0;
}

//Q3
#include<stdio.h>
int main(int argc, char* argv[]){

	int x;
    int y;

	for (x=1; x<=argc; x++)
    {
		for (y=x+1; y<= argc; y++)
        {   /*(NTS) strcmp() compares compares two strings character by character
                negation reverses the meaning of its operand*/
			if (!strcmp(argv[x], argv[y]))
            {
                char i[50] = "Matching Argument Found: %s \n", argv[x];
                char j[50] = "Positions: %d, %d\n", x, y;
                puts(i), puts(j);
			}
		}
	}
	return 0;
}

//Q5

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