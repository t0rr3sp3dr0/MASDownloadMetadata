//
//   Generated by https://github.com/blacktop/ipsw (Version: , BuildCommit: )
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.4, SDK: 14.4, Tool: ld (951.9)
//    - LC_SOURCE_VERSION: 714.4.9.0.0
//
#ifndef ISUniqueOperationContext_h
#define ISUniqueOperationContext_h

@import Foundation;

@interface ISUniqueOperationContext : NSObject {
    /* instance variables */
    NSMutableSet *_operations;
    NSMutableDictionary *_uniqueOperations;
}

/* instance methods */
- (void)dealloc;
- (id)init;
- (void)addOperation:(id)_operation;
- (void)removeOperation:(id)_operation;
- (signed char)containsOperation:(id)_operation;
- (unsigned long long)countOfOperations;
- (void)setUniqueOperation:(id)_uniqueOperation forKey:(id)_key;
- (id)uniqueOperationForKey:(id)_operationForKey;

@end

#endif /* ISUniqueOperationContext_h */
