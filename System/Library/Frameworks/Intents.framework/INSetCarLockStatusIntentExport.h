/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:05 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/Intents.framework/Intents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSNumber, INSpeakableString;


@protocol INSetCarLockStatusIntentExport <NSObject,JSExport>
@property (nonatomic,copy) NSNumber * locked; 
@property (nonatomic,copy) INSpeakableString * carName; 
@required
-(id)init;
-(INSpeakableString *)carName;
-(NSNumber *)locked;
-(void)setCarName:(id)arg1;
-(void)setLocked:(id)arg1;

@end
