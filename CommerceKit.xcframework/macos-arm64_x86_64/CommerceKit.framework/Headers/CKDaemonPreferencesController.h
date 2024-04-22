//
//   Generated by https://github.com/blacktop/ipsw (Version: , BuildCommit: )
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.4, SDK: 14.4, Tool: ld (951.9)
//    - LC_SOURCE_VERSION: 714.4.9.0.0
//
#ifndef CKDaemonPreferencesController_h
#define CKDaemonPreferencesController_h

@import Foundation;

@interface CKDaemonPreferencesController : NSObject

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (void)postPreferencesChangedNotification;
- (void)_preferencesChanged:(id)_changed;
- (void)startObservingPreferenceChanges;
- (void)stopObservingPreferenceChanges;

@end

#endif /* CKDaemonPreferencesController_h */
