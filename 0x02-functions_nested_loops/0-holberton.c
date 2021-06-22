#include <unistd.h>
#include <stdio.h>
/* main: Entry point
*Return: 0
*/
int main(void) {
char holberton[9] = {'h', 'o', 'l', 'b', 'e', 'r', 't', 'o', 'n'};
for(int msg = 0;  msg <= 8; msg ++)
    _putchar(holberton[msg]);
return (0);
}
