#include <stdio.h>
int main(void)
{
  int input;

  //整数を１つ入力する
  scanf("%d",&input);

  //0以上9以下、または12以上14以下ならOK判定
  if ((input >= 0 && input < 10)||
      (input >= 12 && input < 15))
  {
    printf("OK");
  }
  else
  {
    //上記の条件に当てはまらない場合はNG判定
    printf("NG");
  }
  return 0;
}
