#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void add(char *, float, int);

struct item {
   char name[32];
   float cost;
   int quantity;

   struct item* next;
};

struct item* head = NULL;

int main() {
   add("washing machine", 399.95, 17);
   add("rug", 22.50, 4);
   add("couch", 129.98, 5);
   add("blender", 39.95, 1);
   add("poetry magnet set", 4.95, 134);

   double sum = 0;
   for (struct item* node = head; node != NULL; node = node->next) {
      double subtotal = node->cost * node->quantity;
      printf("%20s: %3d x %6.2f = %7.2f\n", node->name, node->quantity, node->cost, subtotal);
      sum += subtotal;
   }
   printf("%20s: %22.2f\n", "Total", sum);

   return 0;
}

void add(char *name, float cost, int quantity) {
   struct item* node = (struct item*) malloc(sizeof(struct item));
   strcpy(node->name, name);
   node->cost = cost;
   node->quantity = quantity;
   node->next = head;
   head = node;
}
