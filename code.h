#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a, res;
	
	printf("Donnez une valeur a \n");
	scanf("%d",&a);
	
	res = a * 10;
	
	printf(" %d * 10 = $d",a,res);
	
	system("pause");
	
	return 0;
}