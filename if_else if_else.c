#include <stdio.h>
void main () {
    int score;
    printf("input your score : ");
    scanf("%d", &score);
    
    if (score >= 90)
        printf("수\n");
    else if (score >= 80)
        printf("우\n");
    else if (score >= 70)
        printf("미\n");    
    else if (score >= 60)
        printf("양\n");   
    else 
        printf("가\n");   
}