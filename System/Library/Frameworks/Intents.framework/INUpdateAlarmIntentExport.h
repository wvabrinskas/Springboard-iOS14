/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:09 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/Intents.framework/Intents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class INAlarmSearch, INAlarm, INDateComponentsRange, INSpeakableString;


@protocol INUpdateAlarmIntentExport <NSObject,JSExport>
@property (nonatomic,copy) INAlarmSearch * alarmSearch; 
@property (nonatomic,copy) INAlarm * alarm; 
@property (assign,nonatomic) long long operation; 
@property (nonatomic,copy) INDateComponentsRange * proposedTime; 
@property (nonatomic,copy) INSpeakableString * proposedLabel; 
@required
-(void)setOperation:(long long)arg1;
-(id)init;
-(INDateComponentsRange *)proposedTime;
-(void)setProposedTime:(id)arg1;
-(INAlarm *)alarm;
-(long long)operation;
-(void)setAlarm:(id)arg1;
-(INAlarmSearch *)alarmSearch;
-(void)setAlarmSearch:(id)arg1;
-(INSpeakableString *)proposedLabel;
-(void)setProposedLabel:(id)arg1;

@end

