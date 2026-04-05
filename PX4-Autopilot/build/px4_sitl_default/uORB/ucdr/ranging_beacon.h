/****************************************************************************
 *
 *   Copyright (C) 2013-2022 PX4 Development Team. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the
 *    distribution.
 * 3. Neither the name PX4 nor the names of its contributors may be
 *    used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS
 * OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED
 * AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 ****************************************************************************/


// auto-generated file

#pragma once

#include <ucdr/microcdr.h>
#include <string.h>
#include <uORB/topics/ranging_beacon.h>


static inline constexpr int ucdr_topic_size_ranging_beacon()
{
	return 64;
}

static inline bool ucdr_serialize_ranging_beacon(const void* data, ucdrBuffer& buf, int64_t time_offset = 0)
{
	const ranging_beacon_s& topic = *static_cast<const ranging_beacon_s*>(data);
	static_assert(sizeof(topic.timestamp) == 8, "size mismatch");
	const uint64_t timestamp_adjusted = topic.timestamp + time_offset;
	memcpy(buf.iterator, &timestamp_adjusted, sizeof(topic.timestamp));
	buf.iterator += sizeof(topic.timestamp);
	buf.offset += sizeof(topic.timestamp);
	static_assert(sizeof(topic.timestamp_sample) == 8, "size mismatch");
	const uint64_t timestamp_sample_adjusted = topic.timestamp_sample + time_offset;
	memcpy(buf.iterator, &timestamp_sample_adjusted, sizeof(topic.timestamp_sample));
	buf.iterator += sizeof(topic.timestamp_sample);
	buf.offset += sizeof(topic.timestamp_sample);
	static_assert(sizeof(topic.beacon_id) == 1, "size mismatch");
	memcpy(buf.iterator, &topic.beacon_id, sizeof(topic.beacon_id));
	buf.iterator += sizeof(topic.beacon_id);
	buf.offset += sizeof(topic.beacon_id);
	buf.iterator += 3; // padding
	buf.offset += 3; // padding
	static_assert(sizeof(topic.range) == 4, "size mismatch");
	memcpy(buf.iterator, &topic.range, sizeof(topic.range));
	buf.iterator += sizeof(topic.range);
	buf.offset += sizeof(topic.range);
	static_assert(sizeof(topic.lat) == 8, "size mismatch");
	memcpy(buf.iterator, &topic.lat, sizeof(topic.lat));
	buf.iterator += sizeof(topic.lat);
	buf.offset += sizeof(topic.lat);
	static_assert(sizeof(topic.lon) == 8, "size mismatch");
	memcpy(buf.iterator, &topic.lon, sizeof(topic.lon));
	buf.iterator += sizeof(topic.lon);
	buf.offset += sizeof(topic.lon);
	static_assert(sizeof(topic.alt) == 4, "size mismatch");
	memcpy(buf.iterator, &topic.alt, sizeof(topic.alt));
	buf.iterator += sizeof(topic.alt);
	buf.offset += sizeof(topic.alt);
	static_assert(sizeof(topic.alt_type) == 1, "size mismatch");
	memcpy(buf.iterator, &topic.alt_type, sizeof(topic.alt_type));
	buf.iterator += sizeof(topic.alt_type);
	buf.offset += sizeof(topic.alt_type);
	buf.iterator += 3; // padding
	buf.offset += 3; // padding
	static_assert(sizeof(topic.hacc) == 4, "size mismatch");
	memcpy(buf.iterator, &topic.hacc, sizeof(topic.hacc));
	buf.iterator += sizeof(topic.hacc);
	buf.offset += sizeof(topic.hacc);
	static_assert(sizeof(topic.vacc) == 4, "size mismatch");
	memcpy(buf.iterator, &topic.vacc, sizeof(topic.vacc));
	buf.iterator += sizeof(topic.vacc);
	buf.offset += sizeof(topic.vacc);
	static_assert(sizeof(topic.sequence_nr) == 1, "size mismatch");
	memcpy(buf.iterator, &topic.sequence_nr, sizeof(topic.sequence_nr));
	buf.iterator += sizeof(topic.sequence_nr);
	buf.offset += sizeof(topic.sequence_nr);
	static_assert(sizeof(topic.status) == 1, "size mismatch");
	memcpy(buf.iterator, &topic.status, sizeof(topic.status));
	buf.iterator += sizeof(topic.status);
	buf.offset += sizeof(topic.status);
	static_assert(sizeof(topic.carrier_freq) == 2, "size mismatch");
	memcpy(buf.iterator, &topic.carrier_freq, sizeof(topic.carrier_freq));
	buf.iterator += sizeof(topic.carrier_freq);
	buf.offset += sizeof(topic.carrier_freq);
	static_assert(sizeof(topic.range_accuracy) == 4, "size mismatch");
	memcpy(buf.iterator, &topic.range_accuracy, sizeof(topic.range_accuracy));
	buf.iterator += sizeof(topic.range_accuracy);
	buf.offset += sizeof(topic.range_accuracy);
	return true;
}

