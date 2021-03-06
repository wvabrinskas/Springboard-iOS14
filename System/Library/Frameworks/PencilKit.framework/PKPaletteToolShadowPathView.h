/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:12 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PencilKit/PencilKit-Structs.h>
#import <UIKitCore/UIView.h>

@class CALayer, UIBezierPath;

@interface PKPaletteToolShadowPathView : UIView {

	CALayer* _largeShadow;
	CALayer* _smallShadow;

}

@property (nonatomic,readonly) UIBezierPath * toolShadowPath; 
@property (nonatomic,readonly) UIBezierPath * toolAndTipShadowPath; 
+(id)createPaletteToolShadowPathViewWithIdentifier:(id)arg1 ;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UIBezierPath *)toolShadowPath;
-(UIBezierPath *)toolAndTipShadowPath;
@end

