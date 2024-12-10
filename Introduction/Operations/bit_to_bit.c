#include <stdio.h>

int main() {
    unsigned char a = 5;   // 00000101 
    unsigned char b = 9;   // 00001001 
    unsigned char result;

    result = a & b;     // AND bit to bit: 00000001 (1)
    printf("a & b = %d\n", result);

    result = a | b;     // OR bit to bit: 00001101 (13)
    printf("a | b = %d\n", result);

    result = a ^ b;     // XOR bit to bit: 00001100 (12)
    printf("a ^ b = %d\n", result);

    result = ~a;        // NOT bit to bit: 11111010 (-6 en complemento a dos)
    printf("~a = %d\n", result);

    result = a << 1;    // Desplazamiento to la izquierda: 00001010 (10)
    printf("a << 1 = %d\n", result);

    result = b >> 1;    // Desplazamiento to la derecha: 00000100 (4)
    printf("b >> 1 = %d\n", result);

    return 0;
}
