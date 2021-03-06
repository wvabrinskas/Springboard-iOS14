/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:59 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaPlayer/MPRemoteCommand.h>

@class NSArray;

@interface MPPreloadPlaybackSessionCommand : MPRemoteCommand {

	NSArray* _supportedSessionTypes;

}

@property (nonatomic,copy) NSArray * supportedSessionTypes;              //@synthesize supportedSessionTypes=_supportedSessionTypes - In the implementation block
-(void)setSupportedSessionTypes:(NSArray *)arg1 ;
-(NSArray *)supportedSessionTypes;
-(id)_mediaRemoteCommandInfoOptions;
@end

