#include <libft.h>

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
  unsinged char *str1;
  unsinged char *str2;

  str1 = (unsinged char *) s1;
  str2 = (unsinged char *) s2;

  while (n--)
  {
    if (*str1 < *str2)
      return (*str1 - *str2)
  }
  
}
