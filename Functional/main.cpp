
#include <iostream>

// �֐��|�C���^���֐��I�u�W�F�N�g


// �֐��I�u�W�F�N�g
class FuncObject{
public:

  FuncObject() :
  x(0), y(0) {}


  void show(){
    std::cout << "x:" << x << "\n" << "y:" << y << "\n" << std::endl;
  }

  //void operator()(){
  //  std::cout << "x:" << x << "\n" << "y:" << y << "\n" << std::endl;
  //}
  //
  //func_obj(1, 2)();���ł���悤�ɂȂ�

  // ()���Z�q
  // a():�֐��Ăяo��
  FuncObject& operator()(float fx, float fy){
    x = fx;
    y = fy;
    return *this;
  }


private:

  float x;
  float y;
};

int main(){
  FuncObject func_obj;
  func_obj.show();

  func_obj(1, 4);
  func_obj.show();

  return 0;
}