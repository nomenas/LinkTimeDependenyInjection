//
// Created by Naum Puroski on 2019-04-19.
//
#include <memory>

#include <library/mock/ComponentMock.h>
#include <util/create_mock_signal.h>

ComponentFactory::ComponentFactory()
    : ComponentFactory([]() {
        auto mock_obj = std::make_unique<ComponentMock>();
        CreateMockSignal<ComponentMock>::signal()(*mock_obj);
        return mock_obj;
      }) {}