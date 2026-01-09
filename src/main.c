/* https://github.com/shabunio/riscv-emu
 * 
 * Single-file RV32I emulator written in C from scratch.
 *
 * MIT License
 *
 *
 * Dmitry Shabunio, 2026
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

#define MEM_SIZE (2<<16)

struct processor {
    uint32_t regs[32];
    uint32_t pc;
    uint8_t running;
};

typedef struct processor processor;

void mem_init(uint8_t* memory) {
    memory = malloc(sizeof(uint8_t) * MEM_SIZE);
}


void pr_init(processor* cpu) {
    cpu = calloc(1, sizeof(processor));
    cpu->pc = // TO-DO: finish processor_init function
}