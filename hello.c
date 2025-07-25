#include <stdio.h>
int main()
{
    int a[2][3]={{2,0,0},{0,3,0}};
    int flag=1;
    int row=3,col=3;
    if(row!=col){
        flag=0;
    }
    for(int i=0;i<3;i++){
         for(int j=0;j<3;j++){
            if(i==j){
                continue;
            }

            if(a[i][j]!=0){
                flag=0;
            }
    }
}
    if(flag==0){
        printf("Not Diagonal Matrix\n");
    }
    else{
        printf("Diagonal Matrix\n");
    }
    return 0;
}