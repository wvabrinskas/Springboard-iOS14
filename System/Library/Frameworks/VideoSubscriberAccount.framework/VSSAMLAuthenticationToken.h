/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:17 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/VSAuthenticationToken.h>

@class NSDate, NSString, NSData;

@interface VSSAMLAuthenticationToken : NSObject <VSAuthenticationToken> {

	NSData* _serializedData;
	NSDate* _simulatedExpirationDate;

}

@property (nonatomic,copy) NSData * serializedData;                         //@synthesize serializedData=_serializedData - In the implementation block
@property (nonatomic,retain) NSDate * simulatedExpirationDate;              //@synthesize simulatedExpirationDate=_simulatedExpirationDate - In the implementation block
@property (nonatomic,copy,readonly) NSDate * expirationDate; 
@property (nonatomic,copy) NSString * body; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSData *)serializedData;
-(void)setBody:(NSString *)arg1 ;
-(unsigned long long)hash;
-(NSString *)body;
-(void)setExpirationDate:(NSDate *)arg1 ;
-(BOOL)isOpaque;
-(NSString *)description;
-(void)setSerializedData:(NSData *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSDate *)expirationDate;
-(BOOL)isValid;
-(id)initWithSerializedData:(id)arg1 ;
-(void)setSimulatedExpirationDate:(NSDate *)arg1 ;
-(NSDate *)simulatedExpirationDate;
-(BOOL)isFromUnsupportedProvider;
@end
