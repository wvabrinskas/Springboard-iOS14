/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:57 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSData;

@interface PCCAttestation : NSObject {

	NSString* _certificate;
	NSData* _applicationEnclaveQuote;
	NSData* _quotingEnclaveQuote;
	NSData* _routingToken;

}

@property (nonatomic,retain) NSString * certificate;                        //@synthesize certificate=_certificate - In the implementation block
@property (nonatomic,retain) NSData * applicationEnclaveQuote;              //@synthesize applicationEnclaveQuote=_applicationEnclaveQuote - In the implementation block
@property (nonatomic,retain) NSData * quotingEnclaveQuote;                  //@synthesize quotingEnclaveQuote=_quotingEnclaveQuote - In the implementation block
@property (nonatomic,retain) NSData * routingToken;                         //@synthesize routingToken=_routingToken - In the implementation block
-(NSString *)certificate;
-(void)setCertificate:(NSString *)arg1 ;
-(void)setRoutingToken:(NSData *)arg1 ;
-(NSData *)routingToken;
-(id)initWithCertificate:(id)arg1 applicationEnclaveQuote:(id)arg2 quotingEnclaveQuote:(id)arg3 routingToken:(id)arg4 ;
-(NSData *)applicationEnclaveQuote;
-(void)setApplicationEnclaveQuote:(NSData *)arg1 ;
-(NSData *)quotingEnclaveQuote;
-(void)setQuotingEnclaveQuote:(NSData *)arg1 ;
@end

