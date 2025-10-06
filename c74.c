#include<stdio.h>
#include<string.h>
//remove duplicates from string
int main()
{
    char str[100];;
    fgets(str,100,stdin);
    printf("string is %s",str);
    int l=strlen(str);
    char s[50];
    int count=0;
for(int i=0;i<l-1;i++){
    //s[i]=str[i];
   // printf("%c",s[i]);

    for(int j=i+1;j<l;j++){

    if (str[i]==str[j]){
        count++;
        //str[i]=" ";
        printf("duplicate char is %c occurs %d times\n",str[i],count+1);
        
    }
}
}

}