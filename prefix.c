#include<stdio.h>
#include<ctype.h>
#define n 1000
char s[n],in[n],po[n];
int top=-1,j=0;
void push(float ch)
{
    if(top==n-1)
        printf("overflow condition\n");
    else
    s[++top]=ch;
}
float pop()
{
    if(top==-1)
        printf("underflow condition");
    else
    return s[top--];
}
int main()
{
    int i,l=0;
    float op1,op2,value,result;
    printf("enter postfix expression\n");
    gets(po);
    for(i=0;po[i]!='\0';i++)
  {
      if(isalnum(po[i]))
        push((float)po[i]);
      else
      {
          op2=pop();
          op1=pop();
          switch(po[i])
          {
            case '+' : value=op1+op2;break;
            case '-' : value=op1-op2;break;
            case '*' : value=op1*op2;break;
            case '%' : value=(int)op1%(int)op2;break;
            case '/' : value=op1/op2;break;
            case '^' : value=(int)op1^(int)op2;break;
        }push(value);
      }
  }
  result=pop();
  printf("%.2f",result);
}
