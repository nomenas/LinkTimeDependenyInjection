#include <library/mock/ComponentMock.h>

int main() {
  auto component = ComponentFactory{}.create();
  component->method();

  return 0;
}