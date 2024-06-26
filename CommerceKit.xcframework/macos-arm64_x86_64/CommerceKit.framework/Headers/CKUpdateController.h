//
//   Generated by https://github.com/blacktop/ipsw (Version: , BuildCommit: )
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.4, SDK: 14.4, Tool: ld (951.9)
//    - LC_SOURCE_VERSION: 714.4.9.0.0
//
#ifndef CKUpdateController_h
#define CKUpdateController_h

@import Foundation;

#include "CKServiceInterface.h"
#include "CKUpdateControllerClient.h"

@interface CKUpdateController : CKServiceInterface

@property signed char shouldNotAttemptInstallationAfterFailureDialog;
@property (retain, nonatomic) NSMutableDictionary *availableUpdatesObservers;
@property (retain, nonatomic) NSMutableDictionary *updateScanObservers;
@property (retain, nonatomic) NSMutableDictionary *updateProgressObservers;
@property (retain, nonatomic) CKUpdateControllerClient *sharedObserver;
@property (copy) id /* block */ dialogHandler;

/* class methods */
+ (id)sharedUpdateController;

/* instance methods */
- (id)init;
- (void)connectionWasInterrupted;
- (id)availableUpdates;
- (id)initWithStoreClient:(id)_storeClient;
- (void)removeAvailableUpdatesObserver:(id)_availableUpdatesObserver;
- (void)_checkForBookUpdatesWithCompletionHandler:(id /* block */)_forBookUpdatesWithCompletionHandler;
- (signed char)_otherUsersAreLoggedIn;
- (id)addAvailableUpdatesObserverWithBlock:(id /* block */)_availableUpdatesObserverWithBlock;
- (id)appUpdatesToBeInstalledLater;
- (id)availableUpdateWithItemIdentifier:(unsigned long long)_updateWithItemIdentifier;
- (unsigned long long)availableUpdatesBadgeCount;
- (void)checkForUpdatesWithUserHasSeenUpdates:(signed char)_forUpdatesWithUserHasSeenUpdates completionHandler:(id /* block */)_handler;
- (id)incompatibleUpdates;
- (void)installAllAvailableUpdates;
- (signed char)isAutoUpdatedEnabled;
- (id)observeOSUpdateProgressWithProgressHandler:(id /* block */)_osupdateProgressWithProgressHandler;
- (id)observeOSUpdateScansWithProgressHandler:(id /* block */)_osupdateScansWithProgressHandler;
- (signed char)osUpdateScanInProgress;
- (void)removeUpdateFromInstallLaterWithBundleID:(id)_updateFromInstallLaterWithBundleID;
- (void)startAppUpdates:(id)_appUpdates andOSUpdates:(id)_osupdates withDelegate:(id)_delegate completionHandler:(id /* block */)_handler;
- (void)stopObservingOSUpdateProgressWithCallback:(id)_callback;
- (void)stopObservingOSUpdateScansWithCallback:(id)_callback;

@end

#endif /* CKUpdateController_h */
