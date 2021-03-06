/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:05 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HealthExperienceUI.framework/HealthExperienceUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthExperienceUI/HealthExperienceUI-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@interface HealthExperienceUI.HostViewCell : UICollectionViewCell {

	 hostView;
	 recreateViewControllerOnHostedFeedItemChange;
	 item;

}

@property (assign,nonatomic) BOOL highlighted; 
@property (assign,nonatomic) BOOL selected; 
-(void)setSelected:(BOOL)arg1 ;
-(CGSize)systemLayoutSizeFittingSize:(CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)isSelected;
-(BOOL)isHighlighted;
-(id)initWithCoder:(id)arg1 ;
-(void)prepareForReuse;
-(void)setHighlighted:(BOOL)arg1 ;
@end

