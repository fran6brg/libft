#include "libft_2/libft.h"

int main(int argc, char* argv[])
{
  char *str;

  str = argv[argc];
  
   //printf("crt : %i\n", atoi(argv[1]));
   //printf("ft_ : %i", ft_atoi(argv[1]));

  //printf("crt : %lu\n", strlen(argv[1]));
  //printf("ft_ : %zu\n", ft_strlen(argv[1]));

  //printf("crt : %s\n", strdup(argv[1]));
  //printf("ft_ : %s\n", ft_strdup(argv[1]));

  //char s1[] = "String";
  //char s2[] = "String";
  //char d1[] = "String";
  //char d2[] = "String";
  //printf("crt : %s\n", strcpy(d1, argv[1]));
  //printf("ft_ : %s\n", ft_strcpy(d2, argv[1]));

  /* strncpy
  char d11[] = "123";
  char d12[] = "123";
  char src1[] = "abcd";
  int	i1 = 4;
  printf("dst = %s\nsrc = %s\nint = %i\n\n", d11, src1, i1);
  printf("crt : %s\n",strncpy(d11, src1, i1));
  printf("ft_ : %s\n", ft_strncpy(d12, src1, i1));

  char d21[] = "123";
  char d22[] = "123";
  char src2[] = "a";
  int	i2 = 1;
  printf("-----\ndst = %s\nsrc = %s\nint = %i\n\n", d21, src2, i2);
  printf("crt : %s\n",strncpy(d21, src2, i2));
  printf("ft_ : %s\n", ft_strncpy(d22, src2, i2));

  char d31[] = "123";
  char d32[] = "123";
  char src3[] = "ab";
  int	i3 = 1;
  printf("-----\ndst = %s\nsrc = %s\nint = %i\n\n", d31, src3, i3);
  printf("crt : %s\n",strncpy(d31, src3, i3));
  printf("ft_ : %s\n", ft_strncpy(d32, src3, i3));*/

  // strcat
  /*char d1[] = "123";
  char d2[] = "123";
  char src[] = "abc";
  //int	i = 1;
  printf("-----\ndst = %s\nsrc = %s\n\n", d1, src);
  //printf("lib : %s\n", strcat(d1, src));
  printf("ft_ : %s\n", ft_strcat(d2, src));

  char d21[] = "12";
  char d22[] = "12";
  char src2[] = "   **abcdefghij";
  //int	i = 1;
  printf("-----\ndst = %s\nsrc = %s\n\n", d21, src2);
  //printf("lib : %s\n", strcat(d21, src2));
  printf("ft_ : %s\n", ft_strcat(d22, src));

  char d31[] = "";
  char d32[] = "";
  char src3[] = "abc";
  //int	i = 1;
  printf("-----\ndst = %s\nsrc = %s\n\n", d31, src3);
  //printf("lib : %s\n", strcat(d31, src3));
  printf("ft_ : %s\n", ft_strcat(d32, src));*/
  
  // strncat
  /*char d1[] = "123";
  char d2[] = "123";
  char src[] = "abc";
  int	i = 1;
  printf("-----\ndst = %s\nsrc = %s\nint = %i\n", d1, src, i);
  //printf("lib : %s\n", strncat(d1, src, i));
  printf("ft_ : %s\n", ft_strncat(d2, src, i));

  char d21[] = "12";
  char d22[] = "12";
  char src2[] = "   **abcdefghij";
  int	j = 1;
  printf("-----\ndst = %s\nsrc = %s\nint = %i\n", d21, src2,j);
  //printf("lib : %s\n", strncat(d21, src2, j));
  printf("ft_ : %s\n", ft_strncat(d22, src2, j));

  char d31[] = "";
  char d32[] = "";
  char src3[] = "abc";
  int	k = 1;
  printf("-----\ndst = %s\nsrc = %s\nint = %i\n", d31, src3,k);
  //printf("lib : %s\n", strncat(d31, src3, k));
  printf("ft_ : %s\n", ft_strncat(d32, src3, k));*/
  
  //strchr
  /*char d1[] = "123";
  char d2[] = "123";
  int	i = 50;
  printf("-----\ns1 = %s\ns2 = %s\ni= %i\n\n", d1, d2, i);
  printf("lib : %s\n", strchr(d1, i));
  printf("ft_ : %s\n", ft_strchr(d2, i));
  char d3[] = "123";
  char d4[] = "123";
  int	j = 54;
  printf("-----\ns1 = %s\ns2 = %s\ni= %i\n\n", d3, d4, j);
  printf("lib : %s\n", strchr(d3, j));
  printf("ft_ : %s\n", ft_strchr(d4, j));
  char d5[] = "123";
  char d6[] = "123";
  int	k = 48;
  printf("-----\ns1 = %s\ns2 = %s\ni= %i\n\n", d5, d6, k);
  printf("lib : %s\n", strchr(d5, k));
  printf("ft_ : %s\n", ft_strchr(d6, k));*/

  //strrchr
  /*char d1[] = "123123123";
  char d2[] = "123123123";
  int	i = 50;
  printf("-----\ns1 = %s\ns2 = %s\ni= %i\n\n", d1, d2, i-48);
  printf("lib : %s\n", strrchr(d1, i));
  printf("ft_ : %s\n", ft_strrchr(d2, i));
  char d3[] = "111";
  char d4[] = "111";
  int	j = 49;
  printf("-----\ns1 = %s\ns2 = %s\ni= %i\n\n", d3, d4, j-48);
  printf("lib : %s\n", strrchr(d3, j));
  printf("ft_ : %s\n", ft_strrchr(d4, j));
  char d5[] = "01110";
  char d6[] = "01110";
  int	k = 48;
  printf("-----\ns1 = %s\ns2 = %s\ni= %i\n\n", d5, d6, k-48);
  printf("lib : %s\n", strrchr(d5, k));
  printf("ft_ : %s\n", ft_strrchr(d6, k));*/

  //strstr
  /*char meule[] = "salut sallut";
  char aiguille[] = "lut ";
  printf("m = %s\na = %s\n----\nft_ = %s\nlib = %s\n", meule, aiguille, ft_strstr(meule, aiguille), strstr(meule, aiguille));*/

  //strnstr
  /*char meule[] = "";
  char aiguille[] = "";
  size_t i = 4;
  printf("m = %s\na = %s\ni = %zu\n----\nft_ = %s\nlib = %s\n", meule, aiguille, i, ft_strnstr(meule, aiguille, i), strnstr(meule, aiguille, i));*/

  //strcmp
  /*char s1[] = "**";
  char s2[] = "///";
  char s3[] = "**";
  char s4[] = "///";
  int i = atoi(argv[1]);
  printf("ft_ = %i\nlib = %i", ft_strncmp(s1, s2, i), strncmp(s3, s4, i));*/

  //strlen
  //printf("len = %zu", ft_strlen(argv[1]));

  //strjoin
  //printf("s1 = %s\ns2 = %s\n\njoin = %s", argv[1], argv[2], ft_strjoin(argv[1], argv[2]));

  //strtrim
  //char s1[] = "lorem ipsum dolor sit amet \n \t ";
  //printf("src  = --%s--\n\n\ntrim = --%s--\n", s1, ft_strtrim(s1));

  //strsplit
  //char s[] = "        ";
  //char c = ' ';
  //char s[] = "lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse";
  //char c = ' ';
  /*char s[] = "lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse lectus tortor, dignissim sit amet, adipiscing nec, ultricies sed, dolor. Cras elementum ultricies diam. Maecenas ligula massa, varius a, semper congue, euismod non, mi.";
  char c = 'i';
  //char s[] = "   lorem   ipsum dolor     sit amet, consectetur   adipiscing elit. Sed non risus. Suspendisse   ";
  //char c = ' ';
  char	**ptr;
  int i;
  ptr = ft_strsplit(s, c);
  i = -1;
  while (ptr[++i])
  {
    //printf("ok main\n");
    printf("str %i = %s\n", i, ptr[i]);
    }*/

  //ft_putendl(argv[1]);
  //return (0);

  //putnbr
  //ft_putnbr(atoi(argv[1]));

  //ft_atoi
  /*printf("9223372036854775806 \n> ft_ = %i\n cor = %i\n", ft_atoi("9223372036854775806"), atoi("9223372036854775806"));
  printf("−9223372036854775807 \n> ft_ = %i\n cor = %i\n", ft_atoi("−9223372036854775807"), atoi("−9223372036854775807"));

  printf("9223372036854775807 \n> ft_ = %i\n cor = %i\n", ft_atoi("9223372036854775807"), atoi("9223372036854775807"));
  printf("−9223372036854775808 \n> ft_ = %i\n cor = %i\n", ft_atoi("−9223372036854775808"), atoi("−9223372036854775808"));

  printf("9223372036854775808 \n> ft_ = %i\n cor = %i\n", ft_atoi("9223372036854775808"), atoi("9223372036854775808"));
  printf("−9223372036854775809 \n> ft_ = %i\n cor = %i\n", ft_atoi("−9223372036854775809"), atoi("−9223372036854775809"));

  printf("92233720368547758089 \n> ft_ = %i\n cor = %i\n", ft_atoi("92233720368547758089"), atoi("92233720368547758089"));
  printf("−92233720368547758099 \n> ft_ = %i\n cor = %i\n", ft_atoi("−92233720368547758099"), atoi("−92233720368547758099"));*/

  //ft_itoa
  /*printf("src = %s\n", argv[1]);
    printf("ft_ = %s\n", ft_itoa(atoi(argv[1])));*/
  
  //ft_strlcat
  const char src[] = "";
  char dest[] = "123";
  size_t size = 6;
  unsigned int	i;
  printf("mine\nsrc = %s\ndst = %s\nsze = %zu\n", src, dest, size);
  i = ft_strlcat(dest, src, size);
  printf("now dest = %s || return = %i", dest, i);

  const char src2[] = "";
  char dest2[] = "123";
  size_t size2 = 6;
  unsigned int	j;
  printf("\n-----\naraout\nsrc = %s\ndst = %s\nsze = %zu\n", src2, dest2, size2);
  j = ft_strlcat2(dest2, src2, size2);
  printf("now dest = %s || return = %i", dest2, j);
}
