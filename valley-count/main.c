#include<stdio.h>
#include<string.h>
int main()
{
    int valleycount=0,altitude=0,u,d,i,n;
    char s[10000];
    scanf("%d%s",&n,s);
    for(i=0;i<n;i++)
    {
        if(s[i]=='D'||s[i]=='d')
        {
            altitude--;
        }
        else if(s[i]=='U'||s[i]=='u')
        {
            altitude++;
            if(altitude==0 && (s[i]=='U'||s[i]=='u'))
            {
            valleycount++;
            }
        }
      
    } 
    printf("%d",valleycount);
return 0;

}
