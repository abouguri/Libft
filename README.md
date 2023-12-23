
## 🚀 LIBFT-42: The C Library That's Out of This World!
## ☕ Artistic View of LIBFT:
>Welcome aboard the LIBFT spacecraft, where we navigate through the cosmic wonders of C programming. This isn't just a library; it's a constellation of functions shining bright in the programmer's universe!

## 🎭 How Does It Feel?
>Imagine being a wizard in the world of C, where each function is a spell that brings your code to life. That's LIBFT - a magical toolbox where every function is an adventure!

[ENGLISH PDF](https://github.com/abouguri/Libft/blob/main/en.subject.pdf)

## 📖 What Exactly is LIBFT?
>LIBFT is my quest to forge a C library, comprising essential functions I'll be using throughout my coding odyssey at 42 Network. It's like building my own Excalibur for the battles in the realm of programming!

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

>ft_strlen instead of strlen? Absolutely!
>ft_isalpha, ft_isdigit, ft_isalnum... you name it, I've recreated it!

### Part II: The Innovators
>The second part is where creativity meets functionality. I've crafted functions that are either missing from libc or exist in an alternate universe.

>ft_substr: Extracting string essence like a potion master.
>ft_strjoin: Weaving strings together with the finesse of a wordsmith.
>ft_split: Splitting strings with the precision of a samurai.
>...and many more enchanting functions!

##  🌌 The Legend Says: "RTFM!"
>But here, the manual reads like a storybook of adventures and mysteries unraveling. Dive into each function's tale, from ft_strdup with its magical cloning powers to ft_calloc, the great allocator.

## 🛠️ How to Use This Cosmic Toolbox
>1. Clone this universe: git clone https://github.com/abouguri/Libft 
>2. Build your arsenal: Run make and watch the stars align.
>3. Include in your epic saga: Use #include "libft.h" and let the magic unfold!

## 🧙‍♂️ About the Wizard Behind the Keyboard
>23 years old sorcerer of software engineering, delving into the depths of coding, one spell (I mean, function) at a time.
