/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file statistical analytics application 
 * @brief This is a simple application that performs statistical analytics on adataset
 *
 * @author Mohammed Egila
 * @date 21/7/2017
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */
  unsigned int size = sizeof(test)/sizeof(test [0]);
  sort_array(test,size);
  print_array(test,size);
  print_statistics(test,size);

}

void sort_array(unsigned char *ptr,int size) {
/* this is function sort any passed array using buble sort algorithm*/
    unsigned char i=0;// iteration init 
    unsigned char temp=0;// temp for swap operation
    unsigned char flag=0;// flag used to check if array is sorted or not
    unsigned char k=0;// iteration init to all array
   for(k=1;k<size;k++) {
       for(i=0;i<size-k;i++) {
         if(*(ptr+i)< *(ptr+i+1)) {
            flag=1;
            temp=*(ptr+i);
            *(ptr+i)=*(ptr+i+1);
            *(ptr+i+1)=temp;
           }
        }
    if(flag==0) { /*if array is already sorted */
       k=size-2;
     }
   }
}

void print_array(unsigned char *ptr,int size) {

 unsigned char i=0;
 unsigned char f=0;
 printf("This's an Array :\n");
 for(i=0;i<size;i++) {
        printf("%d",*(ptr+i));
        f=0;
        if(i==9||i==19||i==29){
            printf("\n");
            f=1;
        }
        else {
        if(f==0&&*(ptr+i)<10) {

            printf("    ");
        }
        else if(f==0&&*(ptr+i)>10&&*(ptr+i)<100) {
           printf("   ");
        }
        else if(f==0&&*(ptr+i)>=100) {

            printf("  ");
        }
    }
 }
}

unsigned char find_maximum(unsigned char *ptr,int size){
    unsigned char i=0;
    unsigned char temp=0;
    temp=(*(ptr+i));//set this temp to the first elment in the array
    for(i=0;i<size-1;i++) {
        if(temp < *(ptr+i+1)) { //if the temp value is not greater
            temp=(*(ptr+i+1)); //set the temp to the next elment
           }
           else { //if the temp value is greater goto the next itration
            continue;
            }
        }
        return temp;//return the maximum value
}

unsigned char find_minimum(unsigned char *ptr,int size){
    unsigned char i=0;
    unsigned char temp=0;
    temp=(*(ptr+i));//set this temp to the first elment in the array
    for(i=0;i<size-1;i++) {
        if(temp < *(ptr+i+1)) { //if the temp value is not greater
            continue;//goto the next itration
           }
           else { //if the temp value is greater goto the next itration
            temp=(*(ptr+i+1));
            }
        }
        return temp;//return the minimum value
}

unsigned char find_median(unsigned char *ptr,int size) {

   if(size%2==0) { //if the size is even
    /*take the value of the meddile place and the value before this place and calculate the avarege*/
    unsigned char x=(size/2); 
    unsigned char y=(*(ptr+x)+*(ptr+x-1))/2;
    return y;
   }
   else {//if the size is odd
       unsigned char x=(size/2);
       unsigned char y=(*(ptr+x));
       return y;
   }
}

unsigned char find_mean(unsigned char *ptr,int size) {

   unsigned char i=0;
   unsigned char mean=0;
   /*add every elment in the array and divied the sum into the size of an array*/
   for(i=0;i<size;i++) {
       mean+=(*(ptr+i));
    }
    return (mean/size);
}

void print_statistics(unsigned char *ptr,int size) {
    /*print all statistics by using printf function and calling every specific function in side it*/
    printf("\nMaximum:%d\n",find_maximum(ptr,size));
    printf("\nMinimum:%d\n",find_minimum(ptr,size));
    printf("\nMean:%d\n",find_mean(ptr,size));
    printf("\nMedian:%d\n",find_median(ptr,size));
}
