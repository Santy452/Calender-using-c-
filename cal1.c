#include<stdio.h>
#include<stdlib.h>
int main(){
    int a;
    
    char *cmd="cal";
    system(cmd);
    printf("choose any option:");
    printf("\n1.Previous month:");
    printf("\n2.Next month:");
    printf("\n3.Enter mm/yyyy:");
    printf("\n4.Exit:\n");
    scanf("\n%d",&a);
    switch(a)
    {
        case 1:
        printf("=========================================");
        system("cal -B1");
        break;
        case 2:
        printf("=========================================");
        system("cal -A1");
        break;
        case 3:
        printf("==============================");
        system("read mm && read yy && cal $mm $yy");
        break;
        case 4:
        default :
        printf("thank u");
   }
  return 0;
}