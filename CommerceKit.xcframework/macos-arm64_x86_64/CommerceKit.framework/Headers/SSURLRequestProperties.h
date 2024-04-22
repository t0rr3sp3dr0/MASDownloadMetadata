//
//   Generated by https://github.com/blacktop/ipsw (Version: , BuildCommit: )
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.4, SDK: 14.4, Tool: ld (951.9)
//    - LC_SOURCE_VERSION: 714.4.9.0.0
//
#ifndef SSURLRequestProperties_h
#define SSURLRequestProperties_h

@import Foundation;

@interface SSURLRequestProperties : NSObject <NSCoding, NSCopying, NSMutableCopying> {
    /* instance variables */
    NSData *_httpBody;
    NSDictionary *_httpHeaders;
    NSString *_httpMethod;
    signed char _isITunesStoreRequest;
    NSString *_urlBagKey;
    NSURL *_url;
}

@property (readonly) long long allowedRetryCount;
@property (readonly, copy) NSString *clientIdentifier;
@property (readonly) unsigned long long cachePolicy;
@property (readonly, copy) NSData *HTTPBody;
@property (readonly, copy) NSDictionary *HTTPHeaders;
@property (readonly, copy) NSString *HTTPMethod;
@property (readonly) signed char ITunesStoreRequest;
@property (readonly, copy) NSDictionary *requestParameters;
@property (readonly) double timeoutInterval;
@property (readonly, copy) NSString *URLBagKey;
@property (readonly) NSURL *URL;

/* instance methods */
- (id)copyWithZone:(struct _NSZone *)_zone;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone *)_copyWithZone;
- (void)encodeWithCoder:(id)_withCoder;
- (id)initWithCoder:(id)_coder;
- (id)_initCommon;
- (signed char)isITunesStoreRequest;
- (id)copyURLRequest;
- (id)initWithURLRequest:(id)_urlrequest;

@end

#endif /* SSURLRequestProperties_h */