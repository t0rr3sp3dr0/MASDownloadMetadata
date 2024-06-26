//
//   Generated by https://github.com/blacktop/ipsw (Version: , BuildCommit: )
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.4, SDK: 14.4, Tool: ld (951.9)
//    - LC_SOURCE_VERSION: 714.4.9.0.0
//
#ifndef ISServiceRemoteObject_Protocol_h
#define ISServiceRemoteObject_Protocol_h

@import Foundation;

@protocol ISServiceRemoteObject <NSObject>

@required

/* required instance methods */
- (void)startService;
- (void)setStoreClient:(id)_storeClient;

@optional

@end

#endif /* ISServiceRemoteObject_Protocol_h */
