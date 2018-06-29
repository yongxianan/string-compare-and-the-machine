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

int StringNumberCompare(char *str1,char *str2,int n){
  int i=0;
  int k=n-1;
  char *tempStr1=convertToLowerCase(str1);
  char *tempStr2=convertToLowerCase(str2);
  
  while(tempStr1[i]==tempStr2[i]){
    if((tempStr1[i]=='\0') && (tempStr2[i]=='\0')){
      return 1;
    }
    else if(i==k){
      return 1;
    }
    else{
      i++;
    }
  }
  return 0;
}

char *stringcat(char *name){
  char *reply="Nice to meet you ";
  char *tempStr=(char *)malloc(strlen(reply)+strlen(name)+1);
  strcpy(tempStr,reply);
  strcat(tempStr,name);
  return tempStr;
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

char *TheMachine(char *message){
  char *name=(char *)malloc(100);
  char *hello=malloc(100);//=convertToLowerCase("hello");
  hello="hello";  //experiment on string, malloc, while(message[i] !='\0')//
  char *myNameIs=convertToLowerCase("my name is ");
  int i=11;
  
  if((stringCompare(hello,message))==1){
    return "Hi there! My name is TheMachine. What is yours?";
  }
  else if(StringNumberCompare(myNameIs,message,11)==1){
    
    while(message[i] !='\0'){
      name[i-11] = message[i];
      i++;
    }
    name[i]='\0';
    
    
    return stringcat(name);
    
  }
  else{
    return "i do not understand what you talking about";
  }
}
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  