// Demonstrate how to read data from the keyboard, write it to a file called BMSCE, again read the
// same data from the BMSCE file, and display it on the screen/console.

#include<stdio.h>
#include<stdlib.h>

int main(){
    FILE *fp;
    char c;
    char str[40];
    printf("Data Input\n");
    fp = fopen("input.txt","w");
    while((c=getchar()) != EOF)
    putc(c,fp);
    fclose(fp);
    printf("Data output\n");

    fp = fopen("input.txt","r");
    if(fp == NULL){
        printf("error\n");
        exit(1);
    }
    fgets(str,40,fp);
    puts(str);
    fclose(fp);
    return 0;

}