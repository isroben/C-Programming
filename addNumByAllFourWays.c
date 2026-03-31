#include<stdio.h>

void noArgNoRet(){
    int x, y;
    printf("Enter two numbers for NoArg No return: ");
    scanf("%d %d", &x, &y);
    printf("Sum = %d\n", x+y);
}
void ArgNoRet(int x, int y){
    printf("Sum is: %d\n", x+y);
}
int NoArgRet(){
    int x, y;

    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);
    return x+y;
}
int ArgRet(int x, int y){
    return x+y;
}

int main(){
    int a, b;
    printf("Enter the value of a and b: ");
    scanf("%d %d", &a, &b);
    noArgNoRet();
    ArgNoRet(a,b);
    int ans = NoArgRet();
    int res = ArgRet(a, b);

    printf("Argument with return is: %d",res);
    printf("Argument with no return is: %d\n", ans);

    return 0;

}