/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:49 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol AVAudioPlayerDelegate <NSObject>
@optional
-(void)audioPlayerBeginInterruption:(id)arg1;
-(void)audioPlayerDecodeErrorDidOccur:(id)arg1 error:(id)arg2;
-(void)audioPlayerEndInterruption:(id)arg1 withOptions:(unsigned long long)arg2;
-(void)audioPlayerEndInterruption:(id)arg1 withFlags:(unsigned long long)arg2;
-(void)audioPlayerEndInterruption:(id)arg1;
-(void)audioPlayerDidFinishPlaying:(id)arg1 successfully:(BOOL)arg2;

@end

