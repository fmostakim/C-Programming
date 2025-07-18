#include<stdio.h>

struct Point
{
    int x;
    int y;
};

int main(){
    struct Point point1, point2, point3,resultPoint;

    printf("Enter coordinates for Point 1(x, y): ");
    scanf("%d %d",&point1.x, &point1.y);

    printf("Enter coordinates for Point 2(x, y): ");
    scanf("%d %d",&point2.x, &point2.y);

    resultPoint.x = point1.x + point2.x;
    resultPoint.y = point1.y + point2.y;

    printf("\nPoint 1: (%d,%d)\n",point1.x,point1.y);
    printf("Point 2 : (%d,%d)\n",point2.x,point2.y);
    printf("Sum Point: (%d,%d)\n",resultPoint.x,resultPoint.y);

    return 0;
    

}
