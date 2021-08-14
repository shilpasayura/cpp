#include <iostream>

// show some string processing and string i/o

using namespace std;
int main() {
    
    char one[11];
    char two[11];
    char three[41];
    char str[31] = "hello mom!";

    // print string and its length, then replace two chars and print again
    printf("string: %s\n",str);
    printf("length: %d\n",strlen(str));
    str[0] = 'H';
    str[6] = 'M';
    printf("string:%s\n\n",str);

    // each scanf reads one word, they can be separated by any amount of
    // whitespace; it does not read the newline after the second word
    // the Scanner method next() in Java does the same thing
    puts("enter two words: ");
    scanf("%s", one);
    scanf("%s", two);
    printf("you entered: %s and %s\n", one, two);

    // compare one and two
    int comp = strcmp(one,two);
    if (comp == 0)
        puts("you entered the same word twice\n\n");
    else if (comp < 0)
        printf("%s < %s\n\n", one, two);
    else
        printf("%s > %s\n\n", one, two);

    // getchar reads one character from the keyboard, we use it to
    // read in the newline so that next read will start on the next line
    // comment out the next line to see what happens if you don't read
    // in the newline
    char ch = getchar();

    // gets reads a whole line, adds null byte, not safe (input may not fit
    // into the string
    puts("enter a line (max 40 characters)");
    gets(three);
    printf("you entered: %s\n", three);

    // read again using fgets; remember stdin means "read from keyboard"
    // reads at most 40 chars, adds null byte
    // if you enter fewer than 40 chars it will add newline then null byte
    puts("enter a line (max 40 characters)");
    fgets(three,41,stdin);
    printf("this time you entered: %s\n", three);

    return 0;
}



