//WAP to design a DFA which will accept the string containing atmost 3 a's over sigma(a,b)

#include<stdio.h>
#include<conio.h>
#include<string.h>

int checkNext(int arr[5][2],int curr,int inp){

    return  arr[curr][inp];
    
}

void main(){
    char ip[10]; 
    int arr[5][2];
    int curr = 0;
    int int_ip[20];
    int final[4];
    int count = 0;

    // clrscr();

    printf("Enter a String");
    gets(ip);
    
    arr[0][0] = 1;
    arr[0][1] = 0;
    arr[1][0] = 2;
    arr[1][1] = 1;
    arr[2][0] = 3;
    arr[2][1] = 2;
    arr[3][0] = 4;
    arr[3][1] = 3;
    arr[4][0] = 4;
    arr[4][1] = 4;

    for(int i=0;i<strlen(ip);i++){
        int_ip[i] = ip[i]-97;
    }
    for (int i = 0; i < strlen(ip); i++)
    {
        curr = checkNext(arr,curr,int_ip[i]);

        printf("%d->",curr);
        if(curr == 0){
            final[i] = curr;
            count++;
        }

    }

    printf("\n%d\n",count);

    if(count >= 3){
        printf("String is accepted");
    }else{
        printf("String is not accepted");
    }
}