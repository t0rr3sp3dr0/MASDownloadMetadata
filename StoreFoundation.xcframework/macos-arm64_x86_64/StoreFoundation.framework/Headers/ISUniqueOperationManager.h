//
//   Generated by https://github.com/blacktop/ipsw (Version: , BuildCommit: )
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.4, SDK: 14.4, Tool: ld (951.9)
//    - LC_SOURCE_VERSION: 714.4.9.0.0
//
#ifndef ISUniqueOperationManager_h
#define ISUniqueOperationManager_h

@import Foundation;

#include "ISSingleton-Protocol.h"
#include "ISUniqueOperationContext.h"

@interface ISUniqueOperationManager : NSObject <ISSingleton> {
    /* instance variables */
    ISUniqueOperationContext *_activeContext;
    NSMutableArray *_contexts;
    NSLock *_lock;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)sharedInstance;
+ (void)setSharedInstance:(id)_sharedInstance;

/* instance methods */
- (void)dealloc;
- (id)init;
- (id)_activeContext;
- (void)uniqueOperationFinished:(id)_operationFinished forKey:(id)_key;
- (id)_contextForOperation:(id)_forOperation;
- (void)checkInOperation:(id)_inOperation;
- (void)checkOutOperation:(id)_outOperation;
- (id)predecessorForKey:(id)_forKey operation:(id)_operation;
- (void)setPredecessorIfNeeded:(id)_predecessorIfNeeded forKey:(id)_key;

@end

#endif /* ISUniqueOperationManager_h */
