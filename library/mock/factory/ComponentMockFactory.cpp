//
// Created by Naum Puroski on 2019-04-19.
//

#include <memory>
#include <library/Component.h>

#include <library/mock/ComponentMock.h>

ComponentFactory::ComponentFactory()
    : ComponentFactory([]() {
      return std::make_unique<ComponentMock>();
    }) {}