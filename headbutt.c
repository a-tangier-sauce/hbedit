#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int readNarc(FILE * file){
 return 0;
}

int buildNarc(FILE * file){
 return 0;
}

int main(int argc, char ** argv)
{
//check if arg count is correct
 if(argc!=3){
  fprintf(stderr, "error: wrong number of arguments\nusage:\nheadbutt read [narcfile]\nheadbutt build [narcfile]\n");
  exit(1);
 }
//check if file exists and open it
 FILE * file = fopen(argv[2], "r");
 if (!file){
  fprintf(stderr, "error: file %s does not exist\nusage:\nheadbutt read [narcfile]\nheadbutt build [narcfile]\n", argv[2]);
  exit(1);
 }
//check validity of arguments and call appropriate functions
 if (strcmp(argv[1],"read")==0) {
  readNarc(file);
 } 
 else if (strcmp(argv[1],"build")==0) {
  buildNarc(file);
 }
 else {
  fprintf(stderr, "error: invalid command \"%s\"\nusage:\nheadbutt read [narcfile]\nheadbutt build [narcfile]\n", argv[1]);
  exit(1);
 }
}
