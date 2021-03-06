﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

#pragma once
#include <aws/sms/SMS_EXPORTS.h>
#include <aws/sms/SMSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SMS
{
namespace Model
{

  /**
   */
  class AWS_SMS_API GetReplicationJobsRequest : public SMSRequest
  {
  public:
    GetReplicationJobsRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    
    inline const Aws::String& GetReplicationJobId() const{ return m_replicationJobId; }

    
    inline void SetReplicationJobId(const Aws::String& value) { m_replicationJobIdHasBeenSet = true; m_replicationJobId = value; }

    
    inline void SetReplicationJobId(Aws::String&& value) { m_replicationJobIdHasBeenSet = true; m_replicationJobId = std::move(value); }

    
    inline void SetReplicationJobId(const char* value) { m_replicationJobIdHasBeenSet = true; m_replicationJobId.assign(value); }

    
    inline GetReplicationJobsRequest& WithReplicationJobId(const Aws::String& value) { SetReplicationJobId(value); return *this;}

    
    inline GetReplicationJobsRequest& WithReplicationJobId(Aws::String&& value) { SetReplicationJobId(std::move(value)); return *this;}

    
    inline GetReplicationJobsRequest& WithReplicationJobId(const char* value) { SetReplicationJobId(value); return *this;}

    
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    
    inline GetReplicationJobsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    
    inline GetReplicationJobsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    
    inline GetReplicationJobsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

    
    inline int GetMaxResults() const{ return m_maxResults; }

    
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    
    inline GetReplicationJobsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:
    Aws::String m_replicationJobId;
    bool m_replicationJobIdHasBeenSet;
    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
    int m_maxResults;
    bool m_maxResultsHasBeenSet;
  };

} // namespace Model
} // namespace SMS
} // namespace Aws
