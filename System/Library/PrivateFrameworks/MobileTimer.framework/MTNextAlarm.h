/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:58 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSDate, NSURL;

@interface MTNextAlarm : NSObject {

	BOOL _isSleepAlarm;
	NSString* _title;
	NSDate* _fireDate;
	NSString* _identifier;

}

@property (nonatomic,copy) NSString * title;                                 //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSDate * fireDate;                                //@synthesize fireDate=_fireDate - In the implementation block
@property (nonatomic,copy) NSString * identifier;                            //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) BOOL isSleepAlarm;                              //@synthesize isSleepAlarm=_isSleepAlarm - In the implementation block
@property (nonatomic,copy,readonly) NSURL * clockAppSectionURL; 
-(NSDate *)fireDate;
-(NSString *)identifier;
-(id)description;
-(BOOL)isSleepAlarm;
-(NSURL *)clockAppSectionURL;
-(NSString *)title;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setIsSleepAlarm:(BOOL)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(void)setFireDate:(NSDate *)arg1 ;
@end

