#include <unistd.h>

void    aff_c(char c)
{
    write(1, &c, 1);
}

int main(void)
{
    aff_c('a');
    aff_c('\n');
    return (0);
}