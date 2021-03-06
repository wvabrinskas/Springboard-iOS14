/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:47 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIView.h>

@class UIBezierPath, CALayer;

@interface _UIRadiosityShadowView : UIView {

	BOOL _needsPunchout;
	UIBezierPath* _shadowPath;
	CALayer* _punchoutLayer;

}

@property (nonatomic,retain) UIBezierPath * shadowPath;              //@synthesize shadowPath=_shadowPath - In the implementation block
@property (nonatomic,retain) CALayer * punchoutLayer;                //@synthesize punchoutLayer=_punchoutLayer - In the implementation block
@property (assign,nonatomic) BOOL needsPunchout;                     //@synthesize needsPunchout=_needsPunchout - In the implementation block
-(UIBezierPath *)shadowPath;
-(void)setPunchoutLayer:(CALayer *)arg1 ;
-(CALayer *)punchoutLayer;
-(BOOL)needsPunchout;
-(id)initWithSourceView:(id)arg1 shadowPath:(id)arg2 isSoft:(BOOL)arg3 ;
-(void)setNeedsPunchout:(BOOL)arg1 ;
-(void)setShadowPath:(UIBezierPath *)arg1 ;
@end

