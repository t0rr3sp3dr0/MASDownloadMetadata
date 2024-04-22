//
//   Generated by https://github.com/blacktop/ipsw (Version: , BuildCommit: )
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.4, SDK: 14.4, Tool: ld (951.9)
//    - LC_SOURCE_VERSION: 714.4.9.0.0
//
#ifndef SSDownloadStatus_h
#define SSDownloadStatus_h

@import Foundation;

#include "SSDownloadPhase.h"

@interface SSDownloadStatus : NSObject <NSSecureCoding>

@property (retain, nonatomic) NSError *error;
@property (nonatomic) signed char failed;
@property (nonatomic) signed char paused;
@property (nonatomic) signed char cancelled;
@property (readonly, nonatomic) signed char pausable;
@property signed char waiting;
@property (readonly, nonatomic) SSDownloadPhase *activePhase;
@property (readonly, nonatomic) float percentComplete;
@property (readonly, nonatomic) float phasePercentComplete;
@property (readonly, nonatomic) long long phaseTimeRemaining;

/* class methods */
+ (signed char)supportsSecureCoding;

/* instance methods */
- (id)copyWithZone:(struct _NSZone *)_zone;
- (void)encodeWithCoder:(id)_withCoder;
- (id)initWithCoder:(id)_coder;
- (signed char)isCancelled;
- (signed char)isPausable;
- (signed char)isPaused;
- (signed char)isFailed;
- (void)setOperationProgress:(id)_operationProgress;

@end

#endif /* SSDownloadStatus_h */
