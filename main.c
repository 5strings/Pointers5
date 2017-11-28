//
//  main.c
//  Passing Pointers To Function
//
//  Created by Eun Jae Lee on 28/11/17.
//  Copyright © 2017 Eun Jae Lee. All rights reserved.
//

#include <stdio.h>

void swap(int*, int*);// use pointers to formal argument

int main() {

    int a,b;
    
    printf("Enter value of a = \n");
    scanf("%d", &a);
    
    printf("Enter value of b = \n");
    scanf("%d", &b);
    
    swap(&a, &b); // actual argument
    
    printf("Value of a = %d and Value of b = %d\n",a,b);
    
}

void swap(int *p, int *q) {// function definition, p is initialize with address of a, q is b
    int temp;
    temp = *p;
    *p = *q;
    *q = temp;
}
