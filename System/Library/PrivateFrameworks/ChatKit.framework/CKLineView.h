/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:18 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UIView.h>

@class CABackdropLayer, CAShapeLayer;

@interface CKLineView : UIView {

	BOOL _shouldUseDarkFSMStrokeColor;
	CABackdropLayer* _backdropFilterLayer;
	CAShapeLayer* _lineShapeLayer;

}

@property (nonatomic,retain) CABackdropLayer * backdropFilterLayer;              //@synthesize backdropFilterLayer=_backdropFilterLayer - In the implementation block
@property (nonatomic,retain) CAShapeLayer * lineShapeLayer;                      //@synthesize lineShapeLayer=_lineShapeLayer - In the implementation block
@property (assign,nonatomic) BOOL shouldUseDarkFSMStrokeColor;                   //@synthesize shouldUseDarkFSMStrokeColor=_shouldUseDarkFSMStrokeColor - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)clearFilters;
-(void)setFrame:(CGRect)arg1 ;
-(void)addFilter:(id)arg1 ;
-(void)setBackdropFilterLayer:(CABackdropLayer *)arg1 ;
-(CABackdropLayer *)backdropFilterLayer;
-(CAShapeLayer *)lineShapeLayer;
-(void)setLineShapeLayer:(CAShapeLayer *)arg1 ;
-(void)setShouldUseDarkFSMStrokeColor:(BOOL)arg1 ;
-(BOOL)shouldUseDarkFSMStrokeColor;
@end

