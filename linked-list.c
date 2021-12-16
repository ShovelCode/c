#include <stdio.h>
#include <stdlib.h>

struct listNode {
  char data; //holds characters
  struct listNode *nextPtr; //points to next node
};

typedef struct listNode listNode;
typedef ListNode *ListNodePtr;

//function prototypes, signatures need to be put in
void inset();
char delete();
int isEmpty();
void printList();
void instructions();

int main( void ) {
  puts( "First call to each function: ");
  staticArrayInit();
  automaticArrayInit();
  
  puts("\n\nSecond call to each function: ");
  staticArrayInit();
  automaticArrayInit();
}

//static local array
void staticArrayInit(void)
{
  static int array1[3];
  size_t i;
  
  puts("\nValues on entering staticArrayInit: ");
}
