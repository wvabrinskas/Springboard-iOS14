/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:49 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIView.h>

@class NSString, AVPictureInPictureIndicatorLayer;

@interface AVPictureInPictureIndicatorView : UIView {

	NSString* _customMessage;
	AVPictureInPictureIndicatorLayer* _pipIndicatorLayer;

}

@property (nonatomic,retain) AVPictureInPictureIndicatorLayer * pipIndicatorLayer;              //@synthesize pipIndicatorLayer=_pipIndicatorLayer - In the implementation block
@property (nonatomic,copy) NSString * customMessage;                                            //@synthesize customMessage=_customMessage - In the implementation block
-(void)_updateGeometry;
-(void)layoutSublayersOfLayer:(id)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(void)didMoveToWindow;
-(NSString *)customMessage;
-(void)setCustomMessage:(NSString *)arg1 ;
-(void)_addIndicatorLayerIfNeeded;
-(AVPictureInPictureIndicatorLayer *)pipIndicatorLayer;
-(void)setPipIndicatorLayer:(AVPictureInPictureIndicatorLayer *)arg1 ;
@end

