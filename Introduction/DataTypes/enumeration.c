#include <stdio.h>

enum CodigoError {
    ERROR_NONE = 0,
    ERROR_TIMEOUT = 1,
    ERROR_CONEXION = 2,
    ERROR_DATA = 3
};

enum CodigoError err;

void manejarError(enum CodigoError err) {
    switch (err) {
        case ERROR_NONE:
            printf("No errors.\n");
            break;
        case ERROR_TIMEOUT:
            printf("Error: Timeout occurred.\n");
            break;
        case ERROR_CONEXION:
            printf("Error: Connection failed.\n");
            break;
        case ERROR_DATA:
            printf("Error: Invalid data received.\n");
            break;
        default:
            printf("Unknown error.\n");
    }
}

int main() {
    err = 3;
    manejarError(err);
    err = ERROR_DATA;
    manejarError(err);
    return 0;
}
