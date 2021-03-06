/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:28 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/BookLibrary.framework/BookLibrary
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AppleMediaServices/AMSURLRequestEncoder.h>
#import <libobjc.A.dylib/AMSRequestEncoding.h>

@class NSNumber, NSString;

@interface BLURLRequestEncoder : AMSURLRequestEncoder <AMSRequestEncoding> {

	NSNumber* _dsid;
	long long _reason;
	unsigned long long _contentType;

}

@property (nonatomic,retain) NSNumber * dsid;                             //@synthesize dsid=_dsid - In the implementation block
@property (assign,nonatomic) long long reason;                            //@synthesize reason=_reason - In the implementation block
@property (assign,nonatomic) unsigned long long contentType;              //@synthesize contentType=_contentType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)DAAPPurchaseVersionString;
+(id)DAAPClientVersionString;
-(void)setDsid:(NSNumber *)arg1 ;
-(NSNumber *)dsid;
-(long long)reason;
-(id)initWithBag:(id)arg1 withURLRequest:(id)arg2 ;
-(void)setContentType:(unsigned long long)arg1 ;
-(id)requestByEncodingRequest:(id)arg1 parameters:(id)arg2 ;
-(void)setReason:(long long)arg1 ;
-(unsigned long long)contentType;
@end

