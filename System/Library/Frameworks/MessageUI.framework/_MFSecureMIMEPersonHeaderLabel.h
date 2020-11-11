/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:07 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MessageUI/MessageUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImageView, UILabel, NSString;

@interface _MFSecureMIMEPersonHeaderLabel : UIView {

	UIImageView* _imageView;
	UILabel* _label;

}

@property (nonatomic,copy) NSString * text; 
-(void)setText:(NSString *)arg1 ;
-(NSString *)text;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)initWithImage:(id)arg1 text:(id)arg2 textColor:(id)arg3 ;
@end
