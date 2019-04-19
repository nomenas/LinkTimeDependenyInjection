#include <library/mock/ComponentMock.h>
#include <util/create_mock_signal.h>

int main() {
  CreateMockSignal<ComponentMock>::connect([](auto& mock_obj){
    mock_obj.set_message("Think about this approach ;)");
  });

  auto component = ComponentFactory{}.create();
  component->method();

  return 0;
}