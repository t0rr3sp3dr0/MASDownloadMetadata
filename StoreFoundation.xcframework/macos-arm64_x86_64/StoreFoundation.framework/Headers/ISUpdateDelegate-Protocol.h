//
//   Generated by https://github.com/blacktop/ipsw (Version: , BuildCommit: )
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.4, SDK: 14.4, Tool: ld (951.9)
//    - LC_SOURCE_VERSION: 714.4.9.0.0
//
#ifndef ISUpdateDelegate_Protocol_h
#define ISUpdateDelegate_Protocol_h

@protocol ISUpdateDelegate

@required

/* required instance methods */
- (void)appUpdate:(id)_update finishedPurchaseWithSuccess:(signed char)_purchaseWithSuccess error:(id)_error response:(id)_response;

@optional

@end

#endif /* ISUpdateDelegate_Protocol_h */
