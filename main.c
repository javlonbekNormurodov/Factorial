#include <stdio.h>
#include <stdlib.h>

int main()
{
    int son,i = 1,jami=1;
    printf("Iltimos son kiriting: ");
    scanf("%d",&son);
    for(;i <= son; i++){
    jami *= i;
    }
    printf("%d ning faktoriali: %d",son,jami);
    return 0;
}
