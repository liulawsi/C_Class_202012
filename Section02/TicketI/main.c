
 #include <stdio.h>
 #include <stdlib.h>

 int main()
 {
     int choice;

     while(1)
     {
        printf("1.布, 2.纔布, 3.琍布\n");
		printf("叫块(1/2/3)");
		scanf("%d",&choice);

		switch(choice) {
			case 1:
				printf("布眎300じ\n");
				break;
			case 2:
				printf("纔布眎250じ\n");
				break;
			case 3:
				printf("琍布眎200じ\n");
				break;
			default:
				printf("块岿粇\n");
		}
		printf("====================\n");
     }
     return 0;
 }
