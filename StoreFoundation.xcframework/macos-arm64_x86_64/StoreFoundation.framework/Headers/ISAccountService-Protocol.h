//
//   Generated by https://github.com/blacktop/ipsw (Version: , BuildCommit: )
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.4, SDK: 14.4, Tool: ld (951.9)
//    - LC_SOURCE_VERSION: 714.4.9.0.0
//
#ifndef ISAccountService_Protocol_h
#define ISAccountService_Protocol_h

#include "ISServiceRemoteObject-Protocol.h"

@protocol ISAccountService <ISServiceRemoteObject>

@required

/* required instance methods */
- (void)addAccount:(id)_account;
- (void)setStoreFrontID:(id)_storeFrontID;
- (void)signOut;
- (void)loadURLBagWithType:(unsigned long long)_type replyBlock:(id /* block */)_block;
- (void)valueForURLBagKey:(id)_forURLBagKey dsID:(id)_id withReplyBlock:(id /* block */)_replyBlock;
- (void)accountWithAppleID:(id)_withAppleID replyBlock:(id /* block */)_block;
- (void)accountWithDSID:(id)_withDSID replyBlock:(id /* block */)_block;
- (void)addAccountStoreObserver:(id)_accountStoreObserver;
- (void)addURLBagObserver:(id)_urlbagObserver;
- (void)authIsExpiredWithReplyBlock:(id /* block */)_replyBlock;
- (void)dictionaryForDSID:(id)_forDSID withReplyBlock:(id /* block */)_replyBlock;
- (void)dictionaryWithReplyBlock:(id /* block */)_withReplyBlock;
- (void)generateTouchIDHeadersForDSID:(id)_touchIDHeadersForDSID challenge:(id)_challenge caller:(id)_caller replyBlock:(id /* block */)_block;
- (void)getTouchIDPreferenceWithReplyBlock:(id /* block */)_touchIDPreferenceWithReplyBlock;
- (void)httpHeadersForURL:(id)_headersForURL forDSID:(id)_dsid includeADIHeaders:(signed char)_adiheaders withReplyBlock:(id /* block */)_replyBlock;
- (void)iCloudDSIDReplyBlock:(id /* block */)_cloudDSIDReplyBlock;
- (void)invalidateAllBags;
- (void)isValidWithReplyBlock:(id /* block */)_validWithReplyBlock;
- (void)needsSilentADIActionForURL:(id)_silentADIActionForURL dsID:(id)_id withReplyBlock:(id /* block */)_replyBlock;
- (void)needsSilentADIActionForURL:(id)_silentADIActionForURL withReplyBlock:(id /* block */)_replyBlock;
- (void)primaryAccountWithReplyBlock:(id /* block */)_accountWithReplyBlock;
- (void)processURLResponse:(id)_urlresponse forRequest:(id)_request;
- (void)processURLResponse:(id)_urlresponse forRequest:(id)_request dsID:(id)_id;
- (void)regexWithKey:(id)_withKey dsID:(id)_id matchesString:(id)_string replyBlock:(id /* block */)_block;
- (void)regexWithKey:(id)_withKey matchesString:(id)_string replyBlock:(id /* block */)_block;
- (void)removeAccountStoreObserver:(id)_accountStoreObserver;
- (void)removeURLBagObserver:(id)_urlbagObserver;
- (void)retailStoreDemoModeReplyBlock:(id /* block */)_storeDemoModeReplyBlock;
- (void)setTouchIDState:(long long)_touchIDState forDSID:(id)_dsid replyBlock:(id /* block */)_block;
- (void)shouldSendGUIDWithRequestForURL:(id)_sendGUIDWithRequestForURL withReplyBlock:(id /* block */)_replyBlock;
- (void)storeFrontWithReplyBlock:(id /* block */)_frontWithReplyBlock;
- (void)updateTouchIDSettingsForDSID:(id)_touchIDSettingsForDSID replyBlock:(id /* block */)_block;
- (void)urlIsTrustedByURLBag:(id)_isTrustedByURLBag dsID:(id)_id withReplyBlock:(id /* block */)_replyBlock;
- (void)urlIsTrustedByURLBag:(id)_isTrustedByURLBag withReplyBlock:(id /* block */)_replyBlock;
- (void)valueForURLBagKey:(id)_forURLBagKey withReplyBlock:(id /* block */)_replyBlock;

@optional

@end

#endif /* ISAccountService_Protocol_h */
