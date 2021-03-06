#include <stdio.h>

#define max 100

int is_prime(int n);
int goldbach(int maxnum);

int main()
{
    if(goldbach(max)){
        printf("猜想正确");
    }
    else{
        printf("猜想不正确");
    }
    return 0;
}

int is_prime(int n)
{
    for(int i = 2;i*i<=n;i++){
        if(n % i ==0){
            return 0;
        }
    }
    return 1;
}

int goldbach(int maxnum){
    for(int i=4;i<=maxnum;i++){
        if(i%2==0){
            for(int j=2;j*j<i;j++){
                if(is_prime(j)&&is_prime(i-j)){  //从2到数循环，将数拆成两个数，判断两个数是否都是质数
                    return 1;
                }
            }
        }
    }
    return 0;
}
