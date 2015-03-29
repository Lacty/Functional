
#include <iostream>

// 関数ポインタ＆関数オブジェクト


// ポインタにした関数
int *func(){
  int result = 10;
  return &result;
}

int main(){
  std::cout << *func() << std::endl;
  // 出力結果:10

  return 0;
}