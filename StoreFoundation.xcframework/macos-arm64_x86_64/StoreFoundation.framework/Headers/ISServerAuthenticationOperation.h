//
//   Generated by https://github.com/blacktop/ipsw (Version: , BuildCommit: )
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.4, SDK: 14.4, Tool: ld (951.9)
//    - LC_SOURCE_VERSION: 714.4.9.0.0
//
#ifndef ISServerAuthenticationOperation_h
#define ISServerAuthenticationOperation_h

@import Foundation;

#include "ISAuthenticationContext.h"
#include "ISDialog.h"
#include "ISDialogOperationDelegate-Protocol.h"
#include "ISOperation.h"

@interface ISServerAuthenticationOperation : ISOperation

@property (retain) NSNumber *authenticatedAccountDSID;
@property (retain) NSURL *redirectURL;
@property (weak) id <ISDialogOperationDelegate> delegate;
@property (retain) ISAuthenticationContext *authenticationContext;
@property (readonly) ISDialog *dialog;

/* class methods */
+ (id)operationWithDialog:(id)_withDialog storeClient:(id)_client;

/* instance methods */
- (void)run;
- (id)_authenticationContext;
- (id)_authentciateReturningError:(id *)_returningError;
- (signed char)_handleSelectedButton:(id)_selectedButton;
- (void)_sendClientToURL:(id)_clientToURL;
- (signed char)_shouldAuthenticateForButton:(id)_authenticateForButton;
- (id)initWithDialog:(id)_dialog storeClient:(id)_client;

@end

#endif /* ISServerAuthenticationOperation_h */