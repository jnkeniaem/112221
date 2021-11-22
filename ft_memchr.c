#include <stdio.h>
#include <unistd.h>
#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s)[i] == (unsigned char)c)
			break;
		i++;
	}
	if (i == n)
		return (NULL);
	return ((void *)(s + i)); // s는 (const void *)니까 (void *)로 형변환해서 반환해줘
}


int main()
{ 
	/*int *str;
	char hello[] = "hello";

	str = (int*)memchr(hello, 'e', 1);
	
  if (str != NULL)
    printf("'e' found at position %d.\n", str - hello + 1);
  else
    printf("'e' not found.\n");

*/
	return (0);
}
