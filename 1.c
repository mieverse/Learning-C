# include <stdio.h>

int main(void) {

    int fnum, snum;

    printf("First Num:");
    scanf("%d", &fnum);

    printf("Second Num:");
    scanf("%d", &snum);

    if (fnum>snum){
        printf("Subtract: %d", fnum-snum);
    } else if (snum>fnum){
        printf("Add: %d", fnum+snum);
    } else if (fnum == snum){
        printf("Multiply: %d", fnum*snum);
    }


}