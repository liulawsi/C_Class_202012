
 #include <stdio.h>
 #include <stdlib.h>

 int main()
 {
     int scores[5][3]={ {85,78,65},{75,85,69},
                        {63,67,95},{94,92,88},
                        {74,65,73} };
     char names[5][10] = {"Jack", "Rose", "Peter",
                          "Paul", "Sam"};
     char subjects[3][10] = {"數學","英文","理化"};

     printf("\t");
     for(int k = 0; k < 5; k++)
     {
	 	 printf("%s\t",names[k]);
	 }
     printf("\n");
     for(int i = 0; i < 3; i++)
     {
         printf("%s\t",subjects[i]);
		 for(int k = 0; k < 5; k++)
		 {
		     printf("%d\t",scores[k][i]);
         }
         printf("\n");

     }
     printf("==========================================\n");

     printf("\t");
	 for(int k = 0; k < 3; k++)
     {
         printf("%s\t",subjects[k]);
     }
     printf("\n");
     for(int i = 0; i < 5; i++)
     {
         printf("%s\t",names[i]);
		 for(int k = 0; k < 3; k++)
		 {
		 	 printf("%d\t",scores[i][k]);
		 }
		 printf("\n");
     }
     return 0;
 }

 /*
		System.out.printf("%s\t","");
		for(int k = 0; k < 5; k++) {
			System.out.printf("%s\t",names[k]);
		}
		System.out.println();
		for(int i = 0; i < 3; i++) {
			System.out.printf("%s\t",subjects[i]);
			for(int k = 0; k < 5; k++) {
				System.out.printf("%d\t",scores[k][i]);
			}
			System.out.println();
		}
		System.out.println("========================================");
		System.out.printf("%s\t","");
		for(int k = 0; k < 3; k++) {
			System.out.printf("%s\t",subjects[k]);
		}

		for(int i = 0; i < 5; i++) {
			System.out.printf("%s\t",names[i]);
			for(int k = 0; k < 3; k++) {
				System.out.printf("%d\t",scores[i][k]);
			}
			System.out.println();
		}

		*/
