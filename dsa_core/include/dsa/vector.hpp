#pragma once
namespace dsa_core {
class Vector {
private:
  int a;
public:
  constexpr Vector(int _a) noexcept : a(_a) {}
  int get_a() const noexcept;
};
} // namespace dsa_core
