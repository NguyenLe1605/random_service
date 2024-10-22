// FIXME: your file license if you have one

#pragma once

#include <vendor/hitachi/randomhidl/1.0/IRandomHidl.h>
#include <hidl/MQDescriptor.h>
#include <hidl/Status.h>

namespace vendor::hitachi::randomhidl::implementation {

using ::android::hardware::hidl_array;
using ::android::hardware::hidl_memory;
using ::android::hardware::hidl_string;
using ::android::hardware::hidl_vec;
using ::android::hardware::Return;
using ::android::hardware::Void;
using ::android::sp;

struct RandomHidl : public V1_0::IRandomHidl {
    // Methods from ::vendor::hitachi::randomhidl::V1_0::IRandomHidl follow.
    Return<void> generateRandomBytes(uint32_t length, generateRandomBytes_cb _hidl_cb) override;
    Return<::vendor::hitachi::randomhidl::V1_0::Result> updateEntropyBool(const hidl_string& nonce) override;
    Return<int32_t> getEntropy() override;

    // Methods from ::android::hidl::base::V1_0::IBase follow.
// private:
//     int fd;
};

// FIXME: most likely delete, this is only for passthrough implementations
// extern "C" IRandomHidl* HIDL_FETCH_IRandomHidl(const char* name);

}  // namespace vendor::hitachi::randomhidl::implementation
