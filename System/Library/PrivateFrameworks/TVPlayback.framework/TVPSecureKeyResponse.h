/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:51 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSData, NSDate, TVPSecureKeyRequest;

@interface TVPSecureKeyResponse : NSObject {

	NSData* _keyData;
	NSDate* _renewalDate;
	TVPSecureKeyRequest* _request;

}

@property (nonatomic,retain) NSData * keyData;                           //@synthesize keyData=_keyData - In the implementation block
@property (nonatomic,retain) NSDate * renewalDate;                       //@synthesize renewalDate=_renewalDate - In the implementation block
@property (nonatomic,retain) TVPSecureKeyRequest * request;              //@synthesize request=_request - In the implementation block
-(void)setKeyData:(NSData *)arg1 ;
-(TVPSecureKeyRequest *)request;
-(void)setRequest:(TVPSecureKeyRequest *)arg1 ;
-(NSData *)keyData;
-(NSDate *)renewalDate;
-(void)setRenewalDate:(NSDate *)arg1 ;
@end

