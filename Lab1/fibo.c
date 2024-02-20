#include <stdio.h>
/* fibonacci.c */
int current;
int next;
int nextnext;
void calcnext();
void setstart();
int main(int argc,char *argv[])
{
    int i;
    setstart();
    for(i=0; i<20; i++) {
        printf("fibo(%-2d): %d\n",i+1,current);
        calcnext();
    }
    return(0);
}
void setstart()
{
    current = 0;
    next = 1;
}
void calcnext()
{
    nextnext = current + next;
    current = next;
    next = nextnext;
}