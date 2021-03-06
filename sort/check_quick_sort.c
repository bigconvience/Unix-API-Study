#include <stdio.h>
#include "quick_sort.h"

int main () {
    int a[] = {4, 65, 2, -31, 0, 99, 2, 83, 782, 1};
    int expect[] = {-31, 0, 1, 2, 2, 4, 65, 83, 99, 782};
    int n = sizeof a / sizeof a[0];
    int i;
   
    quick_sort(a, n);
    int success = 1;
    for (i = 0; i < n; i++)
    {
	    if (a[i] != expect[i])
	    {
		    success = 0;
		    printf("test failed:at %d, expect:%d, src:%d\n", i, a[i], expect[i]);
	    }
    }
    if (success)
    {
	    printf("quick sort test success\n");
    }
    return 0;
}
