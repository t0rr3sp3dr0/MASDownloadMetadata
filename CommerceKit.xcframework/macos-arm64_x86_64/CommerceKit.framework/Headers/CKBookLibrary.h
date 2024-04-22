//
//   Generated by https://github.com/blacktop/ipsw (Version: , BuildCommit: )
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.4, SDK: 14.4, Tool: ld (951.9)
//    - LC_SOURCE_VERSION: 714.4.9.0.0
//
#ifndef CKBookLibrary_h
#define CKBookLibrary_h

@import Foundation;

#include "CKStoreDAAPLibrary.h"
#include "CKStoreDAAPLibraryObserver-Protocol.h"

@protocol CKBookLibraryDelegate;

@interface CKBookLibrary : NSObject <CKStoreDAAPLibraryObserver>

@property (readonly) CKStoreDAAPLibrary *library;
@property (retain) NSMutableDictionary *observers;
@property (retain) id token;
@property (readonly) long long libraryType;
@property (copy) NSArray *sortDescriptors;
@property (copy) NSPredicate *searchPredicate;
@property (weak, nonatomic) id <CKBookLibraryDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)_sharedDAAPLibrary;
+ (id)authorSortDescriptors;
+ (id)categorySortDescriptors;
+ (signed char)hasSampleWithItemIdentifier:(id)_sampleWithItemIdentifier returningMetadata:(id *)_metadata;
+ (id)shelfSortDescriptors;
+ (id)titleSortDescriptors;

/* instance methods */
- (void)removeObserver:(id)_observer;
- (id)addObserver:(id)_observer;
- (id)booksAtIndexes:(id)_atIndexes;
- (id)_bookFromDAAPItem:(id)_fromDAAPItem;
- (id)_filteredAndSortedLocalItems;
- (id)_filteredAndSortedPurchasedItems;
- (id)_localBooks;
- (id)bookWithItemIdentifier:(unsigned long long)_itemIdentifier;
- (unsigned long long)countOfBooks;
- (id)initWithLibraryType:(long long)_libraryType;
- (id)objectInBooksAtIndex:(unsigned long long)_inBooksAtIndex;
- (void)pollForPurchasedBooks;
- (void)storeDAAPLibrary:(id)_daaplibrary addedItems:(id)_items removedItems:(id)_items;

@end

#endif /* CKBookLibrary_h */