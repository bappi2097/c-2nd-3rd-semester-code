#include <stdio.h>
int main()
{
	int p,r;
    while (1)
        {
            if (p!=0)
            {
                printf("\nEnter Number: ");
                scanf("\n%d",&p);
	         	r=p*p;
	 	        printf("\n result : %d",r);
            }
            else if (p==0)
                break;
        }
    return 0;
}
