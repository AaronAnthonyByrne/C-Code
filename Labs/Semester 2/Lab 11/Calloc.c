/* Program to demonstrate dynamic memory allocation
    using calloc().                                 */
#include <stdio.h>
#include <stdlib.h>
main()
{
  int *ptr;
  int no_els, i ;  //no_els = number of elements

  printf( "Enter the number of elements " ) ;
  scanf( "%d", &no_els ) ;


 /* Allocate the memory. */
  ptr = (int *) calloc( no_els, sizeof(int) ) ;

//check if successful
	if(ptr==NULL)
        
	{
		printf("Failed to allocate memory");
	}
	else
	{
		for(i=0; i<10; i++)
		{
			scanf("%f", &*(ptr+i));
		}

		for(i=0;i<10;i++)
		{
			printf("%f\n", *(ptr+i));
		}
	free(ptr);
	}//end else
}//end main
