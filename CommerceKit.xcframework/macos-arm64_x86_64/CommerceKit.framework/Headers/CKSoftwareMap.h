//
//   Generated by https://github.com/blacktop/ipsw (Version: , BuildCommit: )
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.4, SDK: 14.4, Tool: ld (951.9)
//    - LC_SOURCE_VERSION: 714.4.9.0.0
//
#ifndef CKSoftwareMap_h
#define CKSoftwareMap_h

@import Foundation;

#include "CKServiceInterface.h"
#include "CKSoftwareMapObserver.h"

@interface CKSoftwareMap : CKServiceInterface

@property (retain, nonatomic) NSMutableDictionary *productsObservers;
@property (retain, nonatomic) CKSoftwareMapObserver *sharedObserver;

/* class methods */
+ (id)sharedSoftwareMap;

/* instance methods */
- (void)connectionWasInterrupted;
- (id)initWithStoreClient:(id)_storeClient;
- (id)receiptFromBundleAtPath:(id)_fromBundleAtPath;
- (void)removeProductsObserverForToken:(id)_productsObserverForToken;
- (id)productForPath:(id)_forPath;
- (id)addProductsObserver:(id /* block */)_productsObserver queue:(id)_queue;
- (id)adopt:(id)_adopt;
- (id)adoptableBundleIdentifiers;
- (signed char)adoptionCompletedForBundleID:(id)_completedForBundleID adoptingDSID:(out id *)_dsid appleID:(out id *)_id;
- (id)allProducts;
- (id)bundleInfoFromBundleAtPath:(id)_infoFromBundleAtPath;
- (id)iconForApplicationWithBundeID:(id)_bundeID;
- (signed char)isTrialVersionOfBundleIdentifier:(id)_bundleIdentifier;
- (id)productForBundleIdentifier:(id)_forBundleIdentifier;
- (id)productForItemIdentifier:(unsigned long long)_forItemIdentifier;
- (void)startAdoptionEligibilityCheckWithReplyBlock:(id /* block */)_adoptionEligibilityCheckWithReplyBlock;
- (id)updateRequestBodyData:(char *)_requestBodyData includeInstalledApps:(signed char)_installedApps includeBundledApps:(signed char)_bundledApps conditionally:(signed char)_conditionally hadUnadoptedApps:(out char *)_unadoptedApps;

@end

#endif /* CKSoftwareMap_h */
