
#include <iostream>

// �֐��|�C���^���֐��I�u�W�F�N�g


// int�^�����t���֐��|�C���^
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
    // �o�͌��ʁF7
  }

  {
    result = multi;
    temp   = result(3, 4);

    std::cout << temp << std::endl;
    // �o�͌��ʁF12
  }
  return 0;
}