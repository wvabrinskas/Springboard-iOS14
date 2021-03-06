/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:44 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UILegibilityView.h>

@class NSString, UIFont;

@interface _UILegibilityLabel : _UILegibilityView {

	BOOL _usesSecondaryColor;
	NSString* _string;
	UIFont* _font;

}

@property (nonatomic,copy) NSString * string;                        //@synthesize string=_string - In the implementation block
@property (nonatomic,retain) UIFont * font;                          //@synthesize font=_font - In the implementation block
@property (nonatomic,readonly) BOOL usesSecondaryColor;              //@synthesize usesSecondaryColor=_usesSecondaryColor - In the implementation block
@property (nonatomic,readonly) double baselineOffset; 
-(void)setFont:(UIFont *)arg1 ;
-(id)initWithSettings:(id)arg1 strength:(double)arg2 string:(id)arg3 font:(id)arg4 options:(long long)arg5 ;
-(BOOL)usesSecondaryColor;
-(UIFont *)font;
-(id)initWithSettings:(id)arg1 strength:(double)arg2 string:(id)arg3 font:(id)arg4 ;
-(double)baselineOffset;
-(void)updateImage;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setString:(NSString *)arg1 ;
-(NSString *)string;
-(void)dealloc;
@end

