#include <stdio.h>


int main(){

int item[8]={25,12,8,40,5,18,3,22};

int len=sizeof(item)/sizeof(item[0]);

for(int i=0;i<len;i++){

printf("item no:%d \n Quantity :%d\n",i+1,item[i]);

printf(item[i]<10 ? "Low stock\n":"");

}


int num;
int quan;
while(1){
 printf("Enter the item number\n");   
scanf("%d",&num);
if(num==0){
break;

}

 if(num < 1 || num > len) {
            printf("Invalid item number! Try again.\n\n");
            continue;
        }

printf("Enter sold quantity \n");
scanf("%d",&quan);




int index = num - 1;
        if (item[index] >= quan) {
            item[index] -= quan;
            printf("Updated Stock for item %d: %d\n\n", num, item[index]);
        } else {
            printf("Error: Not enough stock available!\n\n");
        }
};
int total=0;
int min=item[0];
for(int i=0;i<len;i++){

    printf(" FINAL STOCK LEVEL:%d\n",item[i]);
    total+=item[i];

if(item[i]<min){
    min=item[i];


}

};

printf("Total remaining:%d\n",total);
printf("%d is the least stock\n",min);
}