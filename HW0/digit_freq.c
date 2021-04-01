// 123456789

#define MAX_NUM '9'
#define MIN_NUM '0'
#define DBASE   10 /* the base in which the digits are in (decimal..) */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

/* @brief - counts occurences of digits in a string */
int main() {
    char str[1000] = {0};
    int count[10] = {0};
    
    scanf("%s", str);
    
    for (int i=0 ; str[i] ; i++) {
        if (str[i] >= MIN_NUM && str[i] <= MAX_NUM) { /* is the char a number */
            int tmp = str[i]-MIN_NUM;                 /* turn char into int   */
            count[tmp]++;
        }
    }
    
    for (int i=0 ; i<DBASE  ; i++) {
        printf("%d ", count[i]);
    }
    
    return 0;
}
