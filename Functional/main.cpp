
#include <iostream>

// �֐��|�C���^���֐��I�u�W�F�N�g


// void�^�̊֐��|�C���^
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