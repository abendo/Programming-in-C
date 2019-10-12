#include <stdio.h>
//#define DEBUG
#if !defined (DEBUG) 
    #define DEBUG "No"

#else 
   #undef DEBUG
   #define DEBUG "Yes"
#endif

int main()
{
    printf("Is DEBUG defined in this file?\n %s\n", DEBUG);
    printf("Now I am in main function\n");
}
