# C03 exercise_01 ft_strncmp.c (NORMINETTED)

Shell:
```bash
gcc -Wall main.c ft_strncmp.c -o strncmp
norminette ft_strncmp.c
ft_strncmp.c: OK!

# Executing
./strncmp
ft_strncmp("Hello world", "Hello universe", 5) = 0
ft_strncmp("Hello world", "Hello universe", 7) = 2
ft_strncmp("hela", "helz", 5) = -25
ft_strncmp("helz", "hela", 5) = 25
ft_strncmp("hel", "helo", 5) = -111
```
