#include<stdio.h>
#include<conio.h>
#include<string.h>

int checkNext(int arr[4][2],int curr,int inp){

    return  arr[curr][inp];

}
void main(){

    char ip[10]; 
    int arr[4][2];
    int curr = 0;
    int int_ip[10];
    int final = 3;

    // clrscr();

    printf("Enter a String");
    gets(ip);
    
    arr[0][0] = 1;
    arr[0][1] = 0;
    arr[1][0] = 2;
    arr[1][1] = 0;
    arr[2][0] = 2;
    arr[2][1] = 3;
    arr[3][0] = 3;
    arr[3][1] = 3;


    // printf("%d",strlen(ip));

    for(int i=0;i<strlen(ip);i++){
        int_ip[i] = ip[i]-48;
   }

    for (int i = 0; i < strlen(ip); i++)
    {
        curr = checkNext(arr,curr,int_ip[i]);

        printf("%d->",curr);

        // printf("%d\n",arr[ip[i]][curr]);
    }
    if(final == curr){
        printf("The String is acceopted");
    }else{
        printf("THe String is not accepted");
    }
}