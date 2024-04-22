//
//   Generated by https://github.com/blacktop/ipsw (Version: , BuildCommit: )
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.4, SDK: 14.4, Tool: ld (951.9)
//    - LC_SOURCE_VERSION: 714.4.9.0.0
//
#ifndef ISStoreClient_h
#define ISStoreClient_h

@import Foundation;

#include "ISStoreAccount.h"

@interface ISStoreClient : NSObject <NSSecureCoding>

@property unsigned long long frameworkVersion;
@property (copy) NSString *identifier;
@property long long clientType;
@property (readonly) NSString *mediaType;
@property (copy) ISStoreAccount *primaryAccount;
@property (copy) NSString *userAgentAppName;
@property (copy) NSString *userAgentAppVersion;
@property (copy) NSString *agentPreferencesDomain;
@property (copy) NSString *appPreferencesDomain;
@property (copy) NSString *storeFrontBagKey;
@property (copy) NSArray *productionBagURLs;
@property (copy) NSArray *sandboxBagURLs;
@property (copy) NSString *toolbarBagKey;
@property long long requiredBagType;
@property (copy) NSString *aslDomain;
@property signed char _alwaysUseSandboxEnvironment;
@property (copy) NSString *storeURLScheme;
@property (copy) NSString *storeSecureURLScheme;
@property (copy) NSString *tempPathClientIdentifier;
@property long long mediaTypeMask;
@property (copy) NSString *pushServiceName;
@property (copy) NSString *appPath;
@property (copy) NSDictionary *daap;
@property (copy) NSString *displayUIHostID;
@property (readonly) int pid;
@property (copy) NSString *agentListenerName;
@property signed char isDaemon;

/* class methods */
+ (signed char)supportsSecureCoding;
+ (id)knownClientWithIdentifier:(id)_clientWithIdentifier frameworkVersion:(id)_version;

/* instance methods */
- (id)init;
- (void)encodeWithCoder:(id)_withCoder;
- (id)initWithCoder:(id)_coder;
- (id)initWithStoreClientType:(long long)_storeClientType;
- (void)_cacheKnownClient:(id)_knownClient;
- (void)_setAlwaysUseSandboxEnvironment:(signed char)_alwaysUseSandboxEnvironment;
- (id)callerIdentity;
- (id)initWithApplicationPath:(id)_applicationPath;
- (signed char)isEqualToStoreClient:(id)_equalToStoreClient;

@end

#endif /* ISStoreClient_h */