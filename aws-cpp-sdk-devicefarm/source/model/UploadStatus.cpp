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
#include <aws/devicefarm/model/UploadStatus.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

static const int INITIALIZED_HASH = HashingUtils::HashString("INITIALIZED");
static const int PROCESSING_HASH = HashingUtils::HashString("PROCESSING");
static const int SUCCEEDED_HASH = HashingUtils::HashString("SUCCEEDED");
static const int FAILED_HASH = HashingUtils::HashString("FAILED");

namespace Aws
{
namespace DeviceFarm
{
namespace Model
{
namespace UploadStatusMapper
{


UploadStatus GetUploadStatusForName(const Aws::String& name)
{
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == INITIALIZED_HASH)
  {
     return UploadStatus::INITIALIZED;
  }
  else if (hashCode == PROCESSING_HASH)
  {
     return UploadStatus::PROCESSING;
  }
  else if (hashCode == SUCCEEDED_HASH)
  {
     return UploadStatus::SUCCEEDED;
  }
  else if (hashCode == FAILED_HASH)
  {
     return UploadStatus::FAILED;
  }
  return UploadStatus::NOT_SET;
}

Aws::String GetNameForUploadStatus(UploadStatus value)
{
  switch(value)
  {
  case UploadStatus::INITIALIZED:
    return "INITIALIZED";
  case UploadStatus::PROCESSING:
    return "PROCESSING";
  case UploadStatus::SUCCEEDED:
    return "SUCCEEDED";
  case UploadStatus::FAILED:
    return "FAILED";
  default:
    return "";
  }
}

} // namespace UploadStatusMapper
} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
