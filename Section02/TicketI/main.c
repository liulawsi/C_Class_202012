
 #include <stdio.h>
 #include <stdlib.h>

 int main()
 {
     int choice;

     while(1)
     {
        printf("1.����, 2.�u�ݲ�, 3.�P����\n");
		printf("�п�J(1/2/3)�G");
		scanf("%d",&choice);

		switch(choice) {
			case 1:
				printf("�����@�i300��\n");
				break;
			case 2:
				printf("�u�ݲ��@�i250��\n");
				break;
			case 3:
				printf("�P�����@�i200��\n");
				break;
			default:
				printf("��J���~�I\n");
		}
		printf("====================\n");
     }
     return 0;
 }
