#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main()
{
    int pid,p1,p2;
    pid = fork();
    if (pid==-1)
    {
        printf("Error in creation: ");
        exit(-1);
    }
    if (pid!=0)
    {
        printf("\n Parent process:");
        p1=getpid();
        printf("\n Parent process id is: %d", p1);
    }
    else
    {
        printf("\n Child process");
        p2=getpid();
        printf("\n Child process id is: %d",  p2);
        printf("\n The parent id is: %d", getppid());
    }
}
