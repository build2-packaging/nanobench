#pragma once

#include <iosfwd>
#include <string>

#include <export.h>

namespace nanobench
{
  // Print a greeting for the specified name into the specified
  // stream. Throw std::invalid_argument if the name is empty.
  //
  LIBNANOBENCH_SYMEXPORT void
  say_hello (std::ostream&, const std::string& name);
}
