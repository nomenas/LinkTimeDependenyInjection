//
// Created by Naum Puroski on 2019-04-19.
//

#include <memory>
#include <library/Component.h>

#include <ComponentImpl.h>

ComponentFactory::ComponentFactory()
    : ComponentFactory([]() {
      return std::make_unique<ComponentImpl>();
    }) {}