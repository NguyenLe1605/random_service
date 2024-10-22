// FIXME: your file license if you have one

#include "RandomHidl.h"

namespace vendor::hitachi::randomhidl::implementation {

// Methods from ::vendor::hitachi::randomhidl::V1_0::IRandomHidl follow.
Return<void> RandomHidl::generateRandomBytes(uint32_t length, generateRandomBytes_cb _hidl_cb) {
    // TODO implement
    (void) length;
    (void) _hidl_cb;
    return Void();
}

Return<::vendor::hitachi::randomhidl::V1_0::Result> RandomHidl::updateEntropyBool(const hidl_string& nonce) {
    // TODO implement
    (void) nonce;
    return ::vendor::hitachi::randomhidl::V1_0::Result {};
}

Return<int32_t> RandomHidl::getEntropy() {
    // TODO implement
    return int32_t {};
}


// Methods from ::android::hidl::base::V1_0::IBase follow.

//IRandomHidl* HIDL_FETCH_IRandomHidl(const char* /* name */) {
    //return new RandomHidl();
//}
//
}  // namespace vendor::hitachi::randomhidl::implementation
