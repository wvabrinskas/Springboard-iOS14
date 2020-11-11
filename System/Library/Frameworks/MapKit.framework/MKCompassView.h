/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:14 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MapKit/MapKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/MKCompassView.h>

@protocol MKCompassView <NSObject>
@property (assign,nonatomic) double mapHeading; 
@required
-(void)setMapHeading:(double)arg1;
-(double)mapHeading;

@end


@class UIImageView, NSString;

@interface MKCompassView : UIView <MKCompassView> {

	UIImageView* _imageView;
	long long _compassViewSize;
	long long _compassViewStyle;

}

@property (assign,nonatomic) double mapHeading; 
@property (nonatomic,readonly) long long compassViewSize;               //@synthesize compassViewSize=_compassViewSize - In the implementation block
@property (nonatomic,readonly) long long compassViewStyle;              //@synthesize compassViewStyle=_compassViewStyle - In the implementation block
@property (assign,nonatomic) double yaw; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_parameterForSize:(long long)arg1 ;
+(id)_parameterForStyle:(long long)arg1 ;
-(double)yaw;
-(CGSize)intrinsicContentSize;
-(void)_updateStyle;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)movedToWindow:(id)arg1 ;
-(void)setMapHeading:(double)arg1 ;
-(void)setCompassViewSize:(long long)arg1 style:(long long)arg2 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(long long)compassViewSize;
-(long long)compassViewStyle;
-(void)layoutSubviews;
-(void)updateLocale:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)_commonInit;
-(double)mapHeading;
-(void)setYaw:(double)arg1 ;
-(void)_updateLayerForCurrentSizeAndStyle;
-(void)_adaptCompassStyleToUserInterfaceStyle;
-(BOOL)isPointInNorthEastHalf:(CGPoint)arg1 ;
-(void)dealloc;
@end
