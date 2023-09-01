#include<stdio.h>                                 //Display The Current and Date..[#include<time.h> For Time And ctime Function And Time_t Datatype].
#include<time.h>
void main()
{
    time_t z;
    time(&z);
    printf("\nThis Program Has Been Written At (Date And Time): %s", ctime(&z));
    
}
