//
// Created by Naum Puroski on 2019-04-19.
//

#ifndef FACTORY_COMPONENTMOCK_H
#define FACTORY_COMPONENTMOCK_H

#include <library/Component.h>
#include <iostream>
#include <string>

class ComponentMock : public Component {
public:
  void method() override {
    std::cout << "Hello from test environment. My test wants to tell you '" << message_ << "'" << std::endl;
  };

  void set_message(std::string message) {
    message_ = std::move(message);
  }

private:
  std::string message_;
};

#endif // FACTORY_COMPONENTMOCK_H
