#include <iostream>

class test
{
private:
  std::string msg;
public:
  test(std::string m){
    msg = m;
  }

  void write_msg()
  {
    std::cout << msg  << std::endl;
  }
};

int main(int argc, char* argv[])
{
  std::string msg = "Hello";
  if (argc == 2)
  {
    msg = argv[1];
  }

  test test(msg);
  test.write_msg();
  return 0;
}