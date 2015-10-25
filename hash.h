#ifndef HASH_H
#define HASH_H
#include <stdlib.h>
#define HASHSIZE 101

typedef struct nlist { /* table entry: */
  struct nlist *next; /* next entry in chain */
  char *name; /* card name */
  char *value; /* number of card(s) */
}element;

struct nlist *hashtab[HASHSIZE];

unsigned hash(char *s);
struct nlist * lookup(char *s);
char * stringdup(char *);

struct nlist * insert(char * name, char * value);

#endif
