//
//   Generated by https://github.com/blacktop/ipsw (Version: , BuildCommit: )
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.4, SDK: 14.4, Tool: ld (951.9)
//    - LC_SOURCE_VERSION: 714.4.9.0.0
//
#ifndef CKStoreAccountPasswordSettings_h
#define CKStoreAccountPasswordSettings_h

@import Foundation;

@interface CKStoreAccountPasswordSettings : NSObject <NSCopying, NSSecureCoding>

@property (nonatomic) unsigned char paid;
@property (nonatomic) unsigned char free;

/* class methods */
+ (signed char)supportsSecureCoding;

/* instance methods */
- (id)copyWithZone:(struct _NSZone *)_zone;
- (signed char)isEqual:(id)_equal;
- (void)encodeWithCoder:(id)_withCoder;
- (id)initWithCoder:(id)_coder;

@end

#endif /* CKStoreAccountPasswordSettings_h */
