/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:06 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class SKUIColorScheme, UILabel, UIActivityIndicatorView, NSString;

@interface SKUILoadingView : UIView {

	SKUIColorScheme* _colorScheme;
	UILabel* _label;
	UIActivityIndicatorView* _spinner;

}

@property (nonatomic,copy) SKUIColorScheme * colorScheme;              //@synthesize colorScheme=_colorScheme - In the implementation block
@property (nonatomic,copy) NSString * loadingText; 
+(id)defaultLoadingTextWithClientContext:(id)arg1 ;
-(void)willMoveToSuperview:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(NSString *)loadingText;
-(void)setLoadingText:(NSString *)arg1 ;
-(SKUIColorScheme *)colorScheme;
-(void)setColorScheme:(SKUIColorScheme *)arg1 ;
@end

