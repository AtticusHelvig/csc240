#include <stdio.h>

#define DATA_SIZE 256
#define INSTRUCTION_SIZE 256
#define STACK_SIZE 128

int main(int argc, char **argv) {
  printf("A. Helvig, BrainF*ck Interpreter\n\n");
  // Create and clear data array
  int data[DATA_SIZE];
  for (int i = 0; i < DATA_SIZE; i++) {
    data[i] = 0;
  }

  char instructions[INSTRUCTION_SIZE];
  for (int i = 0; i < INSTRUCTION_SIZE; i++) {
    instructions[i] = '\0';
  }

  FILE *file = NULL;
  if (argc >= 2) {
    file = fopen(argv[1], "r");
  } else {
    printf("usage: brainfuck filename");
    return 1;
  }
  if (file == NULL) {
    printf("File %s could not be opened", argv[1]);
    return 1;
  }

  int numInstructions = 0;
  while (!feof(file)) {
    char c = fgetc(file);

    switch (c) {
    case ';':
    case ':':
    case '<':
    case '>':
    case '[':
    case ']':
    case '+':
    case '-':
      instructions[numInstructions] = c;
      numInstructions++;
    default:
      break;
    }
  }
  int loopStack[STACK_SIZE];
  for (int i = 0; i < STACK_SIZE; i++) {
    loopStack[i] = 0;
  }
  int stackPointer = 0;

  int dataPointer = 0;
  int instructionPointer = 0;

  printf("Running...\n");
  while (instructionPointer < numInstructions) {
    switch (instructions[instructionPointer]) {
    case ';':
      printf("? ");
      scanf("%d", &data[dataPointer]);
      break;
    case ':':
      printf("%d ", data[dataPointer]);
      break;
    case '<':
      dataPointer -= 1;
      if (dataPointer < 0) {
        printf("dataPointer fell off the edge.\n");
        return 2;
      }
      break;
    case '>':
      dataPointer += 1;
      break;
    case '[':
      if (data[dataPointer] != 0) {
        loopStack[stackPointer] = instructionPointer;
        stackPointer += 1;
      } else {
        int currentBracket = instructionPointer - 1;
        int numToMatching = 1;
        while (1) {
          instructionPointer += 1;
          if (instructions[instructionPointer] == '[') {
            numToMatching += 1;
          }
          if (instructions[instructionPointer] == ']') {
            numToMatching -= 1;
            if (numToMatching == 0) {
              break;
            }
          }
          if (instructionPointer >= numInstructions) {
            printf("Missing matching brace. Instruction number: %d\n",
                   currentBracket);
            return 3;
          }
        }
      }
      break;
    case ']':
      stackPointer -= 1;
      if (stackPointer < 0) {
        printf("Missing matching brace. Instruction number: %d\n",
               instructionPointer - 1);
      }
      instructionPointer = loopStack[stackPointer] - 1;
      break;
    case '+':
      data[dataPointer] += 1;
      break;
    case '-':
      data[dataPointer] -= 1;
      break;
    case '\0':
      return 0;
    }

    instructionPointer += 1;
  }

  return 0;
}
