#include <stdio.h>
#include <conio.h>

typedef struct vector{
  int x;
  int y;
}vec;

void _sum(vec v1,vec v2,vec* sum){
    sum->x=v1.x+v2.x;
     sum->y=v1.y+v2.y;

}

void main(){
    vec v1={5,10};
    vec v2={3,7};
    vec sum={0};
    _sum(v1,v2,&sum);
    printf("Sum of x1 and x2 is %d\n",sum.x);
    printf("Sum of Y1 and y2 is %d\n",sum.y);
    }