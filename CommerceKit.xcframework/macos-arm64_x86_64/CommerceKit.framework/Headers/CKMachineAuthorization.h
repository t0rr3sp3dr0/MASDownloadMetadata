//
//   Generated by https://github.com/blacktop/ipsw (Version: , BuildCommit: )
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.4, SDK: 14.4, Tool: ld (951.9)
//    - LC_SOURCE_VERSION: 714.4.9.0.0
//
#ifndef CKMachineAuthorization_h
#define CKMachineAuthorization_h

#include "CKServiceInterface.h"

@interface CKMachineAuthorization : CKServiceInterface

/* class methods */
+ (id)sharedMachineAuthorization;

/* instance methods */
- (void)authorizeMachineWithAppleID:(id)_machineWithAppleID completionHandler:(id /* block */)_handler;
- (void)deauthorizeMachineWithCompletionHandler:(id /* block */)_machineWithCompletionHandler;

@end

#endif /* CKMachineAuthorization_h */