static inline bool ucdr_deserialize_ranging_beacon(ucdrBuffer& buf, ranging_beacon_s& topic, int64_t time_offset = 0)
{
	static_assert(sizeof(topic.timestamp) == 8, "size mismatch");
	memcpy(&topic.timestamp, buf.iterator, sizeof(topic.timestamp));
	if (topic.timestamp == 0) topic.timestamp = hrt_absolute_time();
	else topic.timestamp = math::min(topic.timestamp - time_offset, hrt_absolute_time());
	buf.iterator += sizeof(topic.timestamp);
	buf.offset += sizeof(topic.timestamp);
	static_assert(sizeof(topic.timestamp_sample) == 8, "size mismatch");
	memcpy(&topic.timestamp_sample, buf.iterator, sizeof(topic.timestamp_sample));
	if (topic.timestamp_sample == 0) topic.timestamp_sample = hrt_absolute_time();
	else topic.timestamp_sample = math::min(topic.timestamp_sample - time_offset, hrt_absolute_time());
	buf.iterator += sizeof(topic.timestamp_sample);
	buf.offset += sizeof(topic.timestamp_sample);
	static_assert(sizeof(topic.beacon_id) == 1, "size mismatch");
	memcpy(&topic.beacon_id, buf.iterator, sizeof(topic.beacon_id));
	buf.iterator += sizeof(topic.beacon_id);
	buf.offset += sizeof(topic.beacon_id);
	buf.iterator += 3; // padding
	buf.offset += 3; // padding
	static_assert(sizeof(topic.range) == 4, "size mismatch");
	memcpy(&topic.range, buf.iterator, sizeof(topic.range));
	buf.iterator += sizeof(topic.range);
	buf.offset += sizeof(topic.range);
	static_assert(sizeof(topic.lat) == 8, "size mismatch");
	memcpy(&topic.lat, buf.iterator, sizeof(topic.lat));
	buf.iterator += sizeof(topic.lat);
	buf.offset += sizeof(topic.lat);
	static_assert(sizeof(topic.lon) == 8, "size mismatch");
	memcpy(&topic.lon, buf.iterator, sizeof(topic.lon));
	buf.iterator += sizeof(topic.lon);
	buf.offset += sizeof(topic.lon);
	static_assert(sizeof(topic.alt) == 4, "size mismatch");
	memcpy(&topic.alt, buf.iterator, sizeof(topic.alt));
	buf.iterator += sizeof(topic.alt);
	buf.offset += sizeof(topic.alt);
	static_assert(sizeof(topic.alt_type) == 1, "size mismatch");
	memcpy(&topic.alt_type, buf.iterator, sizeof(topic.alt_type));
	buf.iterator += sizeof(topic.alt_type);
	buf.offset += sizeof(topic.alt_type);
	buf.iterator += 3; // padding
	buf.offset += 3; // padding
	static_assert(sizeof(topic.hacc) == 4, "size mismatch");
	memcpy(&topic.hacc, buf.iterator, sizeof(topic.hacc));
	buf.iterator += sizeof(topic.hacc);
	buf.offset += sizeof(topic.hacc);
	static_assert(sizeof(topic.vacc) == 4, "size mismatch");
	memcpy(&topic.vacc, buf.iterator, sizeof(topic.vacc));
	buf.iterator += sizeof(topic.vacc);
	buf.offset += sizeof(topic.vacc);
	static_assert(sizeof(topic.sequence_nr) == 1, "size mismatch");
	memcpy(&topic.sequence_nr, buf.iterator, sizeof(topic.sequence_nr));
	buf.iterator += sizeof(topic.sequence_nr);
	buf.offset += sizeof(topic.sequence_nr);
	static_assert(sizeof(topic.status) == 1, "size mismatch");
	memcpy(&topic.status, buf.iterator, sizeof(topic.status));
	buf.iterator += sizeof(topic.status);
	buf.offset += sizeof(topic.status);
	static_assert(sizeof(topic.carrier_freq) == 2, "size mismatch");
	memcpy(&topic.carrier_freq, buf.iterator, sizeof(topic.carrier_freq));
	buf.iterator += sizeof(topic.carrier_freq);
	buf.offset += sizeof(topic.carrier_freq);
	static_assert(sizeof(topic.range_accuracy) == 4, "size mismatch");
	memcpy(&topic.range_accuracy, buf.iterator, sizeof(topic.range_accuracy));
	buf.iterator += sizeof(topic.range_accuracy);
	buf.offset += sizeof(topic.range_accuracy);
	return true;
}
