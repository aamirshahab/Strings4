//
//  main.c
//  strcpy()
//
//  Created by Eun Jae Lee on 29/11/17.
//  Copyright © 2017 Eun Jae Lee. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {

    char ch1[20];
    char ch2[20];
    //int i = 0;
    
    printf("Enter one string: \n");
    scanf("%s",ch1);
    
    strcpy(ch2,ch1); // strcpy(target, source)
    
//    while (ch1[i] != '\0') {
//        ch2[i] = ch1[i];
//        i++;
//    }
//
    printf("String 1 is %s\n",ch1);
    printf("String 2 is %s\n",ch2);
    
    getchar();
}
