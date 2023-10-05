#include <stdio.h>
int main(int argc, char *argv[]){

// GHM =  Gregorian/Hijri months    
char GHM [12][50]={"1: January Muharram","2: February Safar","3: March Rabi' al-Awwal","4: April Rabi' al-Thani","5: May Jumada al-Awwal","6: June Jumada al-Thani","7: July Rajab","8: August Sha'ban","9: September Ramadan","10: October Shawwal","11: November Dhu al-Qidah","12: December Dhu al-Hijjah"};

printf("Number Gregorian Hijri\n");

int i;
for( i=0; i<=12; i++ ){
printf("%s\n", GHM[i]);
}
return 0;
}

