// Copyright 2020 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     https://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef PLATFORM_IMPL_WINDOWS_SCHEDULED_EXECUTOR_H_
#define PLATFORM_IMPL_WINDOWS_SCHEDULED_EXECUTOR_H_

#include "platform/api/scheduled_executor.h"

namespace location {
namespace nearby {
namespace windows {

// An Executor that can schedule commands to run after a given delay, or to
// execute periodically.
//
// https://docs.oracle.com/javase/8/docs/api/java/util/concurrent/ScheduledExecutorService.html
class ScheduledExecutor : public api::ScheduledExecutor {
 public:
  // TODO(b/184975123): replace with real implementation.
  ~ScheduledExecutor() override = default;

  // Cancelable is kept both in the executor context, and in the caller context.
  // We want Cancelable to live until both caller and executor are done with it.
  // Exclusive ownership model does not work for this case;
  // using std:shared_ptr<> instead if std::unique_ptr<>.
  // TODO(b/184975123): replace with real implementation.
  std::shared_ptr<api::Cancelable> Schedule(Runnable&& runnable,
                                            absl::Duration duration) override {
    return nullptr;
  }

  // https://docs.oracle.com/javase/8/docs/api/java/util/concurrent/Executor.html#execute-java.lang.Runnable-
  // TODO(b/184975123): replace with real implementation.
  void Execute(Runnable&& runnable) override {}

  // https://docs.oracle.com/javase/8/docs/api/java/util/concurrent/ExecutorService.html#shutdown--
  // TODO(b/184975123): replace with real implementation.
  void Shutdown() override {}

  // TODO(b/184975123): replace with real implementation.
  int GetTid(int index) const override { return 0; }
};

}  // namespace windows
}  // namespace nearby
}  // namespace location

#endif  // PLATFORM_IMPL_WINDOWS_SCHEDULED_EXECUTOR_H_
