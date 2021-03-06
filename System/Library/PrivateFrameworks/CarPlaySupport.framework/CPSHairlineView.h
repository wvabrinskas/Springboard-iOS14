/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:51 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIView.h>

@class NSLayoutConstraint;

@interface CPSHairlineView : UIView {

	long long _axis;
	NSLayoutConstraint* _strokeThicknessConstraint;

}

@property (assign,nonatomic) long long axis;                                              //@synthesize axis=_axis - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * strokeThicknessConstraint;              //@synthesize strokeThicknessConstraint=_strokeThicknessConstraint - In the implementation block
+(id)grayHairlineViewAlongAxis:(long long)arg1 ;
-(long long)axis;
-(void)setAxis:(long long)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)initWithAxis:(long long)arg1 color:(id)arg2 ;
-(void)setStrokeThicknessConstraint:(NSLayoutConstraint *)arg1 ;
-(void)_updateStrokeThickness;
-(NSLayoutConstraint *)strokeThicknessConstraint;
@end

