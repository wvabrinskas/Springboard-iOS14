/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:54 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CertInfo.framework/CertInfo
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CertInfo/CertInfo-Structs.h>
#import <UIKitCore/UIView.h>

@class NSString, UIFont, UIImage;

@interface _CertInfoGradientLabel : UIView {

	NSString* _text;
	UIFont* _font;
	UIImage* _checkImage;
	CGColorRef _patternColor;

}
-(void)drawRect:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)dealloc;
-(id)initWithTrusted:(BOOL)arg1 ;
@end

