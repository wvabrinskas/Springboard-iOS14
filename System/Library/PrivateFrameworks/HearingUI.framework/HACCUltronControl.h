/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:24 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HearingUI.framework/HearingUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HearingUI/HearingUI-Structs.h>
#import <UIKitCore/UIControl.h>
#import <libobjc.A.dylib/HACCContentModule.h>

@protocol HACCContentModuleDelegate;
@class UIView, UILabel, NSString;

@interface HACCUltronControl : UIControl <HACCContentModule> {

	BOOL _isListening;
	unsigned long long module;
	id<HACCContentModuleDelegate> delegate;
	UIView* _container;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;

}

@property (nonatomic,retain) UIView * container;                                         //@synthesize container=_container - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                       //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * subtitleLabel;                                    //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (assign,nonatomic,__weak) id<HACCContentModuleDelegate> delegate; 
@property (assign,nonatomic) unsigned long long module; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UILabel *)titleLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(BOOL)enabled;
-(void)buttonTapped:(id)arg1 ;
-(void)setSubtitleLabel:(UILabel *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(unsigned long long)module;
-(id<HACCContentModuleDelegate>)delegate;
-(void)updateValue;
-(BOOL)isRunning;
-(UILabel *)subtitleLabel;
-(void)setContainer:(UIView *)arg1 ;
-(void)setDelegate:(id<HACCContentModuleDelegate>)arg1 ;
-(void)setModule:(unsigned long long)arg1 ;
-(UIView *)container;
-(id)contentValue;
@end

