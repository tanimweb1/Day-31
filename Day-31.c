#include<stdio.h>
int main(){

// For loop revise ; 

// how break and continue works in c

for(int i= 1;i<12;i++){

if(i%3==0)
continue;
printf("%d\n",i);
if(i%10==0)
break;



}



// multiplication table

int n;
scanf("%d",&n);

for(int i = 1;i<=10;i++){
printf("%d * %d = %d\n",n,i,n*i);
}





// nth factorial 
int n,fact =1;
scanf("%d",&n);

for(int i = 1;i<=n;i++){

fact = fact*i;

}
printf("Fact is %d",fact);
    

    


    return 0;

}

