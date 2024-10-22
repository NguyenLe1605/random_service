#include <hidl/HidlSupport.h>
#include <hidl/HidlTransportSupport.h>
#include "RandomHidl.h"

using ::android::sp;
using ::android::hardware::configureRpcThreadpool;
using ::android::hardware::joinRpcThreadpool;
using ::vendor::hitachi::randomhidl::V1_0::IRandomHidl;
using ::vendor::hitachi::randomhidl::implementation::RandomHidl;

using namespace android;
int main() {
  configureRpcThreadpool(1, true);
  sp<IRandomHidl> randomHidl = new RandomHidl();
  status_t status = randomHidl->registerAsService("default");
  if (status != OK) {
    return status;
  }
  joinRpcThreadpool();
}