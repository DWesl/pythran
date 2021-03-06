#ifndef PYTHONIC_INCLUDE_OPERATOR_GT_HPP
#define PYTHONIC_INCLUDE_OPERATOR_GT_HPP

#include "pythonic/include/utils/functor.hpp"

PYTHONIC_NS_BEGIN

namespace operator_
{
  template <class A, class B>
  auto gt(A const &a, B const &b) -> decltype(a > b);

  bool gt(char const *, char const *);

  DEFINE_FUNCTOR(pythonic::operator_, gt);
}
PYTHONIC_NS_END

#endif
