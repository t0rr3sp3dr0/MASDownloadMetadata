//
//   Generated by https://github.com/blacktop/ipsw (Version: , BuildCommit: )
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.4, SDK: 14.4, Tool: ld (951.9)
//    - LC_SOURCE_VERSION: 714.4.9.0.0
//
#ifndef NSError_Authentication_h
#define NSError_Authentication_h

@interface NSError (Authentication)

/* class methods */
+ (id)tooBigForDiskErrorWithCount:(long long)_diskErrorWithCount;

/* instance methods */
- (id)errorBySettingFatalError:(signed char)_bySettingFatalError;
- (id)errorBySettingValue:(id)_bySettingValue forUserInfoKey:(id)_userInfoKey;
- (signed char)isEqual:(id)_equal compareUserInfo:(signed char)_userInfo;
- (signed char)isFatalError;
- (signed char)shouldOfferRetryForAuthentication;

@end

#endif /* NSError_Authentication_h */
