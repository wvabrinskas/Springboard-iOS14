/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:26 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TextInputCore/TISKEvent.h>

@class TISKSessionSamples;

@interface TISKBucketSwitchEvent : TISKEvent {

	TISKSessionSamples* _sessionSamples;

}

@property (nonatomic,retain) TISKSessionSamples * sessionSamples;              //@synthesize sessionSamples=_sessionSamples - In the implementation block
-(id)description;
-(id)init:(id)arg1 order:(long long)arg2 ;
-(TISKSessionSamples *)sessionSamples;
-(void)setSessionSamples:(TISKSessionSamples *)arg1 ;
@end

