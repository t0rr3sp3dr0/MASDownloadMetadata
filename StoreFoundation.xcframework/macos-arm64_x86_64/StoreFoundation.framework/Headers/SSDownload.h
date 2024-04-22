//
//   Generated by https://github.com/blacktop/ipsw (Version: , BuildCommit: )
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.4, SDK: 14.4, Tool: ld (951.9)
//    - LC_SOURCE_VERSION: 714.4.9.0.0
//
#ifndef SSDownload_h
#define SSDownload_h

@import Foundation;

#include "SSDownloadMetadata.h"
#include "SSDownloadStatus.h"

@interface SSDownload : NSObject <NSSecureCoding> {
    /* instance variables */
    signed char _needsPreInstallValidation;
}

@property (copy, nonatomic) NSArray *assets;
@property (copy, nonatomic) SSDownloadMetadata *metadata;
@property (retain, nonatomic) SSDownloadStatus *status;
@property unsigned long long downloadType;
@property signed char needsDisplayInDock;
@property signed char isInServerQueue;
@property signed char installAfterLogout;
@property (copy) NSNumber *accountDSID;
@property (copy) NSString *cancelURLString;
@property (copy) NSString *customDownloadPath;
@property signed char skipInstallPhase;
@property signed char didAutoUpdate;
@property (copy) NSString *installPath;
@property (copy) NSURL *relaunchAppWithBundleURL;
@property signed char skipAssetDownloadIfNotAlreadyOnDisk;

/* class methods */
+ (signed char)supportsSecureCoding;

/* instance methods */
- (id)init;
- (signed char)isEqual:(id)_equal;
- (void)encodeWithCoder:(id)_withCoder;
- (id)initWithCoder:(id)_coder;
- (void)resume;
- (void)pause;
- (void)cancel;
- (void)cancelWithPrompt:(signed char)_withPrompt;
- (void)cancelWithPrompt:(signed char)_withPrompt storeClient:(id)_client;
- (void)cancelWithStoreClient:(id)_withStoreClient;
- (id)initWithAssets:(id)_assets metadata:(id)_metadata;
- (void)pauseWithStoreClient:(id)_withStoreClient;
- (id)primaryAsset;
- (void)resumeWithStoreClient:(id)_withStoreClient;
- (void)setUseUniqueDownloadFolder:(signed char)_useUniqueDownloadFolder;

@end

#endif /* SSDownload_h */