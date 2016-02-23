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
#include <aws/s3/model/ReplicationStatus.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

static const int COMPLETE_HASH = HashingUtils::HashString("COMPLETE");
static const int PENDING_HASH = HashingUtils::HashString("PENDING");
static const int FAILED_HASH = HashingUtils::HashString("FAILED");
static const int REPLICA_HASH = HashingUtils::HashString("REPLICA");

namespace Aws
{
namespace S3
{
namespace Model
{
namespace ReplicationStatusMapper
{


ReplicationStatus GetReplicationStatusForName(const Aws::String& name)
{
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == COMPLETE_HASH)
  {
     return ReplicationStatus::COMPLETE;
  }
  else if (hashCode == PENDING_HASH)
  {
     return ReplicationStatus::PENDING;
  }
  else if (hashCode == FAILED_HASH)
  {
     return ReplicationStatus::FAILED;
  }
  else if (hashCode == REPLICA_HASH)
  {
     return ReplicationStatus::REPLICA;
  }
  return ReplicationStatus::NOT_SET;
}

Aws::String GetNameForReplicationStatus(ReplicationStatus value)
{
  switch(value)
  {
  case ReplicationStatus::COMPLETE:
    return "COMPLETE";
  case ReplicationStatus::PENDING:
    return "PENDING";
  case ReplicationStatus::FAILED:
    return "FAILED";
  case ReplicationStatus::REPLICA:
    return "REPLICA";
  default:
    return "";
  }
}

} // namespace ReplicationStatusMapper
} // namespace Model
} // namespace S3
} // namespace Aws
