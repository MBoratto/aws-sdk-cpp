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
#include <aws/ssm/model/DocumentFilterKey.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

static const int Name_HASH = HashingUtils::HashString("Name");
static const int Owner_HASH = HashingUtils::HashString("Owner");
static const int PlatformTypes_HASH = HashingUtils::HashString("PlatformTypes");

namespace Aws
{
namespace SSM
{
namespace Model
{
namespace DocumentFilterKeyMapper
{


DocumentFilterKey GetDocumentFilterKeyForName(const Aws::String& name)
{
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == Name_HASH)
  {
     return DocumentFilterKey::Name;
  }
  else if (hashCode == Owner_HASH)
  {
     return DocumentFilterKey::Owner;
  }
  else if (hashCode == PlatformTypes_HASH)
  {
     return DocumentFilterKey::PlatformTypes;
  }
  return DocumentFilterKey::NOT_SET;
}

Aws::String GetNameForDocumentFilterKey(DocumentFilterKey value)
{
  switch(value)
  {
  case DocumentFilterKey::Name:
    return "Name";
  case DocumentFilterKey::Owner:
    return "Owner";
  case DocumentFilterKey::PlatformTypes:
    return "PlatformTypes";
  default:
    return "";
  }
}

} // namespace DocumentFilterKeyMapper
} // namespace Model
} // namespace SSM
} // namespace Aws
