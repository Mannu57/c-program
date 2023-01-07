#include <stdio.h>
int main ()
{
	int a;
	printf ("Enter a number :");
	scanf ("%d\n", &a);
	if(a%2==0)
	{
	printf ("The square of %d is %d", a, a*a);
		}
	else
		{
		printf ("The square of %d is %d.\nAnd as condition %d is odd \nIts cube is %d\n", a,a*a,a,a*a*a);
			}
	return 57;
	}
	
