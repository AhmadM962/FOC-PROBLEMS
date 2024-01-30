#include <stdio.h>
#include <math.h>


int main()
{

    int uinput=0;
    int reminder =0;
    int numofdigits =0;
    int result=0;
    int uinput1=0;
    int uinput2;
    scanf("%d",&uinput);
    uinput1 =uinput;
    uinput2=uinput;
    while(uinput>0){
        reminder = uinput%10;
        uinput = uinput/10;
        numofdigits++;

    }
    while(uinput1>0){
        reminder = uinput1%10;
        uinput1 = uinput1/10;
        result=pow(reminder,numofdigits) + result;

    }
    if(result==uinput2 || result==uinput2-7 || result==uinput2+7 || result==uinput2/7||result==uinput2*7){
        printf("Ronaldo Number");
    }
    else{
        printf("Not a Ronaldo Number");

    }
    
    

    return 0;
}

