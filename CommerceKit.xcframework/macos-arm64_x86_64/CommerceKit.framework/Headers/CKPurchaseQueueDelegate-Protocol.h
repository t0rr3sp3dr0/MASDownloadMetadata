//
//   Generated by https://github.com/blacktop/ipsw (Version: , BuildCommit: )
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.4, SDK: 14.4, Tool: ld (951.9)
//    - LC_SOURCE_VERSION: 714.4.9.0.0
//
#ifndef CKPurchaseQueueDelegate_Protocol_h
#define CKPurchaseQueueDelegate_Protocol_h

@import Foundation;

@protocol CKPurchaseQueueDelegate <NSObject>

@required

/* required instance methods */
- (id)purchaseQueue:(id)_queue dialogContextForTransaction:(id)_contextForTransaction;

@optional

/* optional instance methods */
- (signed char)purchaseQueue:(id)_queue shouldContinueTransaction:(id)_continueTransaction withNewStorefront:(id)_newStorefront;

@end

#endif /* CKPurchaseQueueDelegate_Protocol_h */
