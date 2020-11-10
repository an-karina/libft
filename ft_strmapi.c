#include "libft.h"

char    *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
  size_t len_s;
  unsigned int i;
  char  *p;

  if (!s || !f)
    return (NULL);
  len_s = ft_strlen(s);
  p = (char *)malloc(sizeof(char) * (len_s + 1));
  i = 0;
  if (p && f)
  {
    while (s[i] != '\0')
    {
      p[i] = f(i, s[i]);
      i++;
    }
  }
  return (p);
}
