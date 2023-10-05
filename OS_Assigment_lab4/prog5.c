#include <stdio.h>

int main(int argc, char *argv[])
{

int H;
H = atoi(argv[1]);

int S;
S = H *60 *60; 
if(H == 1){
printf( "in %d hour, there are %d seconds\n",H ,S);
}
else if(H > 1){
printf( "in %d hours, there are %d seconds\n",H ,S);
}
else {printf("invalid number\n");
}
return 0;
}
