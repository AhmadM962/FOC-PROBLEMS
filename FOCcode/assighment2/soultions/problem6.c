
#include <stdio.h>
#include "problem6-library.h"

int main()
{
    int h;
    scanf("%d",&h);
    if(h==1){
        drawRow(0,1,'H');
        
    }
    for(int i=0;i<h/2;i++){
        if(i%2==0){
            drawRow(i,h-(2*i),'x');
        }else{
            drawRow(i,h-(2*i),'-');
        }
        if(h%2!=0 && i==h/2 -1){
            drawRow(i+1,1,'H');
        }   
        
    }
    
    

    for (int j = h / 2 -1; j >= 0; j--) {
        if (j % 2 == 0) {
            drawRow(j, h - 2 * j, 'x');
        } else {
            drawRow(j, h - 2 * j, '-');
        }
    }
    
   
    

    return 0;
}
