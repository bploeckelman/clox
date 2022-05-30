#ifndef CLOX_DEBUG_H
#define CLOX_DEBUG_H

#include "common.h"
#include "chunk.h"

void disassembleChunk(Chunk *chunk, const char *name);
int disassembleInstruction(Chunk *chunk, int offset);

#endif //CLOX_DEBUG_H
