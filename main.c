//
//  main.c
//  swap
//
//  Created by sai sumanth on 5/24/18.
//  Copyright © 2018 sai sumanth. All rights reserved.
//

#include <stdio.h>
int main()
{
    int a,b,t;
    printf("enter a value\n");
    scanf("%d",&a);
    printf("enter b value\n");
    scanf("%d",&b);
    t=a;
    a=b;
    b=t;
    printf("a=%d",a);
    printf("b=%d",b);
    printf("\n");
}
