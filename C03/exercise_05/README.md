# C03 exercise_05 ft_strlcat.c (NORMINETTED)

Shell:
```bash
gcc -Wall -Wextra -Werror main.c ft_strlcat.c -o strlcat
norminette ft_strlcat.c
ft_strlcat.c: OK!

# Executing
./strlcat
dest = "Hello".
src  = " world bla bla bla some nasty hacking codes here.".
dest size = 12.
-------------------------------
After call ft_strlcat(dest, src, sizeof(dest))
dest = "Hello world".
src  = " world bla bla bla some nasty hacking codes here.".
new dest string length = 54.
```
