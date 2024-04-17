#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int main() {
int num;
input_even:
    printf("Type here your number to find out if it's even or odd: ");
    scanf("%d", &num);

    int r = num % 2;
    if (r == 0) {
        printf("Your number %d is even.\n", num);
        
    } else {
        printf("Your number isn't even. Please type an even number.\n");
        goto input_even;
    }

    // Vowel or consonant.
    char c;
input_char:
    printf("\nType here your character to determine if it's a consonant or vowel: ");
    scanf(" %c", &c); // Added space before %c to consume any leading whitespace
/*
   if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
        printf("%c is a vowel.\n", c);
    } else {
        printf("%c is a consonant. Please type a vowel again.\n", c);
        goto input_char;
    }*/ //   or
    
 // using Switch Case statment 
switch (c)
{
case 'a':
    printf("\nYour char %c is vowel",c);
break;
case 'e':
    printf("\nYour char %c is vowel",c);
    break;
case 'i':
    printf("\nYour char %c is vowel",c);
    break;
case 'o':
    printf("\nYour char %c is vowel",c);
    break;
case 'u':
    printf("\nYour char %c is vowel",c);
    break;
case 'A':
    printf("\nYour char %c is vowel",c);
    break;
case 'E':
    printf("\nYour char %c is vowel",c);
    break;
case 'I':
    printf("\nYour char %c is vowel",c);
    break;
case 'O':
    printf("\nYour char %c is vowel",c);
    break;
case 'U':
    printf("\nYour char %c is vowel\n",c);
    break;
default:
printf("You entered const char pless enter valid(Vowel) char ");
goto input_char;


}
 return 0;
}
