/* linked list practice */
#include <stdbool.h>

typedef union entry {
  int val;
  struct cons-cell *p;
}

struct cons-cell {
  bool first-val;  /* flag to show if first is cons cell or value (true = value) */
  bool rest-val;  /* same for rest */
  entry first;
  entry rest;
}

  struct cons-cell *function cons-int-int(int a, int b)
  {
    struct cons-cell *temp = malloc(sizeof(sturct cons-cell));
    temp->first-val = true;
    temp->rest-val = true;
    temp->first->val = a;
    temp->rest->val = b;
    return temp;
  }

struct cons-cell *function cons-int-cons(int a, struct cons-cell *b)
{
  struct cons-cell *temp = malloc(sizeof(sturct cons-cell));
  temp->first-val = true;
  temp->rest-val = false;
  temp->first->val = a;
  temp->rest->p = b;
  return temp;
}

struct cons-cell *function cons-cons-int(struct cons-cell * a, int b)
{
  struct cons-cell *temp = malloc(sizeof(sturct cons-cell));
  temp->first-val = false;
  temp->rest-val = true;
  temp->first->p = a;
  temp->rest->val = b;
  return temp;
}

struct cons-cell *function cons-cons-cons(struct cons-cell *a, struct cons-cell *b)
{
  struct cons-cell *temp = malloc(sizeof(sturct cons-cell));
  temp->first-val = false;
  temp->rest-val = false;
  temp->first->p = a;
  temp->rest->p = b;
  return temp;
}

void print-list(struct cons-cell *list)
{
  struct cons-cell *i;
  for(i = list; (i->first-val || i-> first.p != NIL) && (i->last-val || i->rest.p != NIL); i = i->next)
    {}
  printf(\n);
}
