
 #include <stdio.h>
 #include <stdlib.h>

 //�ۭq�禡�b�o��
 void SayHi(char theNname[])
 {
     printf("Hello, %s !\n", theNname);
 }

 int main()
 {
     char name[20];

     printf("�аݤj�W�O�H");
	 scanf("%s", name);   //name�e�����[ '&' !

     SayHi(name);  //�I�s�禡

     return 0;
 }

