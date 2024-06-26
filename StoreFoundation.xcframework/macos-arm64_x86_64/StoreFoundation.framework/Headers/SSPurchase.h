//
//   Generated by https://github.com/blacktop/ipsw (Version: , BuildCommit: )
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.4, SDK: 14.4, Tool: ld (951.9)
//    - LC_SOURCE_VERSION: 714.4.9.0.0
//
#ifndef SSPurchase_h
#define SSPurchase_h

@import Foundation;

#include "ISOperation.h"
#include "SSDownloadMetadata.h"

@interface SSPurchase : NSObject <NSSecureCoding, NSCopying>

@property (readonly, nonatomic) NSString *uniqueIdentifier;
@property (nonatomic) long long purchaseType;
@property signed char isDSIDLessPurchase;
@property (retain) NSDictionary *dsidLessOptions;
@property (copy, nonatomic) NSString *buyParameters;
@property (copy, nonatomic) SSDownloadMetadata *downloadMetadata;
@property (retain, nonatomic) NSNumber *accountIdentifier;
@property (retain, nonatomic) NSString *appleID;
@property (readonly, nonatomic) NSString *sortableAccountIdentifier;
@property signed char isRecoveryPurchase;
@property signed char isUpdate;
@property signed char isRedownload;
@property signed char isVPP;
@property (retain, nonatomic) NSString *managedAppUUIDString;
@property (retain, nonatomic) NSData *receiptData;
@property (retain, nonatomic) NSString *parentalControls;
@property signed char checkPreflightAterPurchase;
@property signed char shouldBeInstalledAfterLogout;
@property (readonly) signed char needsAuthentication;
@property unsigned long long itemIdentifier;
@property (copy) id /* block */ authFallbackHandler;
@property signed char isCancelled;
@property (weak) ISOperation *purchaseOperation;
@property (copy) NSDictionary *responseDialog;

/* class methods */
+ (signed char)supportsSecureCoding;
+ (id)purchaseWithBuyParameters:(id)_withBuyParameters;
+ (id)purchasesGroupedByAccountIdentifierWithPurchases:(id)_groupedByAccountIdentifierWithPurchases;

/* instance methods */
- (id)copyWithZone:(struct _NSZone *)_zone;
- (id)description;
- (void)encodeWithCoder:(id)_withCoder;
- (id)initWithCoder:(id)_coder;
- (id)productID;
- (id)_sortableAccountIdentifier;
- (signed char)purchaseDSIDMatchesPrimaryAccount;

@end

#endif /* SSPurchase_h */
