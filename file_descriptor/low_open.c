#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "error_handler.h"

int main(void) {
    printf("it's ok!\n");    
    error_handling("this is a include file haah");
    return 0;
}
