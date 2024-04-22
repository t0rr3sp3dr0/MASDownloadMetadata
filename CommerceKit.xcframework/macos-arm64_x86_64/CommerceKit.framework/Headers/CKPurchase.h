//
//   Generated by https://github.com/blacktop/ipsw (Version: , BuildCommit: )
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.4, SDK: 14.4, Tool: ld (951.9)
//    - LC_SOURCE_VERSION: 714.4.9.0.0
//
#ifndef CKPurchase_h
#define CKPurchase_h

@import Foundation;

#include "CKStoreClient.h"

@interface CKPurchase : NSObject <NSCopying, NSSecureCoding>

@property (readonly) CKStoreClient *storeClient;
@property (copy) NSString *forcedUsername;
@property (copy) NSString *bagURLKey;
@property (readonly) NSDictionary *buyParameters;

/* class methods */
+ (signed char)supportsSecureCoding;

/* instance methods */
- (id)copyWithZone:(struct _NSZone *)_zone;
- (void)encodeWithCoder:(id)_withCoder;
- (id)initWithCoder:(id)_coder;
- (id)_initWithLegacyPurchase:(id)_withLegacyPurchase storeClient:(id)_client;
- (id)initWithBuyParameters:(id)_buyParameters storeClient:(id)_client;
- (id)initWithBuyParametersString:(id)_buyParametersString storeClient:(id)_client;

@end

#endif /* CKPurchase_h */
