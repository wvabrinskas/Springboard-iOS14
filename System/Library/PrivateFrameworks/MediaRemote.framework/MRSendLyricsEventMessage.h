/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:46 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaRemote/MRProtocolMessage.h>

@class _MRLyricsEventProtobuf;

@interface MRSendLyricsEventMessage : MRProtocolMessage

@property (nonatomic,readonly) _MRLyricsEventProtobuf * event; 
-(id)initWithEvent:(id)arg1 ;
-(_MRLyricsEventProtobuf *)event;
-(unsigned long long)type;
@end

