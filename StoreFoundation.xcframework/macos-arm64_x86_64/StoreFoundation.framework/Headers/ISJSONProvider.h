//
//   Generated by https://github.com/blacktop/ipsw (Version: , BuildCommit: )
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.4, SDK: 14.4, Tool: ld (951.9)
//    - LC_SOURCE_VERSION: 714.4.9.0.0
//
#ifndef ISJSONProvider_h
#define ISJSONProvider_h

#include "ISPropertyListProvider.h"

@interface ISJSONProvider : ISPropertyListProvider

/* instance methods */
- (signed char)parseData:(id)_data returningError:(id *)_error;

@end

#endif /* ISJSONProvider_h */