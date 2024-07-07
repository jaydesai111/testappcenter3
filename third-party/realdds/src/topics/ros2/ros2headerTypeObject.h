// License: Apache 2.0. See LICENSE file in root directory.
// Copyright(c) 2023 Intel Corporation. All Rights Reserved.

/*!
 * @file HeaderTypeObject.h
 * This header file contains the declaration of the described types in the IDL file.
 *
 * This file was generated by the tool gen.
 */

#ifndef _FAST_DDS_GENERATED_STD_MSGS_MSG_HEADER_TYPE_OBJECT_H_
#define _FAST_DDS_GENERATED_STD_MSGS_MSG_HEADER_TYPE_OBJECT_H_

#include "ros2timeTypeObject.h"

#include <fastrtps/types/TypeObject.h>
#include <map>

#if defined(_WIN32)
#if defined(EPROSIMA_USER_DLL_EXPORT)
#define eProsima_user_DllExport __declspec( dllexport )
#else
#define eProsima_user_DllExport
#endif
#else
#define eProsima_user_DllExport
#endif

#if defined(_WIN32)
#if defined(EPROSIMA_USER_DLL_EXPORT)
#if defined(Header_SOURCE)
#define Header_DllAPI __declspec( dllexport )
#else
#define Header_DllAPI __declspec( dllimport )
#endif // Header_SOURCE
#else
#define Header_DllAPI
#endif
#else
#define Header_DllAPI
#endif // _WIN32

using namespace eprosima::fastrtps::types;

eProsima_user_DllExport void registerHeaderTypes();

namespace std_msgs {
    namespace msg {
        eProsima_user_DllExport const TypeIdentifier* GetHeaderIdentifier(bool complete = false);
        eProsima_user_DllExport const TypeObject* GetHeaderObject(bool complete = false);
        eProsima_user_DllExport const TypeObject* GetMinimalHeaderObject();
        eProsima_user_DllExport const TypeObject* GetCompleteHeaderObject();

    } // namespace msg
} // namespace std_msgs

#endif // _FAST_DDS_GENERATED_STD_MSGS_MSG_HEADER_TYPE_OBJECT_H_