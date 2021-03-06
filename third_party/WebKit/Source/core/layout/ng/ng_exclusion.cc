// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "core/layout/ng/ng_exclusion.h"

namespace blink {

bool NGExclusion::operator==(const NGExclusion& other) const {
  return std::tie(other.rect, other.type) == std::tie(rect, type);
}

}  // namespace blink
