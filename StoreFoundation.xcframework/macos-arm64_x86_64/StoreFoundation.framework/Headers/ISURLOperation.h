//
//   Generated by https://github.com/blacktop/ipsw (Version: , BuildCommit: )
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.4, SDK: 14.4, Tool: ld (951.9)
//    - LC_SOURCE_VERSION: 714.4.9.0.0
//
#ifndef ISURLOperation_h
#define ISURLOperation_h

@import Foundation;

#include "ISDataProvider.h"
#include "ISOperation.h"
#include "ISOperationDelegate-Protocol.h"
#include "ISURLOperationDelegate-Protocol.h"
#include "ISURLRequest.h"

@interface ISURLOperation : ISOperation <NSURLConnectionDelegate> {
    /* instance variables */
    NSURLRequest *_activeURLRequest;
    NSURLConnection *_connection;
    NSMutableData *_dataBuffer;
    long long _networkRetryCount;
    long long _contentRetryCount;
    NSCountedSet *_redirectURLs;
    signed char _shouldSetCookies;
    unsigned long long _countedBytes;
}

@property (retain) NSURLResponse *response;
@property signed char _shouldSetCookies;
@property (weak) id <ISURLOperationDelegate, ISOperationDelegate> delegate;
@property (retain) ISDataProvider *dataProvider;
@property (copy) ISURLRequest *request;
@property signed char checkForIncompleteFinish;
@property signed char cancelIfNotAlreadyOnDisk;
@property signed char requireExtendedValidationCertificate;
@property (copy) NSArray *anchorCertificates;
@property signed char anchorRevocationCheck;
@property (readonly) signed char fileWasAlreadyOnDisk;
@property signed char shouldRetryOnNetworkError;
@property (copy) NSDictionary *conditionalConnectionProperties;
@property (copy) id /* block */ outputHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (long long)operationType;

/* instance methods */
- (id)init;
- (void)run;
- (void)connection:(id)_connection didFailWithError:(id)_failWithError;
- (void)connection:(id)_connection didReceiveData:(id)_receiveData;
- (void)connection:(id)_connection didReceiveResponse:(id)_receiveResponse;
- (id)connection:(id)_connection willSendRequest:(id)_sendRequest redirectResponse:(id)_response;
- (void)connectionDidFinishLoading:(id)_didFinishLoading;
- (id)_request;
- (void)connection:(id)_connection conditionalRequirementsChanged:(signed char)_requirementsChanged;
- (id)connection:(id)_connection willSendRequestForEstablishedConnection:(id)_sendRequestForEstablishedConnection properties:(id)_properties;
- (void)_run;
- (void)_updateProgress;
- (void)_retry;
- (void)handleResponse:(id)_response;
- (void)_stopConnection;
- (signed char)handleRedirectFromDataProvider:(id)_redirectFromDataProvider;
- (id)_activeURL;
- (id)_copyAcceptLanguageString;
- (id)_copyQueryStringDictionaryForRedirect:(id)_queryStringDictionaryForRedirect;
- (void)_handleFinishedLoading;
- (void)_handleReceivedData:(id)_receivedData;
- (void)_handleReceivedResponse:(id)_receivedResponse;
- (id)_handleRedirectRequest:(id)_redirectRequest response:(id)_response;
- (void)_logHeadersForRequest:(id)_headersForRequest;
- (void)_logRequest:(id)_request;
- (void)_logResponseBody:(id)_responseBody;
- (signed char)_runWithURL:(id)_url;
- (void)_sendOutputToDelegate:(id)_outputToDelegate;
- (void)_sendRequestToDelegate:(id)_requestToDelegate;
- (void)_sendResponseToDelegate:(id)_responseToDelegate;
- (void)_setActiveURLRequest:(id)_activeURLRequest;
- (void)_setShouldSetCookies:(signed char)_shouldSetCookies;
- (id)_urlConnectionWithRequest:(id)_request;
- (id)newRequestWithURL:(id)_requestWithURL;
- (signed char)shouldFollowRedirectWithRequest:(id)_followRedirectWithRequest returningError:(id *)_error;

@end

#endif /* ISURLOperation_h */
