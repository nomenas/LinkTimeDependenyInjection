//
// Created by Naum Puroski on 2019-04-19.
//

#ifndef FACTORY_CREATE_MOCK_SIGNAL_H
#define FACTORY_CREATE_MOCK_SIGNAL_H

#include <library/mock/ComponentMock.h>

#include <functional>
#include <boost/signals2/signal.hpp>

template <typename T>
struct CreateMockSignal {
  using Signal = boost::signals2::signal<void(T&)>;
  using Connection = boost::signals2::connection;

  static Connection connect(std::function<void(T&)> handler) {
    return signal().connect(handler);
  }

  static Signal& signal() {
    static Signal instance;
    return instance;
  }
};

#endif // FACTORY_CREATE_MOCK_SIGNAL_H
