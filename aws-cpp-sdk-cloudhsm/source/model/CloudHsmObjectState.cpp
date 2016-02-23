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
#include <aws/cloudhsm/model/CloudHsmObjectState.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

static const int READY_HASH = HashingUtils::HashString("READY");
static const int UPDATING_HASH = HashingUtils::HashString("UPDATING");
static const int DEGRADED_HASH = HashingUtils::HashString("DEGRADED");

namespace Aws
{
namespace CloudHSM
{
namespace Model
{
namespace CloudHsmObjectStateMapper
{


CloudHsmObjectState GetCloudHsmObjectStateForName(const Aws::String& name)
{
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == READY_HASH)
  {
     return CloudHsmObjectState::READY;
  }
  else if (hashCode == UPDATING_HASH)
  {
     return CloudHsmObjectState::UPDATING;
  }
  else if (hashCode == DEGRADED_HASH)
  {
     return CloudHsmObjectState::DEGRADED;
  }
  return CloudHsmObjectState::NOT_SET;
}

Aws::String GetNameForCloudHsmObjectState(CloudHsmObjectState value)
{
  switch(value)
  {
  case CloudHsmObjectState::READY:
    return "READY";
  case CloudHsmObjectState::UPDATING:
    return "UPDATING";
  case CloudHsmObjectState::DEGRADED:
    return "DEGRADED";
  default:
    return "";
  }
}

} // namespace CloudHsmObjectStateMapper
} // namespace Model
} // namespace CloudHSM
} // namespace Aws
