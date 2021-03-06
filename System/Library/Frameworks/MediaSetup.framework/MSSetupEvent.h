/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:50 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/MediaSetup.framework/MediaSetup
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSDate, NSString;

@interface MSSetupEvent : NSObject {

	BOOL _sent;
	int _result;
	int _numberOfErrors;
	int _numberOfHomesWithVR;
	int _numberOfHomeAdded;
	NSDate* _startTime;
	NSDate* _endTime;
	NSString* _serviceId;

}

@property (nonatomic,retain) NSDate * startTime;                   //@synthesize startTime=_startTime - In the implementation block
@property (nonatomic,retain) NSDate * endTime;                     //@synthesize endTime=_endTime - In the implementation block
@property (assign,nonatomic) int result;                           //@synthesize result=_result - In the implementation block
@property (nonatomic,retain) NSString * serviceId;                 //@synthesize serviceId=_serviceId - In the implementation block
@property (assign,nonatomic) int numberOfErrors;                   //@synthesize numberOfErrors=_numberOfErrors - In the implementation block
@property (assign,nonatomic) int numberOfHomesWithVR;              //@synthesize numberOfHomesWithVR=_numberOfHomesWithVR - In the implementation block
@property (assign,nonatomic) int numberOfHomeAdded;                //@synthesize numberOfHomeAdded=_numberOfHomeAdded - In the implementation block
@property (assign,nonatomic) BOOL sent;                            //@synthesize sent=_sent - In the implementation block
-(NSDate *)endTime;
-(void)setServiceId:(NSString *)arg1 ;
-(id)init;
-(void)setResult:(int)arg1 ;
-(BOOL)sent;
-(NSDate *)startTime;
-(void)setEndTime:(NSDate *)arg1 ;
-(void)setStartTime:(NSDate *)arg1 ;
-(void)setSent:(BOOL)arg1 ;
-(NSString *)serviceId;
-(int)result;
-(int)numberOfErrors;
-(void)setNumberOfHomesWithVR:(int)arg1 ;
-(void)setNumberOfHomeAdded:(int)arg1 ;
-(void)setNumberOfErrors:(int)arg1 ;
-(int)numberOfHomeAdded;
-(int)numberOfHomesWithVR;
-(id)resultAsString;
-(void)addHome:(id)arg1 ;
@end

