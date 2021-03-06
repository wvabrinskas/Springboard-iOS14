/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:37 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ReminderKitInternal.framework/ReminderKitInternal
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <ReminderKitInternal/ReminderKitInternal-Structs.h>
@interface TTRNLTextStructuredEventLocation : NSObject {

	long long _locationType;
	long long _proximity;
	NSRange _range;

}

@property (assign,nonatomic) NSRange range;                       //@synthesize range=_range - In the implementation block
@property (assign,nonatomic) long long locationType;              //@synthesize locationType=_locationType - In the implementation block
@property (assign,nonatomic) long long proximity;                 //@synthesize proximity=_proximity - In the implementation block
-(NSRange)range;
-(void)setRange:(NSRange)arg1 ;
-(long long)proximity;
-(id)initWithRange:(NSRange)arg1 locationType:(long long)arg2 proximity:(long long)arg3 ;
-(id)description;
-(void)setProximity:(long long)arg1 ;
-(long long)locationType;
-(void)setLocationType:(long long)arg1 ;
@end

