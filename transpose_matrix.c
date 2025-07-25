 #include <stdio.h>
int main()
{
    int a[3][3]={{2,3,4},{1,2,3},{4,5,6}}, b[3][3];
    for(int j=0;j<3;j++){
         for(int i=0;i<3;i++){
            printf("%d ",b[j][i]=a[i][j]);
         }
          printf("\n");
    }
    return 0;
}