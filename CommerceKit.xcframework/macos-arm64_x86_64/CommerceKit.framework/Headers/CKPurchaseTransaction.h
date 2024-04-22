//
//   Generated by https://github.com/blacktop/ipsw (Version: , BuildCommit: )
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.4, SDK: 14.4, Tool: ld (951.9)
//    - LC_SOURCE_VERSION: 714.4.9.0.0
//
#ifndef CKPurchaseTransaction_h
#define CKPurchaseTransaction_h

@import Foundation;

#include "CKPurchaseResponse.h"
#include "CKStoreClient.h"

@interface CKPurchaseTransaction : NSObject <NSSecureCoding>

@property (copy) NSString *purchaseQueueIdentifier;
@property unsigned char state;
@property signed char authedToBuy;
@property (copy) NSDictionary *buyParameters;
@property (retain) CKStoreClient *storeClient;
@property (copy) NSString *originatingStorefront;
@property (retain) CKPurchaseResponse *response;
@property (retain) NSError *error;
@property signed char usePasswordFallback;
@property (retain) NSString *challenge;
@property (retain) NSString *signature;
@property (retain) NSString *publicKey;
@property (readonly) id transactionIdentifier;
@property (readonly) id groupIdentifier;
// @property (readonly) CKStoreClient *storeClient;
// @property (readonly) NSDictionary *buyParameters;
@property (readonly) NSString *bagURLKey;
@property (readonly) NSString *forcedUsername;
// @property (readonly) signed char authedToBuy;
// @property (readonly) unsigned char state;
// @property (readonly) CKPurchaseResponse *response;
// @property (readonly) NSError *error;

/* class methods */
+ (signed char)supportsSecureCoding;

/* instance methods */
- (id)description;
- (unsigned long long)hash;
- (signed char)isEqual:(id)_equal;
- (void)encodeWithCoder:(id)_withCoder;
- (id)initWithCoder:(id)_coder;
- (id)_initWithGroupIdentifier:(id)_withGroupIdentifier;
- (id)_initWithPurchase:(id)_withPurchase groupIdentifier:(id)_identifier;

@end

#endif /* CKPurchaseTransaction_h */