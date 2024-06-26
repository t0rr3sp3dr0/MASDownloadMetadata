//
//   Generated by https://github.com/blacktop/ipsw (Version: , BuildCommit: )
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.4, SDK: 14.4, Tool: ld (951.9)
//    - LC_SOURCE_VERSION: 714.4.9.0.0
//
#ifndef SSPurchaseResponse_h
#define SSPurchaseResponse_h

@import Foundation;

@interface SSPurchaseResponse : NSObject <NSSecureCoding> {
    /* instance variables */
    NSDictionary *_rawResponse;
}

@property (retain) NSArray *downloads;
@property (retain) NSDictionary *metrics;

/* class methods */
+ (signed char)supportsSecureCoding;

/* instance methods */
- (void)encodeWithCoder:(id)_withCoder;
- (id)initWithCoder:(id)_coder;
- (id)_newDownloadsFromItems:(id)_items withDSID:(id)_dsid;
- (id)initWithDictionary:(id)_dictionary userIdentifier:(id)_identifier;

@end

#endif /* SSPurchaseResponse_h */
