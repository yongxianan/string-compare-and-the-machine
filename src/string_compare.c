#include "string_compare.h"
#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int FindStrLength (char *str){
  int i=0;
  while(str[i]!= '\0'){
    i++;
  }
  return i;	//the length is from 0-8 in an array but will output 9 character
}


char *convertToLowerCase(char *str){
  char *result=(char *)malloc(FindStrLength (str)+1);
  int i=0;
  
  if(str==NULL){
    return NULL;
  }
  strcpy(result,str);
  
  while(str[i] != '\0'){
    result[i] = tolower (result[i]);
    //printf("str1=%d\n",str1[k]);
    i++;
  }
  result[i]='\0';
  return result;
}

  
int stringCompare(char *str1,char *str2){
  int i=0;
  char *tempStr1=convertToLowerCase(str1);
  char *tempStr2=convertToLowerCase(str2);
	if((FindStrLength (tempStr1))!=(FindStrLength (tempStr2))){
		return 0;
	}
	else{
   
		while(tempStr1[i]==tempStr2[i]){
			if((tempStr1[i]=='\0') && (tempStr2[i]=='\0')){
				return 1;
			}
			else{
        i++;
      }
		}
    return 0;
	}
}

int stringNumberCompare(char *str1,char *str2,int n){
  int i=0;
  char *tempStr1=convertToLowerCase(str1);
  char *tempStr2=convertToLowerCase(str2);
	if((FindStrLength (tempStr1))!=(FindStrLength (tempStr2))){
		return 0;
	}
	else{
   
		while(tempStr1[i]==tempStr2[i]){
			if((tempStr1[i]=='\0') && (tempStr2[i]=='\0')){
				return 1;
			}
      else if(i==(n-1)){
        return 1;
      }
			else{
        i++;
      }
		}
    return 0;
	}
}

char *TheMachine(char *message){
  //char *tempMsg=(char *)malloc(strlen(message));
  char *tempMsg=convertToLowerCase(message);
  char *name;//=(char *)malloc(strlen(message)-11);
  char *reply=(char *)malloc(17);
  int i=11;
  //strncmp (myNameIsSample,tempMsg,11);
  
  if((strcmp("hello",tempMsg))==0){
    return "Hi there! My name is TheMachine. What is yours?";
  }
  else if((strncmp ("my name is ",tempMsg,11))==0){
    while(tempMsg[i] != '\0'){
      name[i-11] = tempMsg[i];
      i++;
    }
    name[i]='\0';
    char *reply="Nice to meet you ";
    strcat(reply,name);
    return reply;
  }
  else{
    free (tempMsg);
    return "i do not understand what you talking about";
  }
}
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  