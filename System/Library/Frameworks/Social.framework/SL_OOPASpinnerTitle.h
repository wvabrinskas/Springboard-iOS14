/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:39 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/Social.framework/Social
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Social/Social-Structs.h>
#import <UIKitCore/UIView.h>

@class UILabel, UIActivityIndicatorView, NSString;

@interface SL_OOPASpinnerTitle : UIView {

	UILabel* _titleView;
	UIActivityIndicatorView* _spinner;

}

@property (nonatomic,copy) NSString * title; 
-(id)init;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(NSString *)title;
-(void)startAnimating;
-(void)setTitle:(NSString *)arg1 ;
-(void)stopAnimating;
-(void)dealloc;
@end
