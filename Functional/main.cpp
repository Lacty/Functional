
#include <iostream>

// 関数ポインタ＆関数オブジェクト


// int型引数付き関数ポインタ
int(*result)(int, int);
int add(int x, int y){
  return x + y;
}
int multi(int x, int y){
  return x * y;
}

int main(){
  int temp;

  {
    result = add;
    temp   = result(2, 5);

    std::cout << temp << std::endl;
    // 出力結果：7
  }

  {
    result = multi;
    temp   = result(3, 4);

    std::cout << temp << std::endl;
    // 出力結果：12
  }
  return 0;
}