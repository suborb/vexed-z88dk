// Convert levels from the Vexed ini format to a format used here

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>


int main(int argc, char *argv[])
{
    int   level = 0;
    char  line[100];
    char  boardtxt[100];
    char  solution[100];
    unsigned char board[100];
    FILE *fp = fopen(argv[2], "r");

    if ( fp != NULL ) {
       printf("#include \"vexed.h\"\n");
       printf("static const leveldefn %s[] = {\n",argv[1]);
       while ( fgets(line, sizeof(line),fp) != NULL ) {
           line[strlen(line) - 1] = 0;
           if ( strncmp(line, "board=", 6) == 0 ) {
               strcpy(boardtxt, line + 7);
           } else if ( strncmp(line, "solution=", 8) == 0 ) {
               strcpy(solution, line + 9);
           } else if ( strncmp(line,"title=", 6) == 0 ) {
               // We have all the bits
               char *ptr = boardtxt;
               uint8_t *dst = board;
               int      linenum = 0;
               memset(board, 0, sizeof(board));
               printf("  // Level %d: Board: %s\n",level++, boardtxt);
               while (*ptr) {
                   if ( isalpha(*ptr) ) {
                      *dst++ = (*ptr - 'a') + 2;
                   } else if ( *ptr == '~' ) {
                      *dst++ = 0;
                   } else if ( *ptr == '/' ) {
                      unsigned char *end;
                      linenum++;
                      end = (linenum * 10) + board;
                      while ( dst < end ) *dst++ = 1; 
                   } else {
                      char *end;
                      long v = strtol(ptr, &end, 10);
                      if ( end != ptr ) {
                          while ( v-- ) {
                              *dst++ = 1;
                          }
                          ptr = end - 1;
                          }
                   }
                   ++ptr;
               } 
               printf("  {\n");
               printf("    .name = \"%s\",\n",line+6);
               printf("    .solution = \"%s\",\n",solution);
               printf("    .board = {");
               unsigned char *start = &board[10];
               for ( int i = 0; i < 30; i++ ) {
                   if ( i % 5 == 0 ) printf("\n        ");
                   printf("0x%02x, ", start[i*2] << 4 |  start[i*2+1]);
               }
               printf("\n    },\n  },\n");
           }

       }

       printf("\n};\n");
    }

}
