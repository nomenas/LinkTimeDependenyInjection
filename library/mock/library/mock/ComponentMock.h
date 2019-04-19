//
// Created by Naum Puroski on 2019-04-19.
//

#ifndef FACTORY_COMPONENTMOCK_H
#define FACTORY_COMPONENTMOCK_H

#include <library/Component.h>
#include <iostream>

class ComponentMock : public Component {
public:
  void method() override {
    std::cout << "Hello world from mock world" << std::endl;
  };
};

#endif // FACTORY_COMPONENTMOCK_H
