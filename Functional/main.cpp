
#include <iostream>

// 関数ポインタ＆関数オブジェクト


// ふつうの関数で同じことができるかやってみた
int *result();
int hoge(){
  return 10;
}

int main(){
  *result() = hoge();
  std::cout << result() << std::endl;

  // コンパイルエラーでた
  // ダメな感じかな？

  // そもそもコードが汚いね

  return 0;
}