//
//   Generated by https://github.com/blacktop/ipsw (Version: , BuildCommit: )
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.4, SDK: 14.4, Tool: ld (951.9)
//    - LC_SOURCE_VERSION: 714.4.9.0.0
//
#ifndef CKDAAPPurchaseHistory_h
#define CKDAAPPurchaseHistory_h

@import Foundation;

#include "CKStoreDAAPLibrary.h"
#include "CKStoreDAAPLibraryObserver-Protocol.h"

@interface CKDAAPPurchaseHistory : NSObject <CKStoreDAAPLibraryObserver>

@property (readonly) CKStoreDAAPLibrary *library;
@property (retain) NSMutableDictionary *observers;
@property (retain) id token;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)removeObserver:(id)_observer;
- (id)addObserver:(id)_observer;
- (id)initWithStoreClient:(id)_storeClient;
- (void)pollForPurchasedItems:(signed char)_forPurchasedItems;
- (id)purchasedItems;
- (id)_purchaseFromDAAPItem:(id)_fromDAAPItem;
- (void)storeDAAPLibrary:(id)_daaplibrary addedItems:(id)_items removedItems:(id)_items;

@end

#endif /* CKDAAPPurchaseHistory_h */