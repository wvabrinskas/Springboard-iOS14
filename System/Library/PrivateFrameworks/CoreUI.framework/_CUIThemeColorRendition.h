/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:58 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreUI/CoreUI-Structs.h>
#import <CoreUI/CUIThemeRendition.h>

@class NSString;

@interface _CUIThemeColorRendition : CUIThemeRendition {

	CGColorRef _cgColor;
	const csicolor* _csiColor;
	NSString* _colorName;

}
-(id)_initWithCSIHeader:(const csiheader*)arg1 ;
-(id)systemColorName;
-(const csicolor*)csiColor;
-(BOOL)substituteWithSystemColor;
-(void)dealloc;
-(CGColorRef)cgColor;
@end

