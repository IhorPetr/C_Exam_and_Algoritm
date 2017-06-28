#include <stdio.h>
#include <stdlib.h>


#define Lower 0
#define Upper 300
#define Step 20
#define Out 0
#define In 1

void main()
{
    /*yor code is shittt!!!*/
    printf("Hello world!\n");
    int o = getchar();
    putchar(o);
    char op = "Find";
    int t = sizeof(op);
    float r = 71.8986;
    printf("x = %4.2f \n", r);
   // printf("%i\n",strlen(op));
    int y,nwite,nother,i;
    nother=nwite=0;
    int ndigit[10];
    for(i=0;i<10;++i)
    {
        ndigit[i]=0;
    }

    for(y=Lower;y<=Upper;y+=Step)
    {
        printf("%3d %6.1f\n",y,(0.5/9.0)*(y-32));
    }
    AssayNumber();


   // return 0;
}

void AssayNumber()
{
    //Clear Buffer
    while ( getchar() != '\n' );
    int u ;
    //Check Symbol in buffer
    while((u = getchar())!=EOF)
    {
        if((u<='0' || u>='9') && u!='\n')
        {
            printf("This buffer contain Symbols");
            return;
        }
        else if(u=='\n') return;

    }

}
