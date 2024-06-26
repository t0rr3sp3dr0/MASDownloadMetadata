//
//   Generated by https://github.com/blacktop/ipsw (Version: , BuildCommit: )
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.4, SDK: 14.4, Tool: ld (951.9)
//    - LC_SOURCE_VERSION: 714.4.9.0.0
//
#ifndef ISAssetService_Protocol_h
#define ISAssetService_Protocol_h

#include "ISServiceRemoteObject-Protocol.h"

@protocol ISAssetService <ISServiceRemoteObject>

@required

/* required instance methods */
- (void)removeAvailableUpdatesObserver:(id)_availableUpdatesObserver;
- (void)availableUpdatesWithReplyBlock:(id /* block */)_updatesWithReplyBlock;
- (void)addAvailableUpdatesObserver:(id)_availableUpdatesObserver;
- (void)addOSUpdateProgressObserver:(id)_osupdateProgressObserver;
- (void)addOSUpdateScanObserver:(id)_osupdateScanObserver;
- (void)addSoftwareMapObserver:(id)_softwareMapObserver reply:(id /* block */)_reply;
- (void)adoptBundleIDsWithInfo:(id)_bundleIDsWithInfo replyBlock:(id /* block */)_block;
- (void)adoptableBundleIdentifiersWithReplyBlock:(id /* block */)_bundleIdentifiersWithReplyBlock;
- (void)adoptionCompletedForBundleIDWithInfo:(id)_completedForBundleIDWithInfo replyBlock:(id /* block */)_block;
- (void)adoptionEligibilityResponseWithReplyBlock:(id /* block */)_eligibilityResponseWithReplyBlock;
- (void)allProductsWithReplyBlock:(id /* block */)_productsWithReplyBlock;
- (void)appUpdatesToInstallLaterWithReplyBlock:(id /* block */)_updatesToInstallLaterWithReplyBlock;
- (void)availableUpdateWithItemIdentifier:(unsigned long long)_updateWithItemIdentifier replyBlock:(id /* block */)_block;
- (void)availableUpdatesBadgeCountWithReplyBlock:(id /* block */)_updatesBadgeCountWithReplyBlock;
- (void)bundleInfoFromBundleAtPath:(id)_infoFromBundleAtPath replyBlock:(id /* block */)_block;
- (void)checkForUpdatesWithUserHasSeenUpdates:(signed char)_forUpdatesWithUserHasSeenUpdates replyBlock:(id /* block */)_block;
- (void)createSoftwareProductForAppAtPath:(id)_softwareProductForAppAtPath replyBlock:(id /* block */)_block;
- (void)hasSampleWithItemIdentifier:(id)_sampleWithItemIdentifier replyBlock:(id /* block */)_block;
- (void)httpPostBodyWithInstalledApps:(signed char)_installedApps bundledApps:(signed char)_apps conditionally:(signed char)_conditionally replyBlock:(id /* block */)_block;
- (void)iconForApplicationWithBundeID:(id)_bundeID replyBlock:(id /* block */)_block;
- (void)incompatibleUpdatesWithReplyBlock:(id /* block */)_updatesWithReplyBlock;
- (void)isAutoUpdateEnabledWithReplyBlock:(id /* block */)_autoUpdateEnabledWithReplyBlock;
- (void)isTrialVersionOfBundleIdentifier:(id)_bundleIdentifier replyBlock:(id /* block */)_block;
- (void)localBookWithIdentifier:(id)_bookWithIdentifier reply:(id /* block */)_reply;
- (void)localBooksWithReply:(id /* block */)_booksWithReply;
- (void)osUpdateScanInProgressWithReplyBlock:(id /* block */)_updateScanInProgressWithReplyBlock;
- (void)productForBundleIdentifier:(id)_forBundleIdentifier replyBlock:(id /* block */)_block;
- (void)productForItemIdentifier:(unsigned long long)_forItemIdentifier replyBlock:(id /* block */)_block;
- (void)receiptFromBundleAtPath:(id)_fromBundleAtPath replyBlock:(id /* block */)_block;
- (void)removeOSUpdateScanObserver:(id)_osupdateScanObserver;
- (void)removeUpdateFromInstallLaterWithBundleID:(id)_updateFromInstallLaterWithBundleID;
- (void)startAdoptionEligibilityCheckWithReplyBlock:(id /* block */)_adoptionEligibilityCheckWithReplyBlock;
- (void)startAppUpdates:(id)_appUpdates andOSUpdates:(id)_osupdates withDelegate:(id)_delegate replyBlock:(id /* block */)_block;
- (void)lookupAppleIDForApp:(id)_appleIDForApp replyBlock:(id /* block */)_block;
- (void)removeOSUpdateProgressObserver:(id)_osupdateProgressObserver;
- (void)availableVPPUpdatesWithReplyBlock:(id /* block */)_vppupdatesWithReplyBlock;
- (void)didFinishDownloadForUpdateWithItemIdentifier:(unsigned long long)_updateWithItemIdentifier didInstall:(signed char)_install;
- (void)performVPPReceiptRenewalIfNecessaryForDownload:(id)_vppreceiptRenewalIfNecessaryForDownload replyBlock:(id /* block */)_block;
- (void)processMDMManifest:(id)_mdmmanifest options:(id)_options replyBlock:(id /* block */)_block;
- (void)processMDMManifestAtURL:(id)_mdmmanifestAtURL options:(id)_options replyBlock:(id /* block */)_block;
- (void)productAtPath:(id)_atPath wasUpdated:(signed char)_updated toBundleVersion:(id)_bundleVersion storeVersion:(id)_version;
- (void)productAtPath:(id)_atPath willBeUpdatedToBundleVersion:(id)_beUpdatedToBundleVersion storeVersion:(id)_version;
- (void)productPathToUpgradeForBundleIdentifier:(id)_pathToUpgradeForBundleIdentifier versionNumberString:(id)_numberString replyBlock:(id /* block */)_block;
- (void)redownloadWithItemIdentifier:(long long)_withItemIdentifier bundleIdentifier:(id)_identifier managedAppUUIDString:(id)_appUUIDString accountIdentifier:(id)_identifier storeClientType:(long long)_clientType replyBlock:(id /* block */)_block;
- (void)reloadAvailableVPPUpdatesWithReplyBlock:(id /* block */)_availableVPPUpdatesWithReplyBlock;
- (void)removeSoftwareMapObserver:(id)_softwareMapObserver;
- (void)renewReceiptForApplicationAtPath:(id)_receiptForApplicationAtPath withAppleID:(id)_appleID password:(id)_password forceSandbox:(signed char)_sandbox forceRenewal:(signed char)_renewal relaunchOnRenewal:(signed char)_onRenewal replyBlock:(id /* block */)_block;
- (void)renewReceiptForApplicationAtPath:(id)_receiptForApplicationAtPath withAppleID:(id)_appleID password:(id)_password forceSandbox:(signed char)_sandbox replyBlock:(id /* block */)_block;
- (void)requestVPPReceiptRenewalAtPath:(id)_vppreceiptRenewalAtPath bundleIdentifier:(id)_identifier sandboxOptions:(id)_options replyBlock:(id /* block */)_block;
- (void)shouldAllowAutoPushForBundleID:(id)_allowAutoPushForBundleID bundleVersion:(id)_version replyBlock:(id /* block */)_block;
- (void)showInvite:(id)_invite organizationName:(id)_name storeClientType:(long long)_clientType;
- (void)updateAutoInfoWithToken:(id)_autoInfoWithToken replyBlock:(id /* block */)_block;
- (void)vppManagedAppsWithReplyBlock:(id /* block */)_managedAppsWithReplyBlock;
- (void)willStartDownloadForUpdateWithIdentifier:(unsigned long long)_identifier;

@optional

@end

#endif /* ISAssetService_Protocol_h */
