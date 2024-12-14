
/*
 * SPDX-FileCopyrightText: 2023 Espressif Systems (Shanghai) CO LTD
 *
 * SPDX-License-Identifier: CC0-1.0
 */
#include "esp_err.h" // For esp_err_t type

#pragma once

typedef enum{
    SOUND_TYPE_KNOB,
    SOUND_TYPE_SNORE,
    SOUND_TYPE_WASH_END_CN,
    SOUND_TYPE_WASH_END_EN,
    SOUND_TYPE_FACTORY,
    SOUND_TYPE_0,
    SOUND_TYPE_25,
    SOUND_TYPE_50,
    SOUND_TYPE_75,
    SOUND_TYPE_100,

}PDM_SOUND_TYPE;

esp_err_t audio_force_quite(bool ret);

esp_err_t audio_handle_info(PDM_SOUND_TYPE voice);

esp_err_t audio_play_start();
esp_err_t app_audio_play_file(const char *file_path); // Prototype for app_audio_play_file
esp_err_t app_audio_tts_play(const char *text);      // Prototype for app_audio_tts_play
