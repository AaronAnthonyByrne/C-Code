/* Program to read in number of students using five computer
    labs over seven days and to display the average usage for
    each lab.                                                */
#include <stdio.h>
#define NO_OF_DAYS 7
#define NO_OF_LABS 5
main()
{
  int usage[ NO_OF_DAYS ][ NO_OF_LABS ] ;
  int day, lab, total_usage, average ;

  /* Read each lab's usage for each day. */
  for ( day = 0 ; day < NO_OF_DAYS ; day++ )
  {
    printf( "Enter the usage for day %d\n", day + 1 ) ;
    for ( lab = 0 ; lab < NO_OF_LABS ; lab++ )
    {
      printf( "Lab number %d  ", lab + 1 ) ;
      scanf( "%d", &usage[day][lab] ) ;
    }
  }

  /* Calculate the average usage for each laboratory. */
  for ( lab = 0 ; lab < NO_OF_LABS ; lab++ )
  {

    total_usage = 0 ;
    for ( day = 0 ; day < NO_OF_DAYS ; day++ )
    {
      total_usage += usage[day][lab] ;
    }
    average = total_usage / NO_OF_DAYS ;
    printf( "\nLab number %d has an average usage of %d\n",
            lab+1, average ) ;
  }
}
