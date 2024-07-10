#include <stdio.h>
int main (){
    int a=32;
    int b=12;
    int c;

    c=a&b;     // bitwise AND
    printf("a&b=%d\n",c);
    

    c=a|b;     // bitwise OR
    printf("a|b=%d\n",c);

     c=a^b;     // bitwise EXOR
    printf("a^b=%d\n",c);


}