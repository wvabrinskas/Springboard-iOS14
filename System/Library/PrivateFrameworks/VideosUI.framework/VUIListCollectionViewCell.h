/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:37 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UICollectionViewCell.h>

@class UIColor;

@interface VUIListCollectionViewCell : UICollectionViewCell {

	BOOL _shouldAppearSelected;
	UIColor* _backgroundColor;
	UIColor* _highlightedBackgroundColor;

}

@property (nonatomic,retain) UIColor * backgroundColor;                         //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,retain) UIColor * highlightedBackgroundColor;              //@synthesize highlightedBackgroundColor=_highlightedBackgroundColor - In the implementation block
@property (assign,nonatomic) BOOL shouldAppearSelected;                         //@synthesize shouldAppearSelected=_shouldAppearSelected - In the implementation block
-(void)setSelected:(BOOL)arg1 ;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)backgroundColor;
-(UIColor *)highlightedBackgroundColor;
-(void)setHighlightedBackgroundColor:(UIColor *)arg1 ;
-(void)prepareForReuse;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)setShouldAppearSelected:(BOOL)arg1 ;
-(BOOL)shouldAppearSelected;
@end

