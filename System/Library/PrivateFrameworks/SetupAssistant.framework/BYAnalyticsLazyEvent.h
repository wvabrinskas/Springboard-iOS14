/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:30 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SetupAssistant.framework/SetupAssistant
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface BYAnalyticsLazyEvent : NSObject {

	BOOL _persist;
	NSString* _name;
	/*^block*/id _payloadBlock;

}

@property (nonatomic,retain) NSString * name;              //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) id payloadBlock;                //@synthesize payloadBlock=_payloadBlock - In the implementation block
@property (assign,nonatomic) BOOL persist;                 //@synthesize persist=_persist - In the implementation block
+(id)eventWithName:(id)arg1 withPayloadBlock:(/*^block*/id)arg2 persist:(BOOL)arg3 ;
-(BOOL)persist;
-(void)setPersist:(BOOL)arg1 ;
-(void)setPayloadBlock:(id)arg1 ;
-(id)payloadBlock;
-(NSString *)name;
-(id)description;
-(void)setName:(NSString *)arg1 ;
@end

