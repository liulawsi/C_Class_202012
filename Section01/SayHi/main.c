
 #include <stdio.h>
 #include <stdlib.h>

 /*
     程式名稱：Say Hi
     撰寫日期：2020/12/10
     展示字串輸入與註解
 */
 int main()
 {
     char name[50];     //變數宣告，存放名字，最多50字

     printf("你是誰？");    //顯示到Console
     scanf("%s", name);     //輸入名字
     printf("Hi~ %s 你好啊～\n", name); //把name顯示到%s的位置
     return 0;
 }
