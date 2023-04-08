// Copyright 2022 Stefan Kerkmann
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include_next <mcuconf.h>

#undef RP_PWM_USE_PWM0
#define RP_PWM_USE_PWM0 TRUE

#undef RP_PWM_USE_PWM4
#define RP_PWM_USE_PWM4 TRUE

#undef STM32_SPI_USE_SPI2
#define STM32_SPI_USE_SPI2 TRUE

#undef SPI_MOSI_PIN
#define SPI_MOSI_PIN GP3

#undef SPI_SCK_PIN
#define SPI_SCK_PIN GP2
