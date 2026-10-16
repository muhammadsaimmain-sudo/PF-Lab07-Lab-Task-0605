#include <stdio.h>

int main(){
int patient[15];
int len=sizeof(patient)/sizeof(patient[0]);
int user=0;
int tok[15];
int count=0;
for(int i=0;i<15;i++){



    printf("Enter the patient number\n");
    scanf("%d",&patient[i]);

if(patient[i]==-1 || len<15){
    break;
}
printf("Enter token number\n");
scanf("%d",&tok[i]);
    

count++;
   



}



for(int i=0;i<count;i++){
 printf("Position :%d\n Token: %d\n",i+1,tok[i]);


}


char p;
for(int j=0;j<15;j++){
printf("Enter c to call the pattent");
scanf(" %c", &p);

int one=patient[0];

if(p=='c'){
printf("Token number :%d \n Patient:%d \n",tok[j],patient[j]);
for(int i=0;i<count-1;i++){
patient[i]=patient[i+1];
tok[i]=tok[i+1];
}


count--;
if(count<=0){

    printf("Patient ends\n");
    break;
}
}
else if (p=='e')
{
    printf("Token number :%d \n Patient:%d \n",tok[j],patient[j]);
for(int i=0;i<count-1;i++){
patient[i]=patient[i+1];
tok[i]=tok[i+1];}

count--;
if(count<=0){

    printf("Patient ends\n");
    break;
}



}


}





}
