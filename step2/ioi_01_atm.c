#include <stdio.h>
#include<stdbool.h>
main (){
int x,e;
float z, y;
bool valid =true;
float tf =0.5; //transaction fee

printf("Enter the account balance : ");
scanf("%f",&y);
printf ("Enter the amount to withdraw : ");
scanf ("%d",&x);

printf("Account Balance : %.2f\n",y);
printf("Amoumt to withdraw : %d\n",x);

if (y==0){
printf ("Account balance is zero");
valid = false;
}
// 5$ notes 
if ((x%5)!=0) {
printf ("Amount must be denominations 0f 5\n");
valid = false;
}
if ((x<=0) || (x>2000)) {
printf ("Amount must be bigger than 0 and less than 2000\n");
valid = false;
}

if (x>y) {
printf ("Amount is bigger than account balance\n");
valid = false;
}

if (valid){
y = y - x ;
printf ("transaction successfull\n");
printf ("the current account balance is %.2f\n",y);
}
else {
printf ("transaction not successfull\n");
}

return 0;
}
