//
//   Generated by https://github.com/blacktop/ipsw (Version: , BuildCommit: )
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.4, SDK: 14.4, Tool: ld (951.9)
//    - LC_SOURCE_VERSION: 714.4.9.0.0
//
#ifndef ISCertificate_h
#define ISCertificate_h

@import Foundation;

@interface ISCertificate : NSObject {
    /* instance variables */
    struct __SecTrust * _trust;
}

/* instance methods */
- (void)dealloc;
- (signed char)isValid;
- (void)setCertificateData:(id)_certificateData;
- (signed char)checkData:(id)_data againstAppleSignature:(id)_appleSignature;
- (signed char)checkData:(id)_data againstSignature:(id)_signature;

@end

#endif /* ISCertificate_h */