#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int a,b;
        scanf("%d%d",&a,&b);
    if(a==b){
        if(a%2==0)
        printf("CHEFINA\n");
        else
        printf("CHEF\n");
    }
    else if(b>a){
        if(a%2==0){
            printf("CHEFINA\n");
        }
        if(a%2!=0){
            if((b-a)>=2)
            printf("CHEFINA\n");
            else
            printf("CHEF\n");
        }
        
    }
    else{
        if(b%2==1)
	                printf("CHEF\n");
	            else
	            {
	                if((a-b)>=2)
	                    printf("CHEF\n");
	                else
	                    printf("CHEFINA\n");
	            }

    }


    }
    
    return 0;
}