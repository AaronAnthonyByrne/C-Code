/* Program to demonstrate functions sin(), cos(), and tan().
    The angle (in degrees) may be typed on the command line or
    input when the program is running.                        */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define RADS_TO_DEGS 57.29578
main(int argc, char **argv)
{
  double degrees, radians ;

  /* Has the user typed the angle on the command line? */
  if ( argc < 2 )
  {
    /* No value on command line; ask the user for the angle.  */
    printf( "Input the angle in degrees: " ) ;
    scanf( "%lf", &degrees ) ;
  }
  else
  /* The user typed the angle on the command line.
            The angle must be converted from an ASCII string
          to a floating-point value using atof().             */
  degrees = atof( argv[1] ) ;
  radians = degrees / RADS_TO_DEGS ; /* Degrees to radians.   */
  /* Display the results. */
  printf( "sin(%.3lf)= %.3lf\n",degrees,sin(radians) ) ;
  printf( "cos(%.3lf)= %.3lf\n",degrees,cos(radians) ) ;
  printf( "tan(%.3lf)= %.3lf\n",degrees,tan(radians) ) ;
}
