/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:45 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIControl.h>

@protocol UITableConstants;
@class UIImageView, UIColor, UIImage;

@interface _UICollectionViewListAccessoryDisclosure : UIControl {

	UIImageView* _imageView;
	BOOL _rotated;
	id<UITableConstants> _constants;
	UIColor* _accessoryTintColor;
	double _rotationAngle;

}

@property (nonatomic,retain) UIImage * image; 
@property (nonatomic,retain) id<UITableConstants> constants;              //@synthesize constants=_constants - In the implementation block
@property (nonatomic,retain) UIColor * accessoryTintColor;                //@synthesize accessoryTintColor=_accessoryTintColor - In the implementation block
@property (assign,nonatomic) BOOL rotated;                                //@synthesize rotated=_rotated - In the implementation block
@property (assign,nonatomic) double rotationAngle;                        //@synthesize rotationAngle=_rotationAngle - In the implementation block
-(double)rotationAngle;
-(unsigned long long)_controlEventsForActionTriggered;
-(id)viewForLastBaselineLayout;
-(void)setRotationAngle:(double)arg1 ;
-(BOOL)rotated;
-(id)viewForFirstBaselineLayout;
-(void)setFrame:(CGRect)arg1 ;
-(id<UITableConstants>)constants;
-(void)_updateRotation;
-(void)setImage:(UIImage *)arg1 ;
-(CGSize)_minimumSizeForHitTesting;
-(double)_enforcedWidthForWidth:(double)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(UIImage *)image;
-(void)addActionHandler:(/*^block*/id)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setRotated:(BOOL)arg1 ;
-(void)setAccessoryTintColor:(UIColor *)arg1 ;
-(void)setConstants:(id<UITableConstants>)arg1 ;
-(UIColor *)accessoryTintColor;
-(id)initWithConstants:(id)arg1 ;
@end
