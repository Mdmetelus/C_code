#include <stdio.h>
#include <stdlib.h>

#define PRINT_BEEJ 1
#define HALT 2

// char holds i 8 bit value
// largest value is 255 smallest value is zero
unsigned char memory[5] = {
    PRINT_BEEJ,
    PRINT_BEEJ,
    PRINT_BEEJ,
    PRINT_BEEJ,
    HALT
  };

int main(void) {
  int halted = 0;
  int pc = 0; // Program Counter, index of the current instruction in

  while(!halted) {
    int current_inst = memory[pc];
    switch(current_inst) {
        case PRINT_BEEJ:
            print("Beej!\n");
            break;

        default:
            printf("Unknown")
    }

    pc++; // move to next instruction

  }

}