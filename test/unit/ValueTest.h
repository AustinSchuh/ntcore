#include "Value.h"

#include "gtest/gtest.h"

namespace ntimpl {

class ValueTest : public ::testing::Test {
 public:
  static NT_Value& ToNT(Value& v) { return v; }
};

}  // namespace ntimpl