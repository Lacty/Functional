
#include <iostream>

// �֐��|�C���^���֐��I�u�W�F�N�g


// �ӂ��̊֐��œ������Ƃ��ł��邩����Ă݂�
int *result();
int hoge(){
  return 10;
}

int main(){
  *result() = hoge();
  std::cout << result() << std::endl;

  // �R���p�C���G���[�ł�
  // �_���Ȋ������ȁH

  // ���������R�[�h��������

  return 0;
}