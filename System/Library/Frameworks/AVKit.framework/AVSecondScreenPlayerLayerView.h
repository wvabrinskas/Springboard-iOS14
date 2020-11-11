/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:49 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIView.h>

@class AVPlayerLayer, AVObservationController;

@interface AVSecondScreenPlayerLayerView : UIView {

	AVPlayerLayer* _activeSourcePlayerLayer;
	AVObservationController* _observationController;

}

@property (nonatomic,readonly) AVPlayerLayer * layer; 
@property (assign,nonatomic,__weak) AVPlayerLayer * activeSourcePlayerLayer;               //@synthesize activeSourcePlayerLayer=_activeSourcePlayerLayer - In the implementation block
@property (nonatomic,retain) AVObservationController * observationController;              //@synthesize observationController=_observationController - In the implementation block
+(Class)layerClass;
-(void)startShowingContentFromSourcePlayerLayer:(id)arg1 ;
-(void)stopShowingContentFromActiveSourcePlayerLayer;
-(AVPlayerLayer *)activeSourcePlayerLayer;
-(void)setActiveSourcePlayerLayer:(AVPlayerLayer *)arg1 ;
-(void)setObservationController:(AVObservationController *)arg1 ;
-(AVObservationController *)observationController;
-(void)dealloc;
@end
