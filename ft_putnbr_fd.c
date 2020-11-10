#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
  char  *str;

  str = ft_itoa(n);
  if (str)
    write(fd, str, ft_len(str));
}
