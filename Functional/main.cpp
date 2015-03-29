
#include <iostream>

// 関数ポインタ＆関数オブジェクト


// void型の関数ポインタ
void(*sayMyName)();
void cat(){
  std::cout << "My Name Is Cat" << std::endl;
}
void dog(){
  std::cout << "My Name Is Dog" << std::endl;
}

int main(){

  sayMyName = cat;
  sayMyName();

  sayMyName = dog;
  sayMyName();

  return 0;
}