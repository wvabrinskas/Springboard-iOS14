/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:59 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SafariServices/SafariServices-Structs.h>
#import <UIKitCore/UIView.h>

@class UIVisualEffectView, UIView, UILabel, _SFBarTheme, UIButton, NSString;

@interface _SFCrashBanner : UIView {

	UIVisualEffectView* _backdrop;
	UIVisualEffectView* _contentEffectView;
	UIView* _separator;
	UILabel* _label;
	CGSize _cachedLabelLayoutSize;
	_SFBarTheme* _theme;
	UIButton* _closeButton;
	unsigned long long _type;
	NSString* _bannerText;
	NSString* _manuallyWrappedBannerText;

}

@property (nonatomic,retain) _SFBarTheme * theme;                                 //@synthesize theme=_theme - In the implementation block
@property (nonatomic,retain) UIButton * closeButton;                              //@synthesize closeButton=_closeButton - In the implementation block
@property (nonatomic,copy) NSString * backdropGroupName; 
@property (assign,nonatomic) unsigned long long type;                             //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSString * bannerText;                             //@synthesize bannerText=_bannerText - In the implementation block
@property (nonatomic,readonly) NSString * manuallyWrappedBannerText;              //@synthesize manuallyWrappedBannerText=_manuallyWrappedBannerText - In the implementation block
-(void)setBackdropGroupName:(NSString *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIButton *)closeButton;
-(BOOL)_shouldUseManuallyWrappedCrashMessageForWidth:(double)arg1 ;
-(CGSize)_labelLayoutSizeForWidth:(double)arg1 ;
-(void)setBannerText:(id)arg1 manuallyWrappedBannerText:(id)arg2 ;
-(NSString *)manuallyWrappedBannerText;
-(_SFBarTheme *)theme;
-(void)setType:(unsigned long long)arg1 ;
-(NSString *)backdropGroupName;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(unsigned long long)type;
-(void)setCloseButton:(UIButton *)arg1 ;
-(void)setTheme:(_SFBarTheme *)arg1 ;
-(NSString *)bannerText;
@end
