// Copyright 2017 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef DEVICE_GAMEPAD_GAMEPAD_HAPTICS_MANAGER_H_
#define DEVICE_GAMEPAD_GAMEPAD_HAPTICS_MANAGER_H_

#include "base/macros.h"
#include "device/gamepad/gamepad_export.h"
#include "device/gamepad/public/interfaces/gamepad.mojom.h"

namespace device {

class DEVICE_GAMEPAD_EXPORT GamepadHapticsManager
    : public mojom::GamepadHapticsManager {
 public:
  GamepadHapticsManager();
  ~GamepadHapticsManager() override;

  static void Create(mojom::GamepadHapticsManagerRequest request);

  // mojom::GamepadHapticsManager implementation.
  void PlayVibrationEffectOnce(int pad_index,
                               mojom::GamepadHapticEffectType,
                               mojom::GamepadEffectParametersPtr,
                               PlayVibrationEffectOnceCallback) override;
  void ResetVibrationActuator(int pad_index,
                              ResetVibrationActuatorCallback) override;

 private:
  DISALLOW_COPY_AND_ASSIGN(GamepadHapticsManager);
};

}  // namespace device

#endif  // DEVICE_GAMEPAD_GAMEPAD_HAPTICS_MANAGER_H_
