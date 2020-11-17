#include <stdio.h>
int x;
char ch;
float f;
void func(void)
{
ch = x; /* line 1 */
x = f; /* line 2 */
f = ch; /* line 3 */
f = x; /* line 4 */
}