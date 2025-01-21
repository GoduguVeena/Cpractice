#include<stdio.h>
int step;
void Hanoi(int n,char s,char d,char a){
    if(n==1)
    printf("\nstep%d::disk %d from %c to -> %c",++step,n,s,d);
    else {
        Hanoi(n-1,s,a,d);
        printf("\nstep%d::disk %d from %c to -> %c",++step,n,s,d);
        Hanoi(n-1,a,d,s);
    }
}
int main(){
    printf("**STEPS OF TOWER OF HANOI**");
    Hanoi(3,'S','D','A');
}