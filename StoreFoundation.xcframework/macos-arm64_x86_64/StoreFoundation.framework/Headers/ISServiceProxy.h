//
//   Generated by https://github.com/blacktop/ipsw (Version: , BuildCommit: )
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.4, SDK: 14.4, Tool: ld (951.9)
//    - LC_SOURCE_VERSION: 714.4.9.0.0
//
#ifndef ISServiceProxy_h
#define ISServiceProxy_h

@import Foundation;

#include "ISAccountService-Protocol.h"
#include "ISAssetService-Protocol.h"
#include "ISDownloadService-Protocol.h"
#include "ISServiceRemoteObject-Protocol.h"
#include "ISStoreClient.h"
#include "ISTransactionService-Protocol.h"
#include "ISUIService-Protocol.h"

@interface ISServiceProxy : NSObject

@property (readonly, weak, nonatomic) id <ISServiceRemoteObject> exportedObject;
@property (readonly, nonatomic) Protocol *exportedProtocol;
@property (retain, nonatomic) ISStoreClient *storeClient;
@property (readonly, nonatomic) id <ISAccountService> accountService;
@property (readonly, nonatomic) id <ISDownloadService> downloadService;
@property (readonly, nonatomic) id <ISAssetService> assetService;
@property (readonly, nonatomic) id <ISTransactionService> transactionService;
@property (readonly, nonatomic) id <ISUIService> uiService;

/* class methods */
+ (void)initialize;
+ (id)genericSharedProxy;

/* instance methods */
- (void)connectionWasInterrupted;
- (id)initWithStoreClient:(id)_storeClient;
- (void)assetServiceSynchronousBlock:(id /* block */)_serviceSynchronousBlock;
- (void)downloadServiceSynchronousBlock:(id /* block */)_serviceSynchronousBlock;
- (void)registerForInterrptionNotification;
- (void)transactionServiceSynchronousBlock:(id /* block */)_serviceSynchronousBlock;
- (void)accountServiceSynchronousBlock:(id /* block */)_serviceSynchronousBlock;
- (id)accountServiceWithErrorHandler:(id /* block */)_serviceWithErrorHandler;
- (id)assetServiceWithErrorHandler:(id /* block */)_serviceWithErrorHandler;
- (id)connectionWithServiceName:(id)_withServiceName protocol:(id)_protocol isMachService:(signed char)_machService;
- (id)downloadServiceWithErrorHandler:(id /* block */)_serviceWithErrorHandler;
- (id)objectProxyForServiceName:(id)_proxyForServiceName protocol:(id)_protocol interfaceClassName:(id)_className isMachService:(signed char)_machService errorHandler:(id /* block */)_handler;
- (void)performSynchronousBlock:(id /* block */)_synchronousBlock withServiceName:(id)_serviceName protocol:(id)_protocol isMachService:(signed char)_machService interfaceClassName:(id)_className;
- (id)transactionServiceWithErrorHandler:(id /* block */)_serviceWithErrorHandler;
- (void)uiServiceSynchronousBlock:(id /* block */)_serviceSynchronousBlock;
- (id)uiServiceWithErrorHandler:(id /* block */)_serviceWithErrorHandler;

@end

#endif /* ISServiceProxy_h */
