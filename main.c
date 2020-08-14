#include <stdio.h>

int main(){
    static int c=5;
    printf("c=%d",c--);
    if(c)
        main();
    return 0;
}
