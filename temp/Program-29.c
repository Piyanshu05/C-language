/*Three Sides Of A Triangle Are Entered Through The Keyboard, WAP To Check Whether The Triangle Is Isosceles,
  Equilateral, Scalene Or Right angled Triangle..*/
#include<stdio.h>
void main(){
   int side1, side2, side3;
   printf("Enter sides of triangle:");
   scanf("%d%d%d",&side1,&side2,&side3);
   if(side1 == side2 && side2 == side3)
      printf("The Given Triangle is equilateral");
   else if(side1 == side2 || side2 == side3 || side3 == side1)
      printf("The given Triangle is isosceles");
   else
      printf("The given Triangle is scalene");
}