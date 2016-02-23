/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#include <aws/waf/model/PredicateType.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

static const int IPMatch_HASH = HashingUtils::HashString("IPMatch");
static const int ByteMatch_HASH = HashingUtils::HashString("ByteMatch");
static const int SqlInjectionMatch_HASH = HashingUtils::HashString("SqlInjectionMatch");
static const int SizeConstraint_HASH = HashingUtils::HashString("SizeConstraint");

namespace Aws
{
namespace WAF
{
namespace Model
{
namespace PredicateTypeMapper
{


PredicateType GetPredicateTypeForName(const Aws::String& name)
{
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == IPMatch_HASH)
  {
     return PredicateType::IPMatch;
  }
  else if (hashCode == ByteMatch_HASH)
  {
     return PredicateType::ByteMatch;
  }
  else if (hashCode == SqlInjectionMatch_HASH)
  {
     return PredicateType::SqlInjectionMatch;
  }
  else if (hashCode == SizeConstraint_HASH)
  {
     return PredicateType::SizeConstraint;
  }
  return PredicateType::NOT_SET;
}

Aws::String GetNameForPredicateType(PredicateType value)
{
  switch(value)
  {
  case PredicateType::IPMatch:
    return "IPMatch";
  case PredicateType::ByteMatch:
    return "ByteMatch";
  case PredicateType::SqlInjectionMatch:
    return "SqlInjectionMatch";
  case PredicateType::SizeConstraint:
    return "SizeConstraint";
  default:
    return "";
  }
}

} // namespace PredicateTypeMapper
} // namespace Model
} // namespace WAF
} // namespace Aws
