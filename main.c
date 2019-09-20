#include <stdio.h>

int main()
{
	int x;
    int y;
    printf("Enter leap year ");
    scanf("%d",&x);
    y = (x%4) == 0 && (x%100) ==0;
    printf("%d\n",y);
	return 0;
}
