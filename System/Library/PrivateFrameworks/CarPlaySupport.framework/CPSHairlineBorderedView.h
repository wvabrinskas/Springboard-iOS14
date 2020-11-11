/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:51 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIView.h>

@class UIView, NSLayoutConstraint;

@interface CPSHairlineBorderedView : UIView {

	UIView* _contentView;
	NSLayoutConstraint* _bottomConstraint;

}

@property (nonatomic,readonly) UIView * contentView;                               //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,readonly) NSLayoutConstraint * bottomConstraint;              //@synthesize bottomConstraint=_bottomConstraint - In the implementation block
-(NSLayoutConstraint *)bottomConstraint;
-(UIView *)contentView;
-(id)initWithContentView:(id)arg1 borderEdges:(unsigned long long)arg2 ;
@end
