
 #include <stdio.h>
 #include <stdlib.h>

 int main()
 {
     int choice, number, money;

     while(1)
     {
        printf("1.����, 2.�u�ݲ�, 3.�P����\n");
		printf("�п�J(1/2/3)�G");
		scanf("%d",&choice);
		printf("�п�J�R�X�i�G");
		scanf("%d",&number);

		switch(choice) {
			case 1:
				money = number * 300;
				break;
			case 2:
				money = number * 250;
				break;
			case 3:
				money = number * 200;
				break;
			default:
				printf("��J���~�I\n");
				money = 0;
		}
		printf("�����`�B��%d��\n", money);
		printf("====================\n");
     }
     return 0;
 }
