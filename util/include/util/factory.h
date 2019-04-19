#pragma once

#include <functional>
#include <memory>
#include <utility>

template <typename Signature>
class Factory {
 public:
  using Delegate = std::function<Signature>;
  explicit Factory(Delegate delegate) : delegate_{std::move(delegate)} {}

  template <typename... Args>
  auto create(Args&&... args) const -> decltype(Delegate()(std::forward<Args>(args)...)) {
    return delegate_(std::forward<Args>(args)...);
  }

 private:
  Delegate delegate_;
};

#define FACTORY(NAME, SIGNATURE)                                                               \
  class NAME final : public Factory<SIGNATURE> {                                         \
   public:                                                                                     \
    NAME();                                                                                    \
    NAME(std::function<SIGNATURE> delegate) : Factory<SIGNATURE>(std::move(delegate)) {} \
  };
