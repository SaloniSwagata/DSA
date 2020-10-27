#include <stdio.h>
#include <stdlib.h>
int main() {
	//code
	int n,*ptr,i,t,j,n1;
	    scanf("%d",&n);
	    ptr = (int*)malloc(n*sizeof(int));
	    for(i=0;i<n;i++)
	    {
	        scanf("%d",&n1);
            ptr[i] = n1;
	    }
	    j=0;
	    for(i=0;i<n;i++)
	    {
	        if (ptr[i]<0)
	        {
	            t=ptr[j];
	            ptr[j]=ptr[i];
	            ptr[i]=t;
	            j+=1;
	        }
	    }
	    for(i=0;i<n;i++)
	    {
	        printf("%d ",ptr[i]);
	    }
	    free(ptr);
	return 0;
}