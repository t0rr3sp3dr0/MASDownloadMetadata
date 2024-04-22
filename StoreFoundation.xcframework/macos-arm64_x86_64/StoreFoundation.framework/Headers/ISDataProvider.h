//
//   Generated by https://github.com/blacktop/ipsw (Version: , BuildCommit: )
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.4, SDK: 14.4, Tool: ld (951.9)
//    - LC_SOURCE_VERSION: 714.4.9.0.0
//
#ifndef ISDataProvider_h
#define ISDataProvider_h

@import Foundation;

#include "ISAuthenticationContext.h"
#include "ISStoreClient.h"

@interface ISDataProvider : NSObject <NSCopying>

@property (readonly) ISStoreClient *storeClient;
@property (retain) ISAuthenticationContext *authenticationContext;
@property int bagType;
@property long long contentLength;
@property (retain) NSString *contentType;
@property (readonly) signed char stream;
@property (readonly) long long streamedBytes;
@property (retain) NSNumber *authenticatedAccountDSID;
@property (retain) id output;
@property (retain) NSURL *redirectURL;

/* class methods */
+ (id)provider;
+ (id)providerWithStoreClient:(id)_withStoreClient;

/* instance methods */
- (id)copyWithZone:(struct _NSZone *)_zone;
- (id)init;
- (void)setup;
- (id)initWithStoreClient:(id)_storeClient;
- (void)closeStreamReturningError:(id *)_streamReturningError;
- (void)configureFromProvider:(id)_fromProvider;
- (signed char)isStream;
- (void)migrateOutputFromSubProvider:(id)_outputFromSubProvider;
- (signed char)parseData:(id)_data returningError:(id *)_error;
- (void)resetStream;

@end

#endif /* ISDataProvider_h */
