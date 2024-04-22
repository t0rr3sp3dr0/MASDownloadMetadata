//
//  MASDownloadMetadata.h
//  
//
//  Created by Pedro Tôrres on 2024-04-12.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface MASDownloadMetadata : NSObject

+ (nullable NSDictionary *)performPurchaseWithBuyParameters:(NSString *)buyParameters;

@end

NS_ASSUME_NONNULL_END
