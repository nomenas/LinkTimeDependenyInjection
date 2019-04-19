//
// Created by Naum Puroski on 2019-04-19.
//

#ifndef FACTORY_COMPONENT_H
#define FACTORY_COMPONENT_H

#include <util/factory.h>

class Component {
public:
  virtual ~Component() = default;

  virtual void method() = 0;
};

FACTORY(ComponentFactory, std::unique_ptr<Component>())

#endif // FACTORY_COMPONENT_H
