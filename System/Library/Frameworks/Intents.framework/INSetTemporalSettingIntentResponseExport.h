/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:09 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/Intents.framework/Intents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class INDateComponentsRange, NSString;


@protocol INSetTemporalSettingIntentResponseExport <NSObject,JSExport>
@property (nonatomic,readonly) long long code; 
@property (nonatomic,copy) INDateComponentsRange * oldValue; 
@property (nonatomic,copy) INDateComponentsRange * updatedValue; 
@property (nonatomic,copy) NSString * errorDetail; 
@required
-(INDateComponentsRange *)oldValue;
-(void)setOldValue:(id)arg1;
-(long long)code;
-(INDateComponentsRange *)updatedValue;
-(void)setUpdatedValue:(id)arg1;
-(NSString *)errorDetail;
-(void)setErrorDetail:(id)arg1;

@end

