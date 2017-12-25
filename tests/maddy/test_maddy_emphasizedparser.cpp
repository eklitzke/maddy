/*
 * This project is licensed under the MIT license. For more information see the
 * LICENSE file.
 */
#include <memory>

#include "gmock/gmock.h"

#include "maddy/emphasizedparser.h"

// -----------------------------------------------------------------------------

TEST(MADDY_EMPHASIZEDPARSER, ItReplacesMarkdownWithEmphasizedHTML)
{
  std::string text = "some text *bla* text testing *it* out";
  std::string expected = "some text <em>bla</em> text testing <em>it</em> out";
  auto emphasizedParser = std::make_shared<maddy::EmphasizedParser>();

  emphasizedParser->Parse(text);

  ASSERT_EQ(expected, text);
}