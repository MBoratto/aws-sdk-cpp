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
#include <aws/machinelearning/model/EntityStatus.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

static const int PENDING_HASH = HashingUtils::HashString("PENDING");
static const int INPROGRESS_HASH = HashingUtils::HashString("INPROGRESS");
static const int FAILED_HASH = HashingUtils::HashString("FAILED");
static const int COMPLETED_HASH = HashingUtils::HashString("COMPLETED");
static const int DELETED_HASH = HashingUtils::HashString("DELETED");

namespace Aws
{
namespace MachineLearning
{
namespace Model
{
namespace EntityStatusMapper
{


EntityStatus GetEntityStatusForName(const Aws::String& name)
{
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == PENDING_HASH)
  {
     return EntityStatus::PENDING;
  }
  else if (hashCode == INPROGRESS_HASH)
  {
     return EntityStatus::INPROGRESS;
  }
  else if (hashCode == FAILED_HASH)
  {
     return EntityStatus::FAILED;
  }
  else if (hashCode == COMPLETED_HASH)
  {
     return EntityStatus::COMPLETED;
  }
  else if (hashCode == DELETED_HASH)
  {
     return EntityStatus::DELETED;
  }
  return EntityStatus::NOT_SET;
}

Aws::String GetNameForEntityStatus(EntityStatus value)
{
  switch(value)
  {
  case EntityStatus::PENDING:
    return "PENDING";
  case EntityStatus::INPROGRESS:
    return "INPROGRESS";
  case EntityStatus::FAILED:
    return "FAILED";
  case EntityStatus::COMPLETED:
    return "COMPLETED";
  case EntityStatus::DELETED:
    return "DELETED";
  default:
    return "";
  }
}

} // namespace EntityStatusMapper
} // namespace Model
} // namespace MachineLearning
} // namespace Aws
