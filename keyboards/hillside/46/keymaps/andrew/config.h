// Copyright 2022 Michael McCoyd (@mmccoyd)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

// Some boards have issues detecting handedness using the vbus voltage.
// Such as Elite-C v3, but not v3.1 on. Also apparently some ProMicro boards.
// For those boands, use usb detection instead.
// #define SPLIT_USB_DETECT

// TT(layer) - Layer Tap-Toggle. If you hold the key down, layer is activated, 
// and then is de-activated when you let go (like MO). If you repeatedly tap it, 
// the layer will be toggled on or off (like TG). It needs 5 taps by default, 
// but you can change this by defining TAPPING_TOGGLE -- for example, 
// #define TAPPING_TOGGLE 2 to toggle on just two taps.

#define TAPPING_TOGGLE 2
#define MK_KINETIC_SPEED 1
