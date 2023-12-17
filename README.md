
<p align="center">
  <img src="https://github.com/OnnaMcadva/42_Prague_Libft/assets/94723781/7c683931-ba63-48b6-8672-e2f8dbcd3eb2">
</p>


# My very first own library


<img width="567" src="https://github.com/OnnaMcadva/42_Prague_Libft/assets/94723781/1633e10b-ac04-4ae0-8d8a-d936886b2af5">


# Libft Functions

### Functions from `<ctype.h>`

- [`ft_isalpha`](ft_isalpha.c)	- checks  for  an  alphabetic  character.
- [`ft_isdigit`](ft_isdigit.c)	- checks for a digit (0 through 9).
- [`ft_isalnum`](ft_isalnum.c)	- checks for an alphanumeric character.
- [`ft_isascii`](ft_isascii.c)	- checks whether c fits into the ASCII character set.
- [`ft_isprint`](ft_isprint.c)	- checks for any printable character.
- [`ft_toupper`](ft_toupper.c)	- convert char to uppercase.
- [`ft_tolower`](ft_tolower.c)	- convert char to lowercase.

### Functions from `<string.h>`

- [`ft_memset`](ft_memset.c)	- fill memory with a constant byte. /заполняет первые len байтов области памяти, на которую указывает b, значением c./
- [`ft_strlen`](ft_strlen.c)	- calculate the length of a string.
- [`ft_bzero`](ft_bzero.c)	- zero a byte string. /устанавливает первые n байтов области памяти, на которую указывает s, в значение 0./
- [`ft_memcpy`](ft_memcpy.c)	- copy memory area. /копирует n байт из строки src в строку dest./
- [`ft_memmove`](ft_memmove.c)	- copy memory area. /безопасно копирует n байт из строки s2 в строку s1, даже если эти строки перекрываются./
- [`ft_strlcpy`](ft_strlcpy.c)	- copy string to an specific size. /копирует строку src в строку dest, но не более чем size - 1 символов, и гарантированно завершает строку dest нулевым символом./
- [`ft_strlcat`](ft_strlcat.c)	- concatenate string to an specific size. /копирует и добавляет строку src к строке dest, но не более чем size символов./
- [`ft_strchr`](ft_strchr.c)	- locate character in string. /ищет первое вхождение символа i в строке s./
- [`ft_strrchr`](ft_strrchr.c)	- locate character in string. /ищет последнее вхождение символа c в строке s./
- [`ft_strncmp`](ft_strncmp.c)	- compare two strings. /сравнивает две строки (s1 и s2) на протяжении первых n символов./
- [`ft_memchr`](ft_memchr.c)	- scan memory for a character. /ищет первое вхождение символа c в первых n байтах строки s./
- [`ft_memcmp`](ft_memcmp.c)	- compare memory areas. /сравнивает первые n байт двух строк s1 и s2./
- [`ft_strnstr`](ft_strnstr.c)	- locate a substring in a string. /ищет первое вхождение подстроки little в строке big, но не более первых len символов строки big./
- [`ft_strdup`](ft_strdup.c)	- creates a dupplicate for the string passed as parameter. /создает дубликат строки s./

### Functions from `<stdlib.h>`
- [`ft_atoi`](ft_atoi.c)	- convert a string to an integer. /преобразует начальную часть строки str в целое число./
- [`ft_calloc`](ft_calloc.c)	- allocates memory and sets its bytes' values to 0. /выделяет память для массива, состоящего из count элементов, каждый из которых имеет размер size. После выделения памяти, функция обнуляет всю выделенную память./

### Non-standard functions
- [`ft_substr`](ft_substr.c)	- returns a substring from a string. /создает и возвращает новую строку, которая представляет собой подстроку из строки s, начиная с позиции start длиной len символов./
- [`ft_strjoin`](ft_strjoin.c)	- concatenates two strings. /соединяет две строки s1 и s2, создавая новую строку/
- [`ft_strtrim`](ft_strtrim.c)	- trims the beginning and end of string with specific set of chars. /удаляет все символы, указанные в строке set, с начала и конца строки s1./
- [`ft_split`](ft_split.c)	- splits a string using a char as parameter. /разделяет строку s на подстроки, используя символ c в качестве разделителя, и возвращает массив строк./
- [`ft_itoa`](ft_itoa.c)	- converts a number into a string. /конвертирует целое число n в строковое представление./
- [`ft_strmapi`](ft_strmapi.c)	- applies a function to each character of a string. /создаёт новую строку, каждый символ которой получается путем применения заданной функции f к каждому символу исходной строки s./
- [`ft_striteri`](ft_striteri.c)	- applies a function to each character of a string. /проходит по каждому символу строки s и применяет к нему функцию f./
- [`ft_putchar_fd`](ft_putchar_fd.c)	- output a char to a file descriptor. /выводит символ c в файловый дескриптор fd с помощью функции write./
- [`ft_putstr_fd`](ft_putstr_fd.c)	- output a string to a file descriptor. /выводит строку s в файловый дескриптор fd./
- [`ft_putendl_fd`](ft_putendl_fd.c)	- output a string to a file descriptor, followed by a new line. /выводит строку s в файловый дескриптор fd и добавляет символ новой строки в конце./
- [`ft_putnbr_fd`](ft_putnbr_fd.c)	- output a number to a file descriptor. /выводит число n в файловый дескриптор fd./

### Linked list functions

- [`ft_lstnew`](ft_lstnew.c)	- creates a new list element. /создаёт новый элемент списка типа t_list./
- [`ft_lstadd_front`](ft_lstadd_front.c)	- adds an element at the beginning of a list. /добавляет элемент new в начало связного списка lst./
- [`ft_lstsize`](ft_lstsize.c)	- counts the number of elements in a list. /подсчитывает количество элементов в связанном списке t_list./
- [`ft_lstlast`](ft_lstlast.c)	- returns the last element of the list. /возвращает последний элемент связного списка lst./
- [`ft_lstadd_back`](ft_lstadd_back.c)	- adds an element at the end of a list. /добавляет элемент new в конец связного списка lst./
- [`ft_lstclear`](ft_lstclear.c)	- deletes and free list. /удаляет и очищает все элементы связного списка lst, используя функцию del для удаления содержимого каждого элемента./
- [`ft_lstiter`](ft_lstiter.c)	- applies a function to each element of a list. /итерирует по каждому элементу связного списка lst и применяет к содержимому каждого элемента функцию f./
- [`ft_lstmap`](ft_lstmap.c)	- applies a function to each element of a list. /создаёт и возвращает новый список, полученный в результате применения функции f к каждому элементу исходного списка lst./


<img width="1567" src="https://github.com/OnnaMcadva/42_Prague_Libft/assets/94723781/a559727c-a7d6-434a-a8bb-dfe12539f60d">
