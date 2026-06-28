/**
 * Datatypes:
 * The datatype of an object in memory determines the set
 * of values it can have and what operations that can be
 * performed on it.
 * 
 * Operators:
 * Operators specify how an object can be manipulated.
 * unary, binary, ternary
 * 
 * Expressions:
 *  An expression in a programming language is a
 * combination of values, variables, operators, and functions
 * 
 * Variable:
 * A variable is as named link/reference to a value stored in
 * the system’s memory or an expression that can be
 * evaluated.
 * 
 * Variable names:
 * Keywords (e.g., for,while etc.) cannot be used as variable
 * names
 * int 2ndscore (incorrect: must start with a letter)
 */

 /**
  * The unsigned version has roughly double the range of its
  * signed counterparts.
  * char, short, int, float, double, long 
  */

/**
 * 
 * 0A0B0C0D 
 * Big endian vs. little endian:
 * Big endian: the most significant bits (MSBs) occupy the
 * lower address. This representation is used in the powerpc
 * processor. Networks generally use big-endian order, and
 * thus it is called network order.
 * 0D0C0B0A 
 * 
 *  Little endian : the least signficant bits (LSBs) occupy the
 * lower address. This representation is used on all x86
 * compatible processors
 * OAOBOCOD
 */
#include <stdio.h>

int main(void)
{
    // Print the true hardware size of the types
    printf("Actual size of char   : %zu bytes\n", sizeof(char));   // Always 1
    printf("Actual size of short  : %zu bytes\n", sizeof(short));  // Usually 2
    printf("Actual size of int    : %zu bytes\n", sizeof(int));    // Usually 4
    printf("Actual size of float  : %zu bytes\n", sizeof(float));  // Always 4
    printf("Actual size of double : %zu bytes\n", sizeof(double)); // Always 8
    printf("Actual size of long   : %zu bytes\n", sizeof(long));   // 4 or 8
    
    return 0;
}

/**
 * AND is true only if both operands are true.
 * OR is true if any operand is true.
 *  is true if only one of the operand is true.
 */

/**
 * Precedence and Order of Evaluation:
 *  ++,–,(cast),sizeof have the highest priority
 * | *,/,% have higher priority than +, -
 * ==,!= have higher priority than &&,||
 * assignment operators have very low priority
 */