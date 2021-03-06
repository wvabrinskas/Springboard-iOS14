/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:16 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ProxCardKit.framework/ProxCardKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UITextView.h>
#import <libobjc.A.dylib/PRXTextContainer.h>

@class NSString, NSAttributedString;

@interface PRXTextView : UITextView <PRXTextContainer> {

	long long _style;

}

@property (nonatomic,readonly) long long style;                              //@synthesize style=_style - In the implementation block
@property (nonatomic,copy) NSString * text; 
@property (nonatomic,copy) NSAttributedString * attributedText; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)textViewWithStyle:(long long)arg1 ;
-(id)initWithStyle:(long long)arg1 ;
-(long long)style;
-(void)setTitleText:(id)arg1 ;
@end

