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
#include <uORB/topics/estimator_fusion_control.h>


static inline constexpr int ucdr_topic_size_estimator_fusion_control()
{
	return 34;
}

static inline bool ucdr_serialize_estimator_fusion_control(const void* data, ucdrBuffer& buf, int64_t time_offset = 0)
{
	const estimator_fusion_control_s& topic = *static_cast<const estimator_fusion_control_s*>(data);
	static_assert(sizeof(topic.timestamp) == 8, "size mismatch");
	const uint64_t timestamp_adjusted = topic.timestamp + time_offset;
	memcpy(buf.iterator, &timestamp_adjusted, sizeof(topic.timestamp));
	buf.iterator += sizeof(topic.timestamp);
	buf.offset += sizeof(topic.timestamp);
	static_assert(sizeof(topic.gps_intended) == 2, "size mismatch");
	memcpy(buf.iterator, &topic.gps_intended, sizeof(topic.gps_intended));
	buf.iterator += sizeof(topic.gps_intended);
	buf.offset += sizeof(topic.gps_intended);
	static_assert(sizeof(topic.of_intended) == 1, "size mismatch");
	memcpy(buf.iterator, &topic.of_intended, sizeof(topic.of_intended));
	buf.iterator += sizeof(topic.of_intended);
	buf.offset += sizeof(topic.of_intended);
	static_assert(sizeof(topic.ev_intended) == 1, "size mismatch");
	memcpy(buf.iterator, &topic.ev_intended, sizeof(topic.ev_intended));
	buf.iterator += sizeof(topic.ev_intended);
	buf.offset += sizeof(topic.ev_intended);
	static_assert(sizeof(topic.agp_intended) == 4, "size mismatch");
	memcpy(buf.iterator, &topic.agp_intended, sizeof(topic.agp_intended));
	buf.iterator += sizeof(topic.agp_intended);
	buf.offset += sizeof(topic.agp_intended);
	static_assert(sizeof(topic.baro_intended) == 1, "size mismatch");
	memcpy(buf.iterator, &topic.baro_intended, sizeof(topic.baro_intended));
	buf.iterator += sizeof(topic.baro_intended);
	buf.offset += sizeof(topic.baro_intended);
	static_assert(sizeof(topic.rng_intended) == 1, "size mismatch");
	memcpy(buf.iterator, &topic.rng_intended, sizeof(topic.rng_intended));
	buf.iterator += sizeof(topic.rng_intended);
	buf.offset += sizeof(topic.rng_intended);
	static_assert(sizeof(topic.mag_intended) == 1, "size mismatch");
	memcpy(buf.iterator, &topic.mag_intended, sizeof(topic.mag_intended));
	buf.iterator += sizeof(topic.mag_intended);
	buf.offset += sizeof(topic.mag_intended);
	static_assert(sizeof(topic.aspd_intended) == 1, "size mismatch");
	memcpy(buf.iterator, &topic.aspd_intended, sizeof(topic.aspd_intended));
	buf.iterator += sizeof(topic.aspd_intended);
	buf.offset += sizeof(topic.aspd_intended);
	static_assert(sizeof(topic.rngbcn_intended) == 1, "size mismatch");
	memcpy(buf.iterator, &topic.rngbcn_intended, sizeof(topic.rngbcn_intended));
	buf.iterator += sizeof(topic.rngbcn_intended);
	buf.offset += sizeof(topic.rngbcn_intended);
	static_assert(sizeof(topic.gps_active) == 2, "size mismatch");
	memcpy(buf.iterator, &topic.gps_active, sizeof(topic.gps_active));
	buf.iterator += sizeof(topic.gps_active);
	buf.offset += sizeof(topic.gps_active);
	static_assert(sizeof(topic.of_active) == 1, "size mismatch");
	memcpy(buf.iterator, &topic.of_active, sizeof(topic.of_active));
	buf.iterator += sizeof(topic.of_active);
	buf.offset += sizeof(topic.of_active);
	static_assert(sizeof(topic.ev_active) == 1, "size mismatch");
	memcpy(buf.iterator, &topic.ev_active, sizeof(topic.ev_active));
	buf.iterator += sizeof(topic.ev_active);
	buf.offset += sizeof(topic.ev_active);
	static_assert(sizeof(topic.agp_active) == 4, "size mismatch");
	memcpy(buf.iterator, &topic.agp_active, sizeof(topic.agp_active));
	buf.iterator += sizeof(topic.agp_active);
	buf.offset += sizeof(topic.agp_active);
	static_assert(sizeof(topic.baro_active) == 1, "size mismatch");
	memcpy(buf.iterator, &topic.baro_active, sizeof(topic.baro_active));
	buf.iterator += sizeof(topic.baro_active);
	buf.offset += sizeof(topic.baro_active);
	static_assert(sizeof(topic.rng_active) == 1, "size mismatch");
	memcpy(buf.iterator, &topic.rng_active, sizeof(topic.rng_active));
	buf.iterator += sizeof(topic.rng_active);
	buf.offset += sizeof(topic.rng_active);
	static_assert(sizeof(topic.mag_active) == 1, "size mismatch");
	memcpy(buf.iterator, &topic.mag_active, sizeof(topic.mag_active));
	buf.iterator += sizeof(topic.mag_active);
	buf.offset += sizeof(topic.mag_active);
	static_assert(sizeof(topic.aspd_active) == 1, "size mismatch");
	memcpy(buf.iterator, &topic.aspd_active, sizeof(topic.aspd_active));
	buf.iterator += sizeof(topic.aspd_active);
	buf.offset += sizeof(topic.aspd_active);
	static_assert(sizeof(topic.rngbcn_active) == 1, "size mismatch");
	memcpy(buf.iterator, &topic.rngbcn_active, sizeof(topic.rngbcn_active));
	buf.iterator += sizeof(topic.rngbcn_active);
	buf.offset += sizeof(topic.rngbcn_active);
	return true;
}

static inline bool ucdr_deserialize_estimator_fusion_control(ucdrBuffer& buf, estimator_fusion_control_s& topic, int64_t time_offset = 0)
{
	static_assert(sizeof(topic.timestamp) == 8, "size mismatch");
	memcpy(&topic.timestamp, buf.iterator, sizeof(topic.timestamp));
	if (topic.timestamp == 0) topic.timestamp = hrt_absolute_time();
	else topic.timestamp = math::min(topic.timestamp - time_offset, hrt_absolute_time());
	buf.iterator += sizeof(topic.timestamp);
	buf.offset += sizeof(topic.timestamp);
	static_assert(sizeof(topic.gps_intended) == 2, "size mismatch");
	memcpy(&topic.gps_intended, buf.iterator, sizeof(topic.gps_intended));
	buf.iterator += sizeof(topic.gps_intended);
	buf.offset += sizeof(topic.gps_intended);
	static_assert(sizeof(topic.of_intended) == 1, "size mismatch");
	memcpy(&topic.of_intended, buf.iterator, sizeof(topic.of_intended));
	buf.iterator += sizeof(topic.of_intended);
	buf.offset += sizeof(topic.of_intended);
	static_assert(sizeof(topic.ev_intended) == 1, "size mismatch");
	memcpy(&topic.ev_intended, buf.iterator, sizeof(topic.ev_intended));
	buf.iterator += sizeof(topic.ev_intended);
	buf.offset += sizeof(topic.ev_intended);
	static_assert(sizeof(topic.agp_intended) == 4, "size mismatch");
	memcpy(&topic.agp_intended, buf.iterator, sizeof(topic.agp_intended));
	buf.iterator += sizeof(topic.agp_intended);
	buf.offset += sizeof(topic.agp_intended);
	static_assert(sizeof(topic.baro_intended) == 1, "size mismatch");
	memcpy(&topic.baro_intended, buf.iterator, sizeof(topic.baro_intended));
	buf.iterator += sizeof(topic.baro_intended);
	buf.offset += sizeof(topic.baro_intended);
	static_assert(sizeof(topic.rng_intended) == 1, "size mismatch");
	memcpy(&topic.rng_intended, buf.iterator, sizeof(topic.rng_intended));
	buf.iterator += sizeof(topic.rng_intended);
	buf.offset += sizeof(topic.rng_intended);
	static_assert(sizeof(topic.mag_intended) == 1, "size mismatch");
	memcpy(&topic.mag_intended, buf.iterator, sizeof(topic.mag_intended));
	buf.iterator += sizeof(topic.mag_intended);
	buf.offset += sizeof(topic.mag_intended);
	static_assert(sizeof(topic.aspd_intended) == 1, "size mismatch");
	memcpy(&topic.aspd_intended, buf.iterator, sizeof(topic.aspd_intended));
	buf.iterator += sizeof(topic.aspd_intended);
	buf.offset += sizeof(topic.aspd_intended);
	static_assert(sizeof(topic.rngbcn_intended) == 1, "size mismatch");
	memcpy(&topic.rngbcn_intended, buf.iterator, sizeof(topic.rngbcn_intended));
	buf.iterator += sizeof(topic.rngbcn_intended);
	buf.offset += sizeof(topic.rngbcn_intended);
	static_assert(sizeof(topic.gps_active) == 2, "size mismatch");
	memcpy(&topic.gps_active, buf.iterator, sizeof(topic.gps_active));
	buf.iterator += sizeof(topic.gps_active);
	buf.offset += sizeof(topic.gps_active);
	static_assert(sizeof(topic.of_active) == 1, "size mismatch");
	memcpy(&topic.of_active, buf.iterator, sizeof(topic.of_active));
	buf.iterator += sizeof(topic.of_active);
	buf.offset += sizeof(topic.of_active);
	static_assert(sizeof(topic.ev_active) == 1, "size mismatch");
	memcpy(&topic.ev_active, buf.iterator, sizeof(topic.ev_active));
	buf.iterator += sizeof(topic.ev_active);
	buf.offset += sizeof(topic.ev_active);
	static_assert(sizeof(topic.agp_active) == 4, "size mismatch");
	memcpy(&topic.agp_active, buf.iterator, sizeof(topic.agp_active));
	buf.iterator += sizeof(topic.agp_active);
	buf.offset += sizeof(topic.agp_active);
	static_assert(sizeof(topic.baro_active) == 1, "size mismatch");
	memcpy(&topic.baro_active, buf.iterator, sizeof(topic.baro_active));
	buf.iterator += sizeof(topic.baro_active);
	buf.offset += sizeof(topic.baro_active);
	static_assert(sizeof(topic.rng_active) == 1, "size mismatch");
	memcpy(&topic.rng_active, buf.iterator, sizeof(topic.rng_active));
	buf.iterator += sizeof(topic.rng_active);
	buf.offset += sizeof(topic.rng_active);
	static_assert(sizeof(topic.mag_active) == 1, "size mismatch");
	memcpy(&topic.mag_active, buf.iterator, sizeof(topic.mag_active));
	buf.iterator += sizeof(topic.mag_active);
	buf.offset += sizeof(topic.mag_active);
	static_assert(sizeof(topic.aspd_active) == 1, "size mismatch");
	memcpy(&topic.aspd_active, buf.iterator, sizeof(topic.aspd_active));
	buf.iterator += sizeof(topic.aspd_active);
	buf.offset += sizeof(topic.aspd_active);
	static_assert(sizeof(topic.rngbcn_active) == 1, "size mismatch");
	memcpy(&topic.rngbcn_active, buf.iterator, sizeof(topic.rngbcn_active));
	buf.iterator += sizeof(topic.rngbcn_active);
	buf.offset += sizeof(topic.rngbcn_active);
	return true;
}
