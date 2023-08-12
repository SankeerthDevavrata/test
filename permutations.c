#include<stdio.h>
static int a[10]={0};//a = flag array
static char res[10];// to print result
void permutations(char s[],int k)
{
    //static int a[10]={0};//a = flag array
    //static char res[10];// to print result
    int i;
    if(s[k]=='\0')
    {
        res[k]='\0';
        printf("%s\n",res);
    }
    else
    {
        for(i=0;s[i]!='\0';i++)
        {
            if(a[i]==0)
            {
                res[k]=s[i];
                a[i]=1;
                permutations(s,k+1);
                a[i]=0;
            }
        }
    }
}
int main()
{
    char s[]="abcd";
    permutations(s,0);
    return 0;
}