# include<stdio.h>
// convertor
int main() {
    int n;
    printf("Enter the decimal number: \n");
    scanf("%d", &n);
    int a[10];
    int rem;
    int i=0;

    while(n){
        rem=n%2;
        n = n/2;
        a[i]= rem;
        i++;
    }

    for(int j= i-1; j>=0; j--){
        printf("%d", a[j]);
    }
    return 0;
}
