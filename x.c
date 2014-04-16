#include <stdio.h>
typedef struct {  
     int x, y;  
} coord;  
coord triangle[] = {{1,1}, {2,2}, {3,3}};  
coord rectangle[] = {{1,1}, {2,1}, {1,2}, {2,2}};  
void print_coordinates(coord *ptr)  
{  
     if(ptr)  
     {  
          printf("X1: %d, %d\tX2: %d, %d\tX3: %d, %d", ptr[0].x, ptr[0].y, ptr[1].x, ptr[1].y, ptr[2].x, ptr[2].y);  
          if(ptr == rectangle)  
          {     //If this is the rectangle array and is known to contain a fourth coordinate  
               printf("\tX4: %d, %d", ptr[3].x, ptr[3].y);  
          }  
     }  
}  
int callIt(void)  
{  
     print_coordinates(triangle);          //Coverity scan would presumably warn that triangle[] would be overrun by attempted access of triangle[3]  
     print_coordinates(rectangle);  
     return 0;
} 
