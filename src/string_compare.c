#include "string_compare.h"


int FindStrLength (char *str){
  int i=0;
  while(str[i]!= '\0'){
    i++;
  }
  return i;	//the length is from 0-8 in an array but will output 9 character
}

stringCompare(char *str1,char *str2)
{
	int i=0;
	if(FindStrLength (str1)!=FindStrLength (str2)){
		return 0;
	}
	else if