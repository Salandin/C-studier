function wnint(x) result(i) bind(c)
  use ISO_C_BINDING
  implicit none
  real(C_DOUBlE), intent(in)::x
  integer(C_INT)::i

  i = nint(x)
end function wnint
