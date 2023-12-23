
## 🚀 LIBFT-42: The C Library That's Out of This World!
## ☕ Artistic View of LIBFT:
>Welcome aboard the LIBFT spacecraft, where we navigate through the cosmic wonders of C programming. This isn't just a library; it's a constellation of functions shining bright in the programmer's universe!

## 🎭 How Does It Feel?
>Imagine being a wizard in the world of C, where each function is a spell that brings your code to life. That's LIBFT - a magical toolbox where every function is an adventure!

## 📖 What Exactly is LIBFT?
>LIBFT is my quest to forge a C library, comprising essential functions I'll be using throughout my coding odyssey at 42 Network. It's like building my own Excalibur for the battles in the realm of programming!
[READ](https://github.com/abouguri/Libft/blob/main/en.subject.pdf)

## 🔧 Mandatory Parts: The Dual Quests
### Part I: The Classics Reimagined
>Here, I've re-envisioned the standard libc functions, giving them a twist with my prefix "ft_". It's like meeting old friends with new stories.

<p align=center>

---

| # | Assignement name | Description |
|---|---               |---          |
|   | [libft.h](https://github.com/abouguri/libft/blob/main/libft.h) |  Contains all prototypes of functions and structures. |

---

| FUNCTION      | Allowed functions | Prototype | Description | Library |
|---		|---                |---        |---          |---      |
| • [isalpha()](https://github.com/abouguri/libft/blob/main/ft_isalpha.c) | NONE	   | int	ft_isalpha (int	c)     | Checks for an alphabetic character.                   | <ctype.h> |
| • [isdigit()](https://github.com/abouguri/libft/blob/main/ft_isdigit.c) | NONE	   | int	ft_isdigit (int	c)     | Checks for a digit (0 through 9).                     | <ctype.h> |
| • [isalnum()](https://github.com/abouguri/libft/blob/main/ft_isalnum.c) | NONE	   | int	ft_isalnum (int	c)     | Checks for an alphanumeric character.                 | <ctype.h> |
| • [isascii()](https://github.com/abouguri/libft/blob/main/ft_isascii.c) | NONE	   | int	ft_isascii (int c)     | Checks whether c fits into the ASCII character set.   | <ctype.h> |
| • [isprint()](https://github.com/abouguri/libft/blob/main/ft_isprint.c) | NONE	   | int	ft_isprint (int c)     | Checks for any printable character.                   | <ctype.h> |
| • [strlen()](https://github.com/abouguri/libft/blob/main/ft_strlen.c)   | NONE	   | size_t 	strlen(const char *s)  | Calculate the length of a string.                     | <string.h> | 
| • [memset()](https://github.com/abouguri/libft/blob/main/ft_memset.c)   | NONE   	   | void	*ft_memset(void *b, int c, size_t len) | Fill memory with a constant byte. | <string.h> |
| • [bzero()](https://github.com/abouguri/libft/blob/main/ft_bzero.c)     | NONE	   | void	ft_bzero(void *s, size_t n) | Zero a byte string.                          | <string.h> |
| • [memcpy()](https://github.com/abouguri/libft/blob/main/ft_memcpy.c)   | NONE	   | void	*ft_memcpy(void *dest, const void *src, size_t n)   | Copy memory area.    | <string.h> | 
| • [memmove()](https://github.com/abouguri/libft/blob/main/ft_memmove.c) | NONE	   | void	*ft_memmove(void *dst, const void *src, size_t len) | Function copies n bytes from memory area src to memory area dest. | <string.h> |
| • [strlcpy()](https://github.com/abouguri/libft/blob/main/ft_strlcpy.c) | NONE	   | size_t	ft_strlcpy(char *dst, const char *src, size_t dstlen) |  Copy string to a specific size. | <string.h> |
| • [strlcat()](https://github.com/abouguri/libft/blob/main/ft_strlcat.c) | NONE	   | size_t	ft_strlcat(char	*dst, const char	*src, size_t	dstsize) | Concatenate string to a specific size. | <string.h> |
| • [toupper()](https://github.com/abouguri/libft/blob/main/ft_toupper.c) | NONE	   | int	ft_toupper(int c) | Convert chat to uppercase | <ctype.h> |
| • [tolower()](https://github.com/abouguri/libft/blob/main/ft_tolower.c) | NONE	   | int	ft_tolower(int c) |  Convert char to lowercase. | <ctype.h> |
| • [strchr()](https://github.com/abouguri/libft/blob/main/ft_strchr.c)   | NONE   	   | char	*ft_strchr(const char *s, int c)  |  Locate character in string (first occurrence). | <string.h> |
| • [strrchr()](https://github.com/abouguri/libft/blob/main/ft_strrchr.c) | NONE	   | char	*ft_strrchr(const char *s, int c) |  Locate character in string (last occurrence).  | <string.h> |
| • [strncmp()](https://github.com/abouguri/libft/blob/main/ft_strncmp.c) | NONE	   | int	ft_strncmp(const char *s1, const char *s2, size_t n)  | Compare n bytes of two strings.  | <string.h> |
| • [memchr()](https://github.com/abouguri/libft/blob/main/ft_memchr.c)   | NONE	   | void	*ft_memchr(const void *s, int c, size_t n) | Scan memory for a character. | <string.h> |
| • [memcmp()](https://github.com/abouguri/libft/blob/main/ft_memcmp.c)   | NONE	   | int	ft_memcmp(const void *s1, const void *s2, size_t n) | Compare memory areas.  | <string.h> |
| • [strnstr()](https://github.com/abouguri/libft/blob/main/ft_strnstr.c) | NONE	   | char	*ft_strnstr(const char	*haystack, const char	*needle, size_t	len) | Locate a substring in a string.  | <string.h> |
| • [atoi()](https://github.com/abouguri/libft/blob/main/ft_atoi.c)       | NONE	   |  int	ft_atoi(const char *s)  |  | <stdlib.h> |

---
</p>
<p align="center">
<img src="https://i.kym-cdn.com/photos/images/original/000/131/662/22711800_646849b145.jpg" width="500">
</p>

---

|  #  | FUNCTION    | MANUAL |
|---  |---	   |---     |
|     | • [isalpha](https://github.com/abouguri/libft/blob/main/ft_isalpha.c) | [man](https://www.programiz.com/c-programming/library-function/ctype.h/isalpha)  |
|     | • [isdigit](https://github.com/abouguri/libft/blob/main/ft_isdigit.c) | [man](https://www.programiz.com/c-programming/library-function/ctype.h/isdigit)  |
|     | • [isalnum](https://github.com/abouguri/libft/blob/main/ft_isalnum.c) | [man](https://www.programiz.com/c-programming/library-function/ctype.h/isalnum)  |
|     | • [isascii](https://github.com/abouguri/libft/blob/main/ft_isascii.c) | [man](https://www.ibm.com/docs/en/i/7.3?topic=functions-isascii-test-character-representable-as-ascii-value) |
|     | • [strlen](https://github.com/abouguri/libft/blob/main/ft_strlen.c)   | [man](http://manpagesfr.free.fr/man/man3/strlen.3.html)     |
|     | • [memset](https://github.com/abouguri/libft/blob/main/ft_memset.c)   | [man](https://man7.org/linux/man-pages/man3/memset.3.html)  |
|     | • [bzero](https://github.com/abouguri/libft/blob/main/ft_bzero.c)     | [man](https://man7.org/linux/man-pages/man3/bzero.3.html)   |
|     | • [memcpy](https://github.com/abouguri/libft/blob/main/ft_memcpy.c)   | [man](https://man7.org/linux/man-pages/man3/memcpy.3.html)  |
|     | • [memmove](https://github.com/abouguri/libft/blob/main/ft_memmove.c) | [man](https://man7.org/linux/man-pages/man3/memmove.3.html) |
|     | • [strlcpy](https://github.com/abouguri/libft/blob/main/ft_strlcpy.c) | [man](https://www.cs.auckland.ac.nz/~mjd/prog_contest/www.cppreference.com/c/string/strlcpy) |
|     | • [strlcat](https://github.com/abouguri/libft/blob/main/ft_strlcpy.c) | [man](https://www.mkssoftware.com/docs/man3/strlcat.3.asp)  |
|     | • [toupper](https://github.com/abouguri/libft/blob/main/ft_toupper.c) | [man](https://man7.org/linux/man-pages/man3/toupper.3.html) |
|     | • [tolower](https://github.com/abouguri/libft/blob/main/ft_tolower.c) | [man](https://linux.die.net/man/3/tolower) |
|     | • [strchr](https://github.com/abouguri/libft/blob/main/ft_strchr.c) | [man](https://man7.org/linux/man-pages/man3/strchr.3.html) |
|     | • [strncmp()](https://github.com/abouguri/libft/blob/main/ft_strncmp.c) | [man]() |
|     | • [memchr()](https://github.com/abouguri/libft/blob/main/ft_memchr.c) | [man]() |
|     | • [memcmp()](https://github.com/abouguri/libft/blob/main/ft_memcmp.c) | [man]() |
|     | • [strnstr()](https://github.com/abouguri/libft/blob/main/ft_strnstr.c) | [man]() |
|     | • [atoi()](https://github.com/abouguri/libft/blob/main/ft_atoi.c) | [man]() |

---

>ft_strlen instead of strlen? Absolutely!
>ft_isalpha, ft_isdigit, ft_isalnum... you name it, I've recreated it!

### Part II: The Innovators
>The second part is where creativity meets functionality. I've crafted functions that are either missing from libc or exist in an alternate universe.

| FUNCTION | BEHAVIOR |
|--- |--- |
| - ft_substr | - returns a substring from a string |
| - ft_strjoin.c | - concatenates two strings |
| - ft_strtrim.c | - trims the beginning and end of string with specific set of chars |
| - ft_split.c | - splits a string using a char as parameter |
| - ft_itoa.c | - converts a number into a string |
| - ft_strmapi.c | - applies a function to each character of a string |
| - ft_striteri.c | - applies a function to each character of a string |
| - ft_putchar_fd.c | - output a char to a file descriptor |
| - ft_putstr_fd.c | - output a string to a file descriptor |
| - ft_putendl_fd.c | - output a string to a file descriptor, followed by a new line |
| - ft_putnbr_fd.c | - output a number to a file descriptor |


>ft_substr: Extracting string essence like a potion master.
>ft_strjoin: Weaving strings together with the finesse of a wordsmith.
>ft_split: Splitting strings with the precision of a samurai.
>...and many more enchanting functions!

## 🛠️ How to Use This Cosmic Toolbox
>1. Clone this universe: git clone https://github.com/abouguri/Libft 
>2. Build your arsenal: Run make and watch the stars align.
>3. Include in your epic saga: Use #include "libft.h" and let the magic unfold!

## 🧙‍♂️ About the Wizard Behind the Keyboard
>23 years old sorcerer of software engineering, delving into the depths of coding, one spell (I mean, function) at a time.
