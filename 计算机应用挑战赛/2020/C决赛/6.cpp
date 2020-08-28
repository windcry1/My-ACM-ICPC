#include "stdio.h"
#include "string.h"
typedef struct{
 char bname[20];
 char bwriter[10];
 double bprice[2];
} Book;
Book f(Book book){
 Book b={"c programm","cc",54.0,48.0};
 strcpy(book.bname,b.bname);
 strcpy(book.bwriter,b.bwriter);
 for(int i=0;i<2;i++)
  book.bprice[i]=b.bprice[i]*0.8;
 return book;
}
int main(){
 Book b={"computer","john",62.0,57.8}, t;
 t=f(b);
 printf("%s,%s,%3.1f,%3.1f",t.bname,t.bwriter,t.bprice[0],t.bprice[1]);
}
