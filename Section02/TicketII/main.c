
 #include <stdio.h>
 #include <stdlib.h>

 int main()
 {
     int choice, number, money;

     while(1)
     {
        printf("1.全票, 2.優待票, 3.星光票\n");
		printf("請輸入(1/2/3)：");
		scanf("%d",&choice);
		printf("請輸入買幾張：");
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
				printf("輸入錯誤！\n");
				money = 0;
		}
		printf("票價總額為%d元\n", money);
		printf("====================\n");
     }
     return 0;
 }
