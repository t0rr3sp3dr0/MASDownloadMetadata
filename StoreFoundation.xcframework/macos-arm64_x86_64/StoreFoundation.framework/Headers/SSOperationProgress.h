//
//   Generated by https://github.com/blacktop/ipsw (Version: , BuildCommit: )
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.4, SDK: 14.4, Tool: ld (951.9)
//    - LC_SOURCE_VERSION: 714.4.9.0.0
//
#ifndef SSOperationProgress_h
#define SSOperationProgress_h

@import Foundation;

@interface SSOperationProgress : NSObject <NSSecureCoding, NSCopying> {
    /* instance variables */
    NSMutableArray *_snapshotTimes;
    NSMutableArray *_snapshotValues;
}

@property (nonatomic) signed char canPause;
@property (nonatomic) long long operationType;
@property (nonatomic) double changeRate;
@property (nonatomic) double currentValue;
@property (nonatomic) double estimatedTimeRemaining;
@property (nonatomic) double maxValue;
@property (nonatomic) long long units;
@property (nonatomic) double normalizedCurrentValue;
@property (nonatomic) double normalizedMaxValue;

/* class methods */
+ (signed char)supportsSecureCoding;

/* instance methods */
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)_zone;
- (id)description;
- (id)init;
- (void)encodeWithCoder:(id)_withCoder;
- (id)initWithCoder:(id)_coder;
- (void)snapshot;
- (void)_updateStatisticsFromSnapshots;
- (void)resetSnapshots;

@end

#endif /* SSOperationProgress_h */