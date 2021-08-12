//chunk refers to sequence of bytecodes;
#ifndef clox_chunk_h
#define clox_chunk_h

#include "common.h"
#include "value.h"

//operation code will decide what kind of instruction we're dealing with;
typedef enum {
    OP_CONSTANT,
    OP_NIL,
    OP_TRUE,
    OP_FALSE,
    OP_POP,
    OP_GET_LOCAL,
    OP_SET_LOCAL,
    OP_GET_GLOBAL,
    OP_DEFINE_GLOBAL,
    OP_SET_GLOBAL,
    OP_GET_UPVALUE,
    OP_SET_UPVALUE,
    OP_GET_PROPERTY,
    OP_SET_PROPERTY,
    OP_EQUAL,
    OP_GREATER,
    OP_LESS,
    OP_ADD,
    OP_SUBTRACT,
    OP_MULTIPLY,
    OP_DIVIDE,
    OP_NOT,
    OP_NEGATE,
    OP_PRINT,
    OP_JUMP,
    OP_JUMP_IF_FALSE,
    OP_LOOP,
    OP_CALL,
    OP_INVOKE,
    OP_CLOSURE,
    OP_CLOSE_UPVALUE,
    OP_RETURN,
    OP_CLASS,
    OP_METHOD
} OpCode;

//struct to hold the bytecodes;
typedef struct {
    int count;   //count of elements in our dynamic array;
    int capacity;   //current capacity of the dynamic array;
    uint8_t* code;   //this will hold our bytecode;
    int* lines;
    ValueArray constants;   //this will hold the constants;
} Chunk;

void initChunk(Chunk* chunk);   //function to initialize the chunk;
void freeChunk(Chunk* chunk);   //function to free the chunk of bytecode;
void writeChunk(Chunk* chunk, uint8_t byte, int line);   //function the to append a byte to the end of the chunk;
int addConstant(Chunk* chunk, Value value);

#endif