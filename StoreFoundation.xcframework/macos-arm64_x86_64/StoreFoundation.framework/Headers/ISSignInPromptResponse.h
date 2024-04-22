//
//   Generated by https://github.com/blacktop/ipsw (Version: , BuildCommit: )
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.4, SDK: 14.4, Tool: ld (951.9)
//    - LC_SOURCE_VERSION: 714.4.9.0.0
//
#ifndef ISSignInPromptResponse_h
#define ISSignInPromptResponse_h

@import Foundation;

@interface ISSignInPromptResponse : NSObject <NSSecureCoding>

@property long long returnCode;
@property (retain) NSString *username;
@property (retain) NSString *password;
@property (retain) NSNumber *suppressionCheckboxState;
@property (retain) NSDictionary *serverResponse;

/* class methods */
+ (signed char)supportsSecureCoding;

/* instance methods */
- (id)description;
- (void)encodeWithCoder:(id)_withCoder;
- (id)initWithCoder:(id)_coder;

@end

#endif /* ISSignInPromptResponse_h */
