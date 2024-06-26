//
//   Generated by https://github.com/blacktop/ipsw (Version: , BuildCommit: )
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.4, SDK: 14.4, Tool: ld (951.9)
//    - LC_SOURCE_VERSION: 714.4.9.0.0
//
#ifndef SSDownloadMetadata_h
#define SSDownloadMetadata_h

@import Foundation;

@interface SSDownloadMetadata : NSObject <NSSecureCoding, NSCopying> {
    /* instance variables */
    NSLock *_lock;
}

@property (retain) NSDictionary *dictionary;
@property (retain) NSString *downloadKey;
@property (retain) NSData *epubRightsData;
@property (retain) NSString *appleID;
@property (retain) NSString *fileExtension;
@property (retain) NSArray *sinfs;
@property (readonly) signed char extractionCanBeStreamed;
@property (readonly) NSNumber *uncompressedSize;
@property (readonly) NSString *bundleDisplayName;
@property (readonly) NSString *bundleShortVersionString;
@property (retain) NSString *ipaInstallPath;
@property (retain) NSData *ipaInstallBookmarkData;
@property (retain) NSString *genre;
@property unsigned long long itemIdentifier;
@property (retain) NSString *kind;
@property (retain) NSString *subtitle;
@property (retain) NSString *title;
@property (retain) NSURL *thumbnailImageURL;
@property (retain) NSString *transactionIdentifier;
@property signed char animationExpected;
@property (retain) NSString *productType;
@property (readonly) NSString *sortArtist;
@property (readonly) NSString *sortName;
@property (readonly) NSNumber *ageRestriction;
@property (retain) NSURL *preflightPackageURL;
@property (retain) NSString *buyParameters;
@property (readonly) NSString *purchaseDate;
@property (readonly) signed char isExplicitContents;
@property (retain) NSString *iapInstallPath;
@property (readonly) NSNumber *iapContentSize;
@property (readonly) NSString *iapContentVersion;
@property (readonly) NSNumber *collectionID;
@property (retain) NSString *collectionName;
@property (retain) NSNumber *durationInMilliseconds;
@property signed char rental;
@property (readonly) signed char sample;
@property (readonly) NSString *applicationIdentifier;
@property signed char artworkIsPrerendered;
@property (retain) NSString *bundleIdentifier;
@property (retain) NSString *bundleVersion;
@property (retain) NSNumber *version;
@property (readonly) signed char needsSoftwareInstallOperation;
@property signed char isMDMProvided;
@property (retain) NSString *managedAppUUIDString;
@property (readonly) NSArray *assets;

/* class methods */
+ (signed char)supportsSecureCoding;

/* instance methods */
- (id)copyWithZone:(struct _NSZone *)_zone;
- (id)init;
- (void)encodeWithCoder:(id)_withCoder;
- (id)initWithCoder:(id)_coder;
- (id)initWithDictionary:(id)_dictionary;
- (id)initWithKind:(id)_kind;
- (signed char)isRental;
- (id)localServerInfo;
- (id)_valueForFirstAvailableKey:(id)_forFirstAvailableKey;
- (id)deltaPackages;
- (signed char)isSample;
- (void)setValue:(id)_value forMetadataKey:(id)_metadataKey;

@end

#endif /* SSDownloadMetadata_h */
