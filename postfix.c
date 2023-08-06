#include<stdio.h>
#include<ctype.h>
#define n 1000
char s[n],in[n],pr[n];
int top=-1,j=0;
void push(char ch)
{
    if(top==n-1)
        printf("overflow condition\n");
    else
    s[++top]=ch;
}
char pop()
{
    if(top==-1)
        printf("underflow condition");
    else
    return s[top--];
}
int prec(char a)
{
    switch(a)
    {
      case ')' : return 0;
      case '+' :
      case '-' : return 1;
      case '*' :
      case '%' :
      case '/' : return 2;
      case '^' : return 3;
    }
}
int main()
{
    int i,l=0;
    printf("enter infix expression\n");
    gets(in);
    for(i=0;in[i]!='\0';i++)
        l++;
    push(')');
    for(i=0;i<l;i++)
        push(in[i]);
    for(i=0;i<l;i++)
        in[i]=pop();
    in[l]='(';
    for(i=0;i<=l;i++)
    {
        if(isalnum(in[i]))
            pr[j++]=in[i];
        else if(in[i]==')')
                    push(in[i]);
        else if(in[i]=='(')
        {
            while(s[top]!=')')
            {
                pr[j++]=pop();

            }top--;
        }
        else
        {
            while(prec(s[top])>prec(in[i]))
            {
                pr[j++]=pop();
            }
            push(in[i]);
        }
    }
    pr[j]='\0';
    strrev(pr);
    printf("\nthe prefix expression is :");
    puts(pr);
}
