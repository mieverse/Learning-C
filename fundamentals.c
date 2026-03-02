# include <stdio.h>

int main(void){
    printf("This is a short c program.\n");

    char name;
    int num;
    int sid;
    float marks;

    char myText[] = "Adib";

    name = 'A';
    sid = 12345;
    marks = 14.5;
    
    // scanf("%d", &num);

    printf("Input: %d\n",num);
    printf("The student name %c with ID %d got %.2f in quiz1.\n", name, sid, marks);

    printf("%s", myText);

    return 0;
}
