/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:40 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/_UIImageLoader.h>

@class NSItemProvider, NSString, NSProgress;

@interface _UINSItemProviderImageLoader : _UIImageLoader {

	NSItemProvider* _itemProvider;
	NSString* _typeIdentifier;
	NSProgress* __progress;

}

@property (setter=_setProgress:,retain) NSProgress * _progress;              //@synthesize _progress=__progress - In the implementation block
-(NSProgress *)_progress;
-(void)_setProgress:(id)arg1 ;
-(void)_really_loadImage:(/*^block*/id)arg1 ;
-(id)initWithItemProvider:(id)arg1 typeIdentifier:(id)arg2 ;
-(BOOL)_really_cancel;
@end

