/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:44 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SpeechRecognitionCommandAndControl/SpeechRecognitionCommandAndControl-Structs.h>
#import <UIKitCore/UIView.h>

@class NSAttributedString, NSString, NSLayoutConstraint, UILabel, UIImageView, UIView;

@interface CACBannerView : UIView {

	NSAttributedString* _attributedText;
	NSString* _symbolImage;
	NSLayoutConstraint* _imageToTextConstraint;
	UILabel* _textLabel;
	UIImageView* _accessoryImageView;
	UIView* _baseView;

}

@property (nonatomic,retain) NSLayoutConstraint * imageToTextConstraint;              //@synthesize imageToTextConstraint=_imageToTextConstraint - In the implementation block
@property (nonatomic,retain) UILabel * textLabel;                                     //@synthesize textLabel=_textLabel - In the implementation block
@property (nonatomic,retain) UIImageView * accessoryImageView;                        //@synthesize accessoryImageView=_accessoryImageView - In the implementation block
@property (nonatomic,retain) UIView * baseView;                                       //@synthesize baseView=_baseView - In the implementation block
@property (nonatomic,retain) NSString * text; 
@property (nonatomic,retain) NSAttributedString * attributedText;                     //@synthesize attributedText=_attributedText - In the implementation block
@property (nonatomic,retain) NSString * symbolImage;                                  //@synthesize symbolImage=_symbolImage - In the implementation block
-(void)setText:(NSString *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)hitTest:(CGPoint)arg1 forEvent:(GSEventRef)arg2 ;
-(NSString *)text;
-(UIImageView *)accessoryImageView;
-(UILabel *)textLabel;
-(void)setTextLabel:(UILabel *)arg1 ;
-(UIView *)baseView;
-(NSAttributedString *)attributedText;
-(void)setAttributedText:(NSAttributedString *)arg1 ;
-(void)setSymbolImage:(NSString *)arg1 ;
-(NSString *)symbolImage;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setBaseView:(UIView *)arg1 ;
-(void)setAccessoryImageView:(UIImageView *)arg1 ;
-(void)setImageToTextConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)imageToTextConstraint;
@end

