int fun(char arr[6],int i){   //hello\0
                              //01234 5
    if(arr[i]=='\0'){return 0;}
    int l=fun(arr,i+1);
    return l+1;
}

int main(){
    char ar[100]="IamDewan";
    int l=fun(ar,0);
    printf("%d\n",l);
    return 0;
}