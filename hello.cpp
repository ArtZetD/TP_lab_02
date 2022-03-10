#include <iostream>
#include <string>

int
main()
{
  std::string name;
  std::cout << "name - " << std::endl;
  std::cin >> name; // enter your name please
  std::cout << "Hello world from " << name << std::endl;

  return 0;
}
