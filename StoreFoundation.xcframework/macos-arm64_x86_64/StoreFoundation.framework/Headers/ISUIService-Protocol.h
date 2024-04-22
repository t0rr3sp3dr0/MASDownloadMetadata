//
//   Generated by https://github.com/blacktop/ipsw (Version: , BuildCommit: )
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.4, SDK: 14.4, Tool: ld (951.9)
//    - LC_SOURCE_VERSION: 714.4.9.0.0
//
#ifndef ISUIService_Protocol_h
#define ISUIService_Protocol_h

#include "ASDNotificationCenterDialogObserver-Protocol.h"
#include "ISServiceRemoteObject-Protocol.h"

@protocol ISUIService <ISServiceRemoteObject, ASDNotificationCenterDialogObserver>

@required

/* required instance methods */
- (void)addDialogHost:(id)_dialogHost;
- (void)removeDialogHost:(id)_dialogHost;
- (void)dismissDialog:(id)_dialog withExitCode:(long long)_exitCode;
- (void)dismissGatekeeperProgressWindowForPath:(id)_gatekeeperProgressWindowForPath replyBlock:(id /* block */)_block;
- (void)displayDialog:(id)_dialog;
- (void)displayDialog:(id)_dialog withDelegate:(id)_delegate replyBlock:(id /* block */)_block;
- (void)displayFirmwareWarningWithTitle:(id)_firmwareWarningWithTitle content:(id)_content replyBlock:(id /* block */)_block;
- (void)displayGatekeeperProgressWindowForPath:(id)_gatekeeperProgressWindowForPath replyBlock:(id /* block */)_block;
- (void)displayLicenseAgreementWithTitle:(id)_licenseAgreementWithTitle content:(id)_content replyBlock:(id /* block */)_block;
- (void)updateGatekeeperProgressWindowForPath:(id)_gatekeeperProgressWindowForPath percentComplete:(float)_complete replyBlock:(id /* block */)_block;

@optional

@end

#endif /* ISUIService_Protocol_h */