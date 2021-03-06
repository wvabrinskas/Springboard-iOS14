/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:35 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AvatarUI/AvatarUI-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class NSString, UILabel, NSTimer;

@interface AVTGroupDialCell : UICollectionViewCell {

	NSString* _string;
	UILabel* _label;
	NSTimer* _shimmerTimer;

}

@property (nonatomic,readonly) UILabel * label;                   //@synthesize label=_label - In the implementation block
@property (nonatomic,retain) NSTimer * shimmerTimer;              //@synthesize shimmerTimer=_shimmerTimer - In the implementation block
@property (nonatomic,copy) NSString * string;                     //@synthesize string=_string - In the implementation block
+(id)labelFont;
+(id)boldLabelFont;
+(id)cellIdentifier;
-(UILabel *)label;
-(void)startShimmering;
-(void)stopShimmeringAnimated:(BOOL)arg1 ;
-(void)setActiveItem:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(NSTimer *)shimmerTimer;
-(void)cancelShimmerTimer;
-(void)setShimmerTimer:(NSTimer *)arg1 ;
-(void)shimmerOnceWithCompletion:(/*^block*/id)arg1 ;
-(void)setString:(NSString *)arg1 ;
-(void)prepareForReuse;
-(NSString *)string;
@end

