
#include <iostream>

// �֐��|�C���^���֐��I�u�W�F�N�g


// �|�C���^�ɂ����֐�
int *func(){
  int result = 10;
  return &result;
}

int main(){
  std::cout << *func() << std::endl;
  // �o�͌���:10

  return 0;
}