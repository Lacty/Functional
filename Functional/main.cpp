
#include <iostream>

// 関数ポインタ＆関数オブジェクト


// ふつうの関数
int func(){
  return 10;
}

int main(){
  std::cout << func() << std::endl;
  // 出力結果:10

  return 0;
}