//
//   Generated by https://github.com/blacktop/ipsw (Version: , BuildCommit: )
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.4, SDK: 14.4, Tool: ld (951.9)
//    - LC_SOURCE_VERSION: 714.4.9.0.0
//
#ifndef CKDownloadAsset_h
#define CKDownloadAsset_h

@import Foundation;

@interface CKDownloadAsset : NSObject <NSCopying, NSSecureCoding>

@property (copy) NSString *downloadKey;
@property (copy) NSString *md5;
@property (retain) NSString *appliesToVersionIdentifier;
@property (retain) NSArray *sinfs;
@property (readonly) signed char needsDecryption;
@property unsigned long long chunkSize;
@property (retain) NSArray *hashes;
@property (retain) NSArray *clearHashes;
@property (readonly) NSURL *URL;

/* class methods */
+ (signed char)supportsSecureCoding;

/* instance methods */
- (id)copyWithZone:(struct _NSZone *)_zone;
- (void)encodeWithCoder:(id)_withCoder;
- (id)initWithCoder:(id)_coder;
- (id)_initWithURL:(id)_withURL;

@end

#endif /* CKDownloadAsset_h */
