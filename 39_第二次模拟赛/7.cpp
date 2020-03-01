#include<stdio.h>
void number(char *p);
int Gnum,Tnum,Pnum,Lnum;
int main()
{
  
  char ch[10000]={0};
  char *p;
  
  scanf("%s",&ch);       //输入字符串
  number(ch);
  
  while(1){             //打印GPLT
    
    if(Gnum!=0){
      printf("G");
      Gnum--;
    }
    if(Pnum!=0){
      printf("P");
      Pnum--;
    }
    if(Lnum!=0){
      printf("L");
      Lnum--;
    }
    if(Tnum!=0){
      printf("T");
      Tnum--;
    }
    if(Gnum==0&&Pnum==00&&Lnum==0&&Tnum==0) 
      break;
    }
  return 0;
}
void number(char *p)        //计算大小写g，t，p，l的个数
{
  while(*p!='\0'){
    if(*p=='G'||*p=='g') Gnum++;
    if(*p=='P'||*p=='p') Pnum++;
    if(*p=='L'||*p=='l') Lnum++;
    if(*p=='T'||*p=='t') Tnum++;
    p++;
  }
}