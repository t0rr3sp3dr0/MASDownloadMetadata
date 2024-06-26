//
//   Generated by https://github.com/blacktop/ipsw (Version: , BuildCommit: )
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.4, SDK: 14.4, Tool: ld (951.9)
//    - LC_SOURCE_VERSION: 714.4.9.0.0
//
#ifndef CKAccountObserver_h
#define CKAccountObserver_h

@import Foundation;

#include "CKAccountObserver-Protocol.h"

@interface CKAccountObserver : NSObject <CKAccountObserver>

@property (copy) id /* block */ primaryAccountChangeObserver;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)accountStore:(id)_store primaryAccountChanged:(id)_accountChanged;

@end

#endif /* CKAccountObserver_h */
