/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:19 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PreferenceBundles/BluetoothSettings.bundle/BluetoothSettings
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/PSHeaderFooterView.h>

@class UIActivityIndicatorView, UILabel, NSString;

@interface DevicesHeaderView : UIView <PSHeaderFooterView> {

	UIActivityIndicatorView* _spinner;
	UILabel* _text;

}

@property (nonatomic,retain) NSString * name; 
@property (nonatomic,retain) UIActivityIndicatorView * spinner;              //@synthesize spinner=_spinner - In the implementation block
@property (nonatomic,retain) UILabel * text;                                 //@synthesize text=_text - In the implementation block
-(void)setText:(UILabel *)arg1 ;
-(UIActivityIndicatorView *)spinner;
-(UILabel *)text;
-(NSString *)name;
-(void)layoutSubviews;
-(double)preferredHeightForWidth:(double)arg1 ;
-(id)initWithSpecifier:(id)arg1 ;
-(void)setSpinner:(UIActivityIndicatorView *)arg1 ;
-(void)setName:(NSString *)arg1 ;
@end

