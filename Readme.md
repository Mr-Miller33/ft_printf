*This project has been created as part of the 42 curriculum by moslaoui.*

## Discription

(ft_printf) is re-implementation of the standard C (printf) function.The goal is to learn how variadic functions work (<stdarg.h>) and to build a small, reusable static library (libftprintf.a).

Supported conversions:

| Specifier | Output |
|-----------|--------|
| `%c` | a single character |
| `%s` | a string |
| `%p` | a pointer address (hexadecimal) |
| `%d` / `%i` | a signed decimal integer |
| `%u` | an unsigned decimal integer |
| `%x` / `%X` | an unsigned hexadecimal number (lower / upper case) |
| `%%` | a percent sign |

Like the original, (ft_printf) returns the total number of characters printed 

## Instruction

**Compilation** (produces `libftprintf.a`):  

```sh
make          # build the library
make clean    # remove object files
make fclean   # remove object files and the library
make re       # rebuild from scratch
```

**Usage:** include the header and link the library when compling your program .

## Resources

- `man 3 printf` and `man 3 stdarg`
- Geeksforgeeks for theorical references
- Youtube for explanations , exemples and usecases
- stackoveflow for completing the lacking informations and exemples

**Use of AI:** AI was used only to help clarifying confusing parts and give more interactif exemples about the subjects also with README structure .

It was not used to write the code of the project.