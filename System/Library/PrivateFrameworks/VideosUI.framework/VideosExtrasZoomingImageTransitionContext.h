/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:36 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class VideosExtrasBorderedImageView;

@interface VideosExtrasZoomingImageTransitionContext : NSObject {

	BOOL _interactive;
	VideosExtrasBorderedImageView* _zoomingImageView;
	unsigned long long _itemIndex;
	unsigned long long _appearState;

}

@property (nonatomic,retain) VideosExtrasBorderedImageView * zoomingImageView;              //@synthesize zoomingImageView=_zoomingImageView - In the implementation block
@property (assign,nonatomic) unsigned long long itemIndex;                                  //@synthesize itemIndex=_itemIndex - In the implementation block
@property (assign,nonatomic) unsigned long long appearState;                                //@synthesize appearState=_appearState - In the implementation block
@property (assign,getter=isInteractive,nonatomic) BOOL interactive;                         //@synthesize interactive=_interactive - In the implementation block
-(BOOL)isInteractive;
-(void)setInteractive:(BOOL)arg1 ;
-(void)setItemIndex:(unsigned long long)arg1 ;
-(void)setAppearState:(unsigned long long)arg1 ;
-(VideosExtrasBorderedImageView *)zoomingImageView;
-(unsigned long long)appearState;
-(unsigned long long)itemIndex;
-(void)setZoomingImageView:(VideosExtrasBorderedImageView *)arg1 ;
-(id)initWithZoomingImageView:(id)arg1 itemIndex:(unsigned long long)arg2 appearState:(unsigned long long)arg3 isInteractive:(BOOL)arg4 ;
@end

