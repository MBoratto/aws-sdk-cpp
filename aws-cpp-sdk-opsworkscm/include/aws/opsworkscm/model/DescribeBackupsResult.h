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
#include <aws/opsworkscm/OpsWorksCM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opsworkscm/model/Backup.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace OpsWorksCM
{
namespace Model
{
  class AWS_OPSWORKSCM_API DescribeBackupsResult
  {
  public:
    DescribeBackupsResult();
    DescribeBackupsResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeBackupsResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * <p>Contains the response to a <code>DescribeBackups</code> request. </p>
     */
    inline const Aws::Vector<Backup>& GetBackups() const{ return m_backups; }

    /**
     * <p>Contains the response to a <code>DescribeBackups</code> request. </p>
     */
    inline void SetBackups(const Aws::Vector<Backup>& value) { m_backups = value; }

    /**
     * <p>Contains the response to a <code>DescribeBackups</code> request. </p>
     */
    inline void SetBackups(Aws::Vector<Backup>&& value) { m_backups = std::move(value); }

    /**
     * <p>Contains the response to a <code>DescribeBackups</code> request. </p>
     */
    inline DescribeBackupsResult& WithBackups(const Aws::Vector<Backup>& value) { SetBackups(value); return *this;}

    /**
     * <p>Contains the response to a <code>DescribeBackups</code> request. </p>
     */
    inline DescribeBackupsResult& WithBackups(Aws::Vector<Backup>&& value) { SetBackups(std::move(value)); return *this;}

    /**
     * <p>Contains the response to a <code>DescribeBackups</code> request. </p>
     */
    inline DescribeBackupsResult& AddBackups(const Backup& value) { m_backups.push_back(value); return *this; }

    /**
     * <p>Contains the response to a <code>DescribeBackups</code> request. </p>
     */
    inline DescribeBackupsResult& AddBackups(Backup&& value) { m_backups.push_back(std::move(value)); return *this; }

    /**
     * <p>NextToken is a string that is returned in some command responses. It
     * indicates that not all entries have been returned, and that you must run at
     * least one more request to get remaining items. To get remaining results, call
     * <code>DescribeBackups</code> again, and assign the token from the previous
     * results as the value of the <code>nextToken</code> parameter. If there are no
     * more results, the response object's <code>nextToken</code> parameter value is
     * <code>null</code>. Setting a <code>nextToken</code> value that was not returned
     * in your previous results causes an <code>InvalidNextTokenException</code> to
     * occur. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>NextToken is a string that is returned in some command responses. It
     * indicates that not all entries have been returned, and that you must run at
     * least one more request to get remaining items. To get remaining results, call
     * <code>DescribeBackups</code> again, and assign the token from the previous
     * results as the value of the <code>nextToken</code> parameter. If there are no
     * more results, the response object's <code>nextToken</code> parameter value is
     * <code>null</code>. Setting a <code>nextToken</code> value that was not returned
     * in your previous results causes an <code>InvalidNextTokenException</code> to
     * occur. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>NextToken is a string that is returned in some command responses. It
     * indicates that not all entries have been returned, and that you must run at
     * least one more request to get remaining items. To get remaining results, call
     * <code>DescribeBackups</code> again, and assign the token from the previous
     * results as the value of the <code>nextToken</code> parameter. If there are no
     * more results, the response object's <code>nextToken</code> parameter value is
     * <code>null</code>. Setting a <code>nextToken</code> value that was not returned
     * in your previous results causes an <code>InvalidNextTokenException</code> to
     * occur. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>NextToken is a string that is returned in some command responses. It
     * indicates that not all entries have been returned, and that you must run at
     * least one more request to get remaining items. To get remaining results, call
     * <code>DescribeBackups</code> again, and assign the token from the previous
     * results as the value of the <code>nextToken</code> parameter. If there are no
     * more results, the response object's <code>nextToken</code> parameter value is
     * <code>null</code>. Setting a <code>nextToken</code> value that was not returned
     * in your previous results causes an <code>InvalidNextTokenException</code> to
     * occur. </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>NextToken is a string that is returned in some command responses. It
     * indicates that not all entries have been returned, and that you must run at
     * least one more request to get remaining items. To get remaining results, call
     * <code>DescribeBackups</code> again, and assign the token from the previous
     * results as the value of the <code>nextToken</code> parameter. If there are no
     * more results, the response object's <code>nextToken</code> parameter value is
     * <code>null</code>. Setting a <code>nextToken</code> value that was not returned
     * in your previous results causes an <code>InvalidNextTokenException</code> to
     * occur. </p>
     */
    inline DescribeBackupsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>NextToken is a string that is returned in some command responses. It
     * indicates that not all entries have been returned, and that you must run at
     * least one more request to get remaining items. To get remaining results, call
     * <code>DescribeBackups</code> again, and assign the token from the previous
     * results as the value of the <code>nextToken</code> parameter. If there are no
     * more results, the response object's <code>nextToken</code> parameter value is
     * <code>null</code>. Setting a <code>nextToken</code> value that was not returned
     * in your previous results causes an <code>InvalidNextTokenException</code> to
     * occur. </p>
     */
    inline DescribeBackupsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>NextToken is a string that is returned in some command responses. It
     * indicates that not all entries have been returned, and that you must run at
     * least one more request to get remaining items. To get remaining results, call
     * <code>DescribeBackups</code> again, and assign the token from the previous
     * results as the value of the <code>nextToken</code> parameter. If there are no
     * more results, the response object's <code>nextToken</code> parameter value is
     * <code>null</code>. Setting a <code>nextToken</code> value that was not returned
     * in your previous results causes an <code>InvalidNextTokenException</code> to
     * occur. </p>
     */
    inline DescribeBackupsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:
    Aws::Vector<Backup> m_backups;
    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace OpsWorksCM
} // namespace Aws
