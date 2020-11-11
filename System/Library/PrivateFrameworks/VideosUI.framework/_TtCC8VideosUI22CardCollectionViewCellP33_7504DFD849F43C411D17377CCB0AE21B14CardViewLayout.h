/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:42 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VideosUI/VideosUI-Structs.h>
#import <VideosUI/VUICardViewLayout.h>

@class NSShadow, UIColor, TVImageLayout, VUITextLayout, VUIButtonLayout;

@interface _TtCC8VideosUI22CardCollectionViewCellP33_7504DFD849F43C411D17377CCB0AE21B14CardViewLayout : VUICardViewLayout {

	 cardViewLayout;

}

@property (readonly,nonatomic) BOOL hideFloatingBackground; 
@property (readonly,nonatomic) NSShadow * shadow; 
@property (readonly,nonatomic) TVCornerRadii borderRadii; 
@property (readonly,nonatomic) UIColor * backgroundColor; 
@property (readonly,nonatomic) UIColor * darkBackgroundColor; 
@property (readonly,nonatomic) UIColor * highlightColor; 
@property (readonly,nonatomic) UIColor * darkHighlightColor; 
@property (readonly,nonatomic) long long imagePosition; 
@property (readonly,nonatomic) TVImageLayout * imageLayout; 
@property (readonly,nonatomic) TVImageLayout * appImageLayout; 
@property (readonly,nonatomic) VUITextLayout * titleTextLayout; 
@property (readonly,nonatomic) VUITextLayout * subtitleTextLayout; 
@property (readonly,nonatomic) VUITextLayout * secondaryTextLayout; 
@property (readonly,nonatomic) VUITextLayout * detailsTextLayout; 
@property (readonly,nonatomic) VUIButtonLayout * buttonLayout; 
-(NSShadow *)shadow;
-(long long)imagePosition;
-(id)init;
-(TVCornerRadii)borderRadii;
-(UIColor *)backgroundColor;
-(UIColor *)highlightColor;
-(VUITextLayout *)titleTextLayout;
-(TVImageLayout *)imageLayout;
-(TVImageLayout *)appImageLayout;
-(VUITextLayout *)subtitleTextLayout;
-(UIColor *)darkHighlightColor;
-(VUITextLayout *)secondaryTextLayout;
-(VUITextLayout *)detailsTextLayout;
-(VUIButtonLayout *)buttonLayout;
-(BOOL)hideFloatingBackground;
-(UIColor *)darkBackgroundColor;
@end
