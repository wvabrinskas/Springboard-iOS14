/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:37 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaControls/MediaControls-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/MRUVisualStylingProviderObserver.h>

@class NSString, MRUVisualStylingProvider, UILabel, MRUEqualizerView;

@interface MRURoutingSubtitleView : UIView <MRUVisualStylingProviderObserver> {

	long long _state;
	NSString* _text;
	MRUVisualStylingProvider* _stylingProvider;
	UILabel* _textLabel;
	MRUEqualizerView* _equalizerView;

}

@property (nonatomic,retain) UILabel * textLabel;                                     //@synthesize textLabel=_textLabel - In the implementation block
@property (nonatomic,retain) MRUEqualizerView * equalizerView;                        //@synthesize equalizerView=_equalizerView - In the implementation block
@property (assign,nonatomic) long long state;                                         //@synthesize state=_state - In the implementation block
@property (nonatomic,copy) NSString * text;                                           //@synthesize text=_text - In the implementation block
@property (nonatomic,retain) MRUVisualStylingProvider * stylingProvider;              //@synthesize stylingProvider=_stylingProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setText:(NSString *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setState:(long long)arg1 ;
-(NSString *)text;
-(long long)state;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)updateVisualStyling;
-(UILabel *)textLabel;
-(void)updateVisibility;
-(void)setTextLabel:(UILabel *)arg1 ;
-(void)prepareForReuse;
-(void)setStylingProvider:(MRUVisualStylingProvider *)arg1 ;
-(MRUVisualStylingProvider *)stylingProvider;
-(void)visualStylingProviderDidChange:(id)arg1 ;
-(void)updateContentSizeCategory;
-(MRUEqualizerView *)equalizerView;
-(void)setEqualizerView:(MRUEqualizerView *)arg1 ;
@end
