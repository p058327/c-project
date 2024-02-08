#include "interpreter.h"


int main(int argc, char **argv) {
    char* command = argv[1];
    bf_signs(command);
    // bf_signs
    // ("++++++++++[>+++++++>++++++++++>+++>+<<<<-]>++.>+.+++++++..+++.>++.<<+++++++++++++++.>.+++.------.--------.>+.>.");   

    return 0;
}
