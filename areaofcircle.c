#include <stdio.h>
#include<stdlib.h>

int main()
{
    float radius;
    double area;
    //system("clear"); for linux
    system("cls"); //for windows
    printf("\n Enter");
    scanf_s("%f", &radius);
    area = 3.14  * radius * radius;
    printf(" \n Area = %.21f", area);
    return 0;


}