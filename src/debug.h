#ifndef clox_debug_h
#define clox_debug_h

#include "chunk.h"

void disassembleChunk(Chunk* chunk, const char* name);   //function to disassemble all the instructions in a chunk;
int disassembleInstruction(Chunk* chunk, int offset);

#endif