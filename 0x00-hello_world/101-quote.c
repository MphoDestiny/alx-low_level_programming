#include <unistd.h>
#include <string.h>
int main(void)
{
char n[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
write(2, n, strlen(n));
return (1);
}
