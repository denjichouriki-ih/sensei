#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int aaaa[32];
    fgets (aaaa, sizeof(aaaa), stdin);
    if (strcmp(aaaa,"exit\n") == 0)
    {
        printf ("分岐：True");
    }
    else
    {
        printf ("分岐：false");
    }
    return 0;
}
