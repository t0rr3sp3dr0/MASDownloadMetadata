//
//  MASDownloadMetadata.m
//  
//
//  Created by Pedro Tôrres on 2024-04-12.
//

#import <StoreFoundation/StoreFoundation.h>

#import "include/MASDownloadMetadata.h"

enum {
    ISTransactionServiceDoNotStartDownload = 1
};

@implementation MASDownloadMetadata

+ (NSDictionary *)performPurchaseWithBuyParameters:(NSString *)buyParameters {
    ISServiceProxy *sp = [ISServiceProxy genericSharedProxy];
    id <ISTransactionService> ts = [sp transactionService];
    
    ISStoreClient *sc = [[ISStoreClient alloc] initWithStoreClientType:0];
    [ts setStoreClient:sc];
    
    SSPurchase *p = [SSPurchase purchaseWithBuyParameters:buyParameters];
    
    return [self transactionService:ts performPurchase:p withBundleIDsToAdopt:nil legacyAppsToGrant:nil withOptions:ISTransactionServiceDoNotStartDownload];
}

+ (NSDictionary *)transactionService:(id <ISTransactionService>)service performPurchase:(SSPurchase *)purchase withBundleIDsToAdopt:(NSArray *)adopt legacyAppsToGrant:(NSArray *)grant withOptions:(unsigned long long)options {
    __block NSDictionary *ret = nil;
    
    dispatch_group_t dg = dispatch_group_create();
    
    dispatch_group_enter(dg);
    [service performPurchase:purchase withBundleIDsToAdopt:adopt legacyAppsToGrant:grant withOptions:options replyBlock:^(SSPurchase *p, BOOL b, NSError *e, SSPurchaseResponse *pr) {
        if (b) {
            SSDownloadMetadata *dm = [p downloadMetadata];
            NSDictionary *d = [dm dictionary];
            
            ret = d;
        } else {
            NSLog(@"%@", e);
        }
        
        dispatch_group_leave(dg);
    }];

    dispatch_group_wait(dg, DISPATCH_TIME_FOREVER);

    return ret;
}

@end
