#include <stdio.h>

int main()
{
	int n,x,i,j,sum;
	int arr[100];
	printf("N = ");
	scanf("%d",&n);
	printf("X = ");
	scanf("%d",&x);
	for (i = 0; i < n; i++) 
	{
        printf("Enter element:");
        scanf("%d", &arr[i]);
    }

    printf("a[] = {");
    for (i = 0; i < n; i++) 
	{
        printf("%d", arr[i]);
        if (i < n - 1) 
		{
            printf(", ");
        }
    }
    printf("}\n");
    for(i=0;i<n;i++)
    {
    	for(j=1;j<n;j++)
    	{
    		sum = arr[i] + arr[j];
    		
		}
		if(sum == x)
    		{
    			printf("Yes");
			}
	}
	return 0;
}
