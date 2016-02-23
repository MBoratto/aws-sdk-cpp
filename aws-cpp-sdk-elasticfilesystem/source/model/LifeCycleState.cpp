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
#include <aws/elasticfilesystem/model/LifeCycleState.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

static const int creating_HASH = HashingUtils::HashString("creating");
static const int available_HASH = HashingUtils::HashString("available");
static const int deleting_HASH = HashingUtils::HashString("deleting");
static const int deleted_HASH = HashingUtils::HashString("deleted");

namespace Aws
{
namespace EFS
{
namespace Model
{
namespace LifeCycleStateMapper
{


LifeCycleState GetLifeCycleStateForName(const Aws::String& name)
{
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == creating_HASH)
  {
     return LifeCycleState::creating;
  }
  else if (hashCode == available_HASH)
  {
     return LifeCycleState::available;
  }
  else if (hashCode == deleting_HASH)
  {
     return LifeCycleState::deleting;
  }
  else if (hashCode == deleted_HASH)
  {
     return LifeCycleState::deleted;
  }
  return LifeCycleState::NOT_SET;
}

Aws::String GetNameForLifeCycleState(LifeCycleState value)
{
  switch(value)
  {
  case LifeCycleState::creating:
    return "creating";
  case LifeCycleState::available:
    return "available";
  case LifeCycleState::deleting:
    return "deleting";
  case LifeCycleState::deleted:
    return "deleted";
  default:
    return "";
  }
}

} // namespace LifeCycleStateMapper
} // namespace Model
} // namespace EFS
} // namespace Aws
