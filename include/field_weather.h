#ifndef GUARD_WEATHER_H
#define GUARD_WEATHER_H

#include "global.h"

void fade_screen(u8, s8);

void SetSav1Weather(u32);
u8 GetSav1Weather(void);
void sub_80AEDBC(void);

void DoCurrentWeather(void);
void sub_807B0C4(u16 *, u16 *, u32);

#endif // GUARD_WEATHER_H
