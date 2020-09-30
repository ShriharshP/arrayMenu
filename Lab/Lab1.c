#include<stdio.h>
int a[10],n,i,pos,valu;

void read();
void display();
void delete(int pos);
void insert(int pos, int valu);

main(){
int choice;

do{
printf("\n\n1:Creat array\n");
printf("2:Insert an element at the givin position\n");
printf("3:Delete an element at the givin position\n");
printf("4:Display\n");
printf("5:Exit\n");
printf("Enter your choise\n");
scanf("%d",&choice);

switch(choice){
case 1:read();
break;
case 2:printf("Enter the position and the value of the element\n");
scanf("%d%d",&pos,&valu);
insert(pos,valu);
break;
case 3:printf("Enter the position\n");
scanf("%d",&pos);
delete(pos);
break;
case 4:display();
break;
case 5:printf("End of the array opration\n");
break;
default:printf("Invalid choice\n");
break;
}
}while(choice!=5);
}

void read(){
printf("Enter the size of array\n");
scanf("%d",&n);
printf("Enter the array element\n");
for(i=0;i<n;i++){
scanf("%d",&a[i]);
}
}

void display(){
printf("Array element are\n");
for(i=0;i<n;i++){
printf("%d\n",a[i]);
}
}

void delete(int pos){
int i,j;
for(i=0;i<n;i++){
if(i==pos-1){
for(j=pos-1;j<n;j++)
a[j]=a[j+1];
}
}
n--;
}

void insert(int pos, int valu){
int i,j,temp,temp1;
i=0;

while(i<n){
if(i==pos-1){
temp=a[i];
a[i]=valu;
for(j=pos;j<=n;j++){
temp1=a[j];
a[j]=temp;
temp=temp1;
}
}
i++;
}
n=n+1;
}
