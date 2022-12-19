C - POinters, arrays and strings
#TASKS
0. 98 Battery st.
Write a function that takes a pointer to an int as parameter and updates points to 98.
prototype:Void reset_98(int *n);
1. Don't swap horses in crossing a stream
Write a function that swaps th values of two intergers.
Prototype: Void swap_int*int *a, int *b);
2. This report, by it's lenghth, defends itself against the risk of being read
Write a function that returns the lenghth of a string.
Prototype: int_strlen(char *s); FYI: The standard library provides a similiar function:strlen. Run man strlen to learn more.
3. I do not fear computers. I fear the lack of them.
Write a function that prints a string, followed by a new line, to stdout.
Prototype: void _puts(char *str);
FYI: The standard library provides a similar function: puts. Run man puts to learn more.
4. I can only go one way. I've not got a reverse gear
Write a function that prints a string, in reverse, followed by a new line.
Prototype: void print_rev(char *s);
5. A good engineer thinks in reverse and asks himself about the stylistic consequences of the components and systems he proposes
Write a function that reverses a string.
Prototype: void rev_string(char *s);
6. Half the lies they tell about me aren't true
Write a function that prints every other character of a string, starting with the first character, followed by a new line.
Prototype: void puts2(char *str);
7. Winning is only half of it. Having fun is the other half
Write a function that prints half of a string, followed by a new line.
The function should print the second half of the string
If the number of characters is odd, the function should print the last n characters of the string, where n = (length_of_the_string - 1) / 2
Prototype: void puts_half(char *str);
8. Arrays are not pointers
Write a function that prints n elements of an array of integers, followed by a new line.
where n is the number of elements of the array to be printed
Numbers must be separated by comma, followed by a space
The numbers should be displayed in the same order as they are stored in the array
You are allowed to use printf
Prototype: void print_array(int *a, int n);
9. strcpy
Write a function that copies the string pointed to by src, including the terminating null byte (\0), to the buffer pointed to by dest.

Return value: the pointer to dest
FYI: The standard library provides a similar function: strcpy. Run man strcpy to learn more.
Prototype: char *_strcpy(char *dest, char *src);

