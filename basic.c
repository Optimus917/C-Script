#include<stdio.h>
 int main(){
    int number=25;
    char star='*';
    int age=19;
    age = 20;
    float pi=3.14;
    return 0;
    int a=30;
    int A=40;


    int _age=20;
    int final_price=199;
    int final game = 134;


    DATA TYPES -
    int age= 19;
    float pi = 3.14;
    char hashtag = '#';

    CONSTANTS -
    3 types
    integral_constant -1,-2,-3
    real_constant -1.0,-2.0,-3.12 ,-2.4
    character_constant '*','#','&','a','A'

    KEYWORDS -
    24 KEYWORDS


    PROGRAM STRUCTURE -

    #include<stdio.h> //'stdio.h :- preprocessor directive , needs evry tym in code'

    int main(){
        printf("hello world");
        return 0;
    }

    /*
    COMMENTS :-

    SINGLE LINE - //
    MULTIPLE LINE - /* */

    */

    OUTPUT :-

    printf("hello world");

    for_print_in_new_line :-

    printf("Hello C \n");
    printf("this is the code of c language \n");



    CASES TO PRINT :-
     1. INTEGER
     printf("age is %d \n",age);

     2. REAL NUMBERS
     printf("value of pi %f \n" pi);

     3. CHARACTERS
     printf("star looks like this %c \n",star);


    %d,%f,%c :- format specifier



    HOW TOO TAKE INPUT IN C LANG.  :-

    scanf("%d",&age);

    & :- address locator , where to place the value_type

    %d :- which type of input we are taking (format specifier)

    scanf is the funct. to take the input in code.

    code lines for_input_function :-

    int main(){
        int age;
        printf("enter age");
        scanf("%d",age);
        printf("age is: %d \n", age)
        return 0;
    }
 /*keywords :-
auto	else	long	switch
break	enum	register	typedef
case	extern	return	union
char	float	short	unsigned
const	for	signed	void
continue	goto	sizeof	volatile
default	if	static	while
do	int	struct	_Packed
double
*/

data types :-
format - bcsilfd
b-bytes
c-character
s-short integer
i-integer
l-long integer
f-float intrger (upto 6 places)
d-float integr (uptto 16 places)

bytes:-
1 byte = 8 bit = 2 nibble
4 bit = 1 nibble
1 bit can store once a time one value , i.e.:- 0,1
there will be 256 (0,1) format in 1 byte.

Q.difference b\w getch() and getche? imp ques?
ans - getch is used for holding the result screen
        h.w- lrn abt getche.
Q.who call the main function?
ans - operating system.











 }
