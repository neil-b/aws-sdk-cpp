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
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/imagebuilder/model/ComponentVersion.h>
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
namespace imagebuilder
{
namespace Model
{
  class AWS_IMAGEBUILDER_API ListComponentsResult
  {
  public:
    ListComponentsResult();
    ListComponentsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListComponentsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The request ID that uniquely identifies this request. </p>
     */
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    /**
     * <p>The request ID that uniquely identifies this request. </p>
     */
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    /**
     * <p>The request ID that uniquely identifies this request. </p>
     */
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    /**
     * <p>The request ID that uniquely identifies this request. </p>
     */
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    /**
     * <p>The request ID that uniquely identifies this request. </p>
     */
    inline ListComponentsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    /**
     * <p>The request ID that uniquely identifies this request. </p>
     */
    inline ListComponentsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    /**
     * <p>The request ID that uniquely identifies this request. </p>
     */
    inline ListComponentsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}


    /**
     * <p>The list of component semantic versions. </p>
     */
    inline const Aws::Vector<ComponentVersion>& GetComponentVersionList() const{ return m_componentVersionList; }

    /**
     * <p>The list of component semantic versions. </p>
     */
    inline void SetComponentVersionList(const Aws::Vector<ComponentVersion>& value) { m_componentVersionList = value; }

    /**
     * <p>The list of component semantic versions. </p>
     */
    inline void SetComponentVersionList(Aws::Vector<ComponentVersion>&& value) { m_componentVersionList = std::move(value); }

    /**
     * <p>The list of component semantic versions. </p>
     */
    inline ListComponentsResult& WithComponentVersionList(const Aws::Vector<ComponentVersion>& value) { SetComponentVersionList(value); return *this;}

    /**
     * <p>The list of component semantic versions. </p>
     */
    inline ListComponentsResult& WithComponentVersionList(Aws::Vector<ComponentVersion>&& value) { SetComponentVersionList(std::move(value)); return *this;}

    /**
     * <p>The list of component semantic versions. </p>
     */
    inline ListComponentsResult& AddComponentVersionList(const ComponentVersion& value) { m_componentVersionList.push_back(value); return *this; }

    /**
     * <p>The list of component semantic versions. </p>
     */
    inline ListComponentsResult& AddComponentVersionList(ComponentVersion&& value) { m_componentVersionList.push_back(std::move(value)); return *this; }


    /**
     * <p>The next token used for paginated responses. When this is not empty, there
     * are additional elements that the service has not included in this request. Use
     * this token with the next request to retrieve additional objects. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The next token used for paginated responses. When this is not empty, there
     * are additional elements that the service has not included in this request. Use
     * this token with the next request to retrieve additional objects. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The next token used for paginated responses. When this is not empty, there
     * are additional elements that the service has not included in this request. Use
     * this token with the next request to retrieve additional objects. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The next token used for paginated responses. When this is not empty, there
     * are additional elements that the service has not included in this request. Use
     * this token with the next request to retrieve additional objects. </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The next token used for paginated responses. When this is not empty, there
     * are additional elements that the service has not included in this request. Use
     * this token with the next request to retrieve additional objects. </p>
     */
    inline ListComponentsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The next token used for paginated responses. When this is not empty, there
     * are additional elements that the service has not included in this request. Use
     * this token with the next request to retrieve additional objects. </p>
     */
    inline ListComponentsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The next token used for paginated responses. When this is not empty, there
     * are additional elements that the service has not included in this request. Use
     * this token with the next request to retrieve additional objects. </p>
     */
    inline ListComponentsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_requestId;

    Aws::Vector<ComponentVersion> m_componentVersionList;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
