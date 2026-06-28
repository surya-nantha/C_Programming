#include "hello.h"

int main(void)
{
    int aNumberResult = 0, aFinalResult = 0;
    const char msg [ ] = "Embedded Software Engineer";/*a constant array of characters */

    printf("Hello\r\n");

    aNumberResult = SampleFn(10, &aFinalResult);

    printf("aNumberResult = %d, aFinalResult = %d\r\n", aNumberResult, aFinalResult);

    puts("Hello, I am Surya N 3232");
    puts(msg);/*putchar(char), char = getchar(), string = gets(string)*/

    return 0;
}

int SampleFn(int aNumber, int *aFinalResult)
{
    int Number = 0;

    Number = aNumber * 10;

    *aFinalResult = Number / 2;

    return *aFinalResult;
}

/**
 * -Wall enables most compiler warnings
 * compilation: gcc -Wall infilename.c -o outfilename.o
 * Embed debugging info and disable optimization:
 * gcc -g -O0 -Wall infilename.c -o outfilename.o
 * gdb filename.o
 * r - run in gdb
 * q - quit gdb
 * gdb: command-line debugger
 * break linenumber – create breakpoint at specified line
 * break file:linenumber – create breakpoint at line in file
 * run – run program
 * c – continue execution
 * next – execute next line
 * step – execute next line or step into function   
 * quit – quit gdb
 * print expression – print current value of the specified expression
 * help command – in-program help
 * valgrind: diagnose memory-related problems
 * valgrind ./filename.o - yet to study about it
 */

 /**
  * Order of operations:
  * +,- (sign) right-to-left
  * !*,/,% left-to-right
  * +,- left-to-right
  * =,+=,-=,*=,/=,%= right-to-left
  * Use parentheses to override order of evaluation
  * Declaration called function prototype
  * access command-line arguments
  * int main(int argc, char ∗∗argv);
  */

  /**
   * puts when you want to print a plain, unformatted string followed automatically by a newline character (\n). 
   * Use printf when you need to print variables of mixed types, utilize format specifiers,
   * or keep the cursor on the same line.
   */

   /**
    * conditional preprocessor macros:
    * #if, #ifdef, #ifndef, #else, # elif , #endif
    * evaluated before code itself is compiled - preprocessor defines 
    * Used in header files to ensure declarations happen only once
    * 
    * #pragma, error, warning, undef
    */