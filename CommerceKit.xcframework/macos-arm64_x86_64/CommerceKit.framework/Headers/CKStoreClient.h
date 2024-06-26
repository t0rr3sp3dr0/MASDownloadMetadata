//
//   Generated by https://github.com/blacktop/ipsw (Version: , BuildCommit: )
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.4, SDK: 14.4, Tool: ld (951.9)
//    - LC_SOURCE_VERSION: 714.4.9.0.0
//
#ifndef CKStoreClient_h
#define CKStoreClient_h

@import Foundation;

#include "CKStoreAccount.h"

@interface CKStoreClient : NSObject <NSCopying, NSSecureCoding>

@property (readonly, nonatomic) NSString *_appName;
@property (readonly, nonatomic) NSString *_appVersion;
@property (readonly, nonatomic) NSString *_preferencesDomain;
@property (readonly, nonatomic) NSString *accountMediaType;
@property (readonly, nonatomic) NSString *clientIdentifier;
@property (readonly, nonatomic) long long serverType;
@property (readonly, nonatomic) NSString *storefrontIdentifier;
@property (readonly, nonatomic) CKStoreAccount *account;
@property (readonly) NSString *storeURLScheme;
@property (readonly) NSString *storeSecureURLScheme;

/* class methods */
+ (id)sharedInstance;
+ (signed char)supportsSecureCoding;
+ (id)_serviceProxy;
+ (id)storeClientForIdentifier:(id)_clientForIdentifier;
+ (id)_sharedClient;
+ (void)configureClientAsType:(long long)_clientAsType;
+ (id)storeFrontID;
+ (void)setStoreFrontID:(id)_storeFrontID;
+ (void)_configureSharedClientWithIdentifier:(id)_sharedClientWithIdentifier;
+ (void)_configureSharedClientWithIdentifier:(id)_sharedClientWithIdentifier serverType:(long long)_type;
+ (id)_storeClientForAccountMediaType:(id)_clientForAccountMediaType;
+ (id)_storeClientFromLegacyStoreClient:(id)_clientFromLegacyStoreClient;
+ (signed char)isAppStoreClient;
+ (signed char)isBookStoreClient;
+ (id)storeClientForAccount:(id)_clientForAccount;
+ (id)storeClientForIdentifier:(id)_clientForIdentifier serverType:(long long)_type;

/* instance methods */
- (id)copyWithZone:(struct _NSZone *)_zone;
- (id)description;
- (unsigned long long)hash;
- (signed char)isEqual:(id)_equal;
- (void)encodeWithCoder:(id)_withCoder;
- (id)initWithCoder:(id)_coder;
- (id)_icon;
- (id)initWithAccount:(id)_account;
- (id)initWithClientIdentifier:(id)_clientIdentifier;
- (id)_acAccount;
- (id)_bagDictionary;
- (id)_ams_createBagContract;
- (id)_legacyStoreClient;
- (void)_setStoreFrontIdentifier:(id)_storeFrontIdentifier;
- (id)bagURLForKey:(id)_key error:(out id *)_error;
- (void)bagURLForKey:(id)_key withCompletionHandler:(id /* block */)_completionHandler;
- (id)bagValueForKey:(id)_key error:(out id *)_error;
- (void)bagValueForKey:(id)_key withCompletionHandler:(id /* block */)_completionHandler;
- (id)bagValuesForKeys:(id)_keys error:(id *)_error;
- (void)bagValuesForKeys:(id)_keys withCompletionHandler:(id /* block */)_completionHandler;
- (id)initWithClientIdentifier:(id)_clientIdentifier serverType:(long long)_type;
- (id)nonpersonalizedStoreClient;

@end

#endif /* CKStoreClient_h */
