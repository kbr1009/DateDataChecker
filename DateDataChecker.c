#include <stdio.h>

int main(void) {

  int lastday[12] = {31,28,31,30,31,30,31,31,30,31,30,31};/*末日の判定に使用*/
  int flag = -1;
  int year, month ,day;

  printf("年＝＝＞ ");
  scanf("%d", &year);
  printf("月＝＝＞ ");
  scanf("%d", &month);
  printf("日＝＝＞ ");
  scanf("%d", &day);

  printf("%d年%d月%d日は、", year, month, day);
  /*末日以外の判定*/
  if( ( ( year >= 1900 ) && ( year <= 2100 ) ) && ( month >= 1 ) && ( month <= 12 ) && ( day >= 1) ){
    /*31日まである日の判定*/
    if (( month == (1||3||5||7||8||10||12)) && ( day <= lastday[month-1]) ){
      flag = 0;
    }else{
      /*30日まである日の判定*/
      if( ( month == (4||6||9||11)) && ( day <= lastday[month-1] ) ){
        flag = 0;
      }else{
        /*うるう年かどうか*/
        if( year % 400 ==0||( year % 4 == 0 && !( year % 100 == 0 ) ) ){
          /*うるう年なら29日以下か*/
          if( day <= 29){
            flag = 0;
          }else{
            flag = -1;
          }
        }else{
          /*うるう年でないなら28日以下か*/
          if( day <= 28){
            flag = 0;
          }else{
            flag = -1;
          }
        }
      }
    }
  }else{
    flag = 1;
  }
  if( flag == 0){
    printf("正しい日付です\n");
  }else{
    printf("誤った日付です\n");
  }
  return 0;
}
