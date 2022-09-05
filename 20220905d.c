#include<stdio.h>

struct book
{
	char name[20];
	short price ;
};
int main ()
{	
    struct book b1 = {"C",55};
    struct book* p = &b1 ;
    printf ("%s\n",b1.name);
    printf ("%d\n",b1.price);
    printf ("%s\n",p -> name);
    printf("%d\n",p -> price);
	printf ("%s\n",(*p).name);
    printf ("%d\n",(*p).price);
    return 0 ;
	
}