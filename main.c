#include <stdio.h>

int main()
{
    int p,h,f;
    float k;
	printf("enter the number of hours you work in a week\n");
    scanf("%d",&h);
    p = 500;
    k =((h>0&&h>40)*.5)+1;
    printf("%f\n",k);
    f = h*k*p;
    printf("%d",f);
	return 0;
}
