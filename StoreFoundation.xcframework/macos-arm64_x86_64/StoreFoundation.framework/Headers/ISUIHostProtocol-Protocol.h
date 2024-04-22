//
//   Generated by https://github.com/blacktop/ipsw (Version: , BuildCommit: )
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.4, SDK: 14.4, Tool: ld (951.9)
//    - LC_SOURCE_VERSION: 714.4.9.0.0
//
#ifndef ISUIHostProtocol_Protocol_h
#define ISUIHostProtocol_Protocol_h

@protocol ISUIHostProtocol

@required

/* required instance methods */
- (void)serviceDismissDialog:(id)_dismissDialog withExitCode:(long long)_exitCode;
- (void)serviceDisplayDialog:(id)_displayDialog;
- (void)serviceDisplayDialog:(id)_displayDialog withServiceDelegate:(id)_serviceDelegate replyBlock:(id /* block */)_block;

@optional

/* optional instance methods */
- (void)serviceDisplayFirmwareWarningWithTitle:(id)_displayFirmwareWarningWithTitle content:(id)_content replyBlock:(id /* block */)_block;
- (void)serviceDisplayLicenseAgreementWithTitle:(id)_displayLicenseAgreementWithTitle content:(id)_content replyBlock:(id /* block */)_block;

@end

#endif /* ISUIHostProtocol_Protocol_h */
