/*
 * Copyright 2021 Rockchip Electronics Co. LTD
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 * hh@rock-chip.com
 *
 */

#ifndef _RK_AUDIO_TIMES_HEAD_
#define _RK_AUDIO_TIMES_HEAD_

#include <stdint.h>

uint64_t getNowMs();
uint64_t getNowUs();
uint64_t getRelativeMs();
uint64_t getRelativeUs();
void sleepMs(uint64_t time);
void sleepUs(uint64_t time);

#endif  // _RK_AUDIO_TIMES_HEAD_ 

