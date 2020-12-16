
 #include <stdio.h>
 #include <stdlib.h>

 //自訂函式在這裡
 void SayHi(char theNname[])
 {
     printf("Hello, %s !\n", theNname);
 }

 int main()
 {
     char name[20];

     printf("請問大名是？");
	 scanf("%s", name);   //name前面不加 '&' !

     SayHi(name);  //呼叫函式

     return 0;
 }

