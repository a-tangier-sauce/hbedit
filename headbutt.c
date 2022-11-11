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
 
 
int main(int argc, char ** argv) {

}

//define vars and structs
uint8_t numNormalTrees;
uint8_t numSpecialTrees;

typedef struct encounter {
uint16_t pokeIndex;
uint8_t minLvl;
uint8_t maxLvl;
} encounter; 

typedef struct treeCoords{
uint16_t coords[6][2];
} treeCoords;

//fetch number of trees


//allocate stuff
struct headbuttData {
encounter normalEncounters[12];
encounter specialEncounters[6];
treeCoords normalTreeCoords[numNormalTrees];
treeCoords specialTreeCoords[numNormalTrees];
};
 
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
