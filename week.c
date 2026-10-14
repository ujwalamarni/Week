#include <stdio.h>

void main()
{
 int dno;
 printf("\n enter day no:");
 scanf("%d",&dno);
 switch( dno)
 {
  case 1:
         printf("\n monday");
  case 2:
         printf("\n tuesday");
  case 3:
         printf("\n wednesday");
  case 4:
         printf("\n Thursday ");
  case 5:
         printf("\n friday");
  case 6:
          printf("\n Saturday");
  case 7:
         printf("\n Sunday ");
   default:
           printf("\n wrong day no:");
  }
 } 