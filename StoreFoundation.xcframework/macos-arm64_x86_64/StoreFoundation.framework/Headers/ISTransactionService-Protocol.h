//
//   Generated by https://github.com/blacktop/ipsw (Version: , BuildCommit: )
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.4, SDK: 14.4, Tool: ld (951.9)
//    - LC_SOURCE_VERSION: 714.4.9.0.0
//
#ifndef ISTransactionService_Protocol_h
#define ISTransactionService_Protocol_h

#include "ISServiceRemoteObject-Protocol.h"

@protocol ISTransactionService <ISServiceRemoteObject>

@required

/* required instance methods */
- (void)itemLookup:(id)_lookup replyBlock:(id /* block */)_block;
- (void)performPurchase:(id)_purchase withBundleIDsToAdopt:(id)_bundleIDsToAdopt legacyAppsToGrant:(id)_appsToGrant withOptions:(unsigned long long)_options replyBlock:(id /* block */)_block;
- (void)performPurchases:(id)_purchases withBundleIDsToAdopt:(id)_bundleIDsToAdopt legacyAppsToGrant:(id)_appsToGrant withOptions:(unsigned long long)_options replyBlock:(id /* block */)_block;
- (void)purchaseInProgressForProductID:(id)_inProgressForProductID replyBlock:(id /* block */)_block;
- (void)setNeedsSilentMachineAuthorization:(signed char)_needsSilentMachineAuthorization;
- (void)dsidByAuthenticatingWithContext:(id)_context replyBlock:(id /* block */)_block;
- (void)explicitBookContentRestrictedNumberWithReplyBlock:(id /* block */)_bookContentRestrictedNumberWithReplyBlock;
- (void)needsSilentMachineAuthorizationWithReplyBlock:(id /* block */)_silentMachineAuthorizationWithReplyBlock;
- (void)processAskToBuyPermissionRequestWithURL:(id)_askToBuyPermissionRequestWithURL;
- (void)signURLRequest:(id)_urlrequest service:(id)_service usingSAPSessionID:(id)_sapsessionID withReplyBlock:(id /* block */)_replyBlock;
- (void)signedBodyWithURLResponse:(id)_bodyWithURLResponse service:(id)_service data:(id)_data usingSAPSessionID:(id)_sapsessionID withReplyBlock:(id /* block */)_replyBlock;
- (void)signedHeadersForURLRequest:(id)_headersForURLRequest service:(id)_service usingSAPSessionID:(id)_sapsessionID withReplyBlock:(id /* block */)_replyBlock;

@optional

@end

#endif /* ISTransactionService_Protocol_h */
