#include <stddef.h>

char    *ft_strrchr(const char *s, int c)
{
    char    *p;

    p = NULL;
    while (*s)
    {
        if (*s == (char)c)
            p = (char *)s;
        s++;
    }
    if (c == '\0')
        return ((char *)s);
    return (p);
}