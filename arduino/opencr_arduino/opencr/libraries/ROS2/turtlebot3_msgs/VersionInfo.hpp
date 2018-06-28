// Copyright 2016 Proyectos y Sistemas de Mantenimiento SL (eProsima).
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.


/*! 
 * @file VersionInfo.hpp
 * This header file contains the declaration of the described types in the IDL file.
 *
 * This file was generated by the tool gen.
 */
#ifndef _TURTLEBOT3_MSGS_VERSION_INFO_HPP_
#define _TURTLEBOT3_MSGS_VERSION_INFO_HPP_


#include "micrortps.hpp"
#include <topic_config.h>
#include <topic.hpp>


namespace turtlebot3_msgs {


class VersionInfo : public ros2::Topic<VersionInfo>
{
public: 
    char* hardware;
    char* firmware;
    char* software;

  VersionInfo():
    Topic("turtlebot3_msgs::msg::dds_::VersionInfo_", TURTLEBOT3_MSGS_VERSION_INFO_TOPIC),
    hardware(NULL), firmware(NULL), software(NULL)
  { 
  }

  virtual bool serialize(MicroBuffer* writer, const VersionInfo* topic)
  {
    serialize_sequence_char(writer, topic->hardware, (uint32_t)(strlen(topic->hardware) + 1));
    serialize_sequence_char(writer, topic->firmware, (uint32_t)(strlen(topic->firmware) + 1));
    serialize_sequence_char(writer, topic->software, (uint32_t)(strlen(topic->software) + 1));
    return writer->error == BUFFER_OK;
  }

  virtual bool deserialize(MicroBuffer* reader, VersionInfo* topic)
  {
    uint32_t size_hardware = 0;
    uint32_t size_firmware = 0;
    uint32_t size_software = 0;
    deserialize_sequence_char(reader, &topic->hardware, &size_hardware);
    deserialize_sequence_char(reader, &topic->firmware, &size_firmware);
    deserialize_sequence_char(reader, &topic->software, &size_software);
    return reader->error == BUFFER_OK;
  }

  virtual uint32_t size_of_topic(const VersionInfo* topic)
  {
    uint32_t size = 0;

    size += 4 + get_alignment(size, 4) + (uint32_t)(strlen(topic->hardware) + 1);
    size += 4 + get_alignment(size, 4) + (uint32_t)(strlen(topic->firmware) + 1);
    size += 4 + get_alignment(size, 4) + (uint32_t)(strlen(topic->software) + 1);

    return size;
  }

};

} // namespace turtlebot3_msgs


#endif // _TURTLEBOT3_MSGS_VERSION_INFO_HPP_
