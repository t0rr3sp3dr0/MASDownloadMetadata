//
//   Generated by https://github.com/blacktop/ipsw (Version: , BuildCommit: )
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.4, SDK: 14.4, Tool: ld (951.9)
//    - LC_SOURCE_VERSION: 714.4.9.0.0
//
#ifndef ISDialogOperationDelegate_Protocol_h
#define ISDialogOperationDelegate_Protocol_h

#include "ISOperationDelegate-Protocol.h"

@protocol ISDialogOperationDelegate <ISOperationDelegate>

@required

@optional

/* optional instance methods */
- (void)operation:(id)_operation selectedButton:(id)_button;
- (signed char)showDialogInSeperateProcessForOperation:(id)_dialogInSeperateProcessForOperation;

@end

#endif /* ISDialogOperationDelegate_Protocol_h */
