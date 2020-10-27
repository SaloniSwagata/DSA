#include <stdio.h>
#include <stdlib.h>
int main() {
	//code
	int t,n, *ptr,i,n1,c0,c1,c2;
	scanf("%d",&t);
	while(t>0)
	{
	    t-=1;
	    c0=0;
	    c1=0;
	    c2=0;
	    scanf("%d",&n);
	    ptr = (int*)malloc(n*sizeof(int));
	    for(i=0;i<n;i++)
	    {
	        scanf("%d",&n1);
	        if (n1==0)
	        c0+=1;
	        if (n1==1)
	        c1+=1;
	        if (n1==0)
	        c2+=1;
            ptr[i] = n1;
	    }
	    i=0;
	    while (c0 > 0) { 
        ptr[i++] = 0; 
        c0--; 
        } 
  
        // Then all the 1s 
        while (c1 > 0) { 
        ptr[i++] = 1; 
        c1--; 
        } 
  
        // Finally all the 2s 
        while (c2 > 0) { 
        ptr[i++] = 2; 
        c2--; 
        } 
        for (i = 0; i < n; i++) 
        printf("%d ",ptr[i]);
        printf("\n");
	    free(ptr);
	}
	return 0;
}