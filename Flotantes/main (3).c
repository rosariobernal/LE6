#include <stdio.h>

void printFloatBytes(float num) {
    unsigned char* bytes = (unsigned char*)&num;

    printf("Contenido de los 4 bytes en la variable float: ");

    for (int i = 0; i < sizeof(float); i++) {
        printf("%02x ", bytes[i]);
    }

    printf("\n");
}

int main() {
    float number = 1;
    printFloatBytes(number);

    return 0;
}

