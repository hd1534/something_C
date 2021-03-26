#include<stdio.h>

int main() {
    int c = 10, d;

    printf("c: %d, c : %d, b : %d\n", c, (c += d = 10), d);
    c = 10;
    printf("c++ \t\t\t : %d, c: %d\n", c++, c);
    c = 10;
    printf("c++ + c++ \t\t : %d, c: %d\n", c++ + c++, c);
    c = 10;
    printf("c++ + c++ + c++ \t : %d, c: %d\n", c++ + c++ + c++, c);
    c = 10;
    printf("c++ + c++ + c++ + c++ \t : %d, c: %d\n", c++ + c++ + c++ + c++, c);

    printf((1, 0) ? "true\n": "false\n");
    printf((1, 0, 1, 1, 0, 1) ? "true\n": "false\n");
    
    return 0;
}

/* result
> gcc something_worth_to_think.c -o test
> test

c: 20, c : 20, b : 10
c++                      : 10, c: 11
c++ + c++                : 21, c: 12
c++ + c++ + c++          : 33, c: 13
c++ + c++ + c++ + c++    : 46, c: 14
false
true

*/
