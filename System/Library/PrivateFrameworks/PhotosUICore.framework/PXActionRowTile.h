/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:01 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/PXUIViewBasicTile.h>
#import <libobjc.A.dylib/PXReusableObject.h>
#import <libobjc.A.dylib/PXUIWidgetFooterViewDelegate.h>

@protocol PXActionRowTileDelegate;
@class NSString, UIButton, PXUIWidgetFooterView, UIView;

@interface PXActionRowTile : UIView <PXUIViewBasicTile, PXReusableObject, PXUIWidgetFooterViewDelegate> {

	NSString* _title;
	long long _idiom;
	id<PXActionRowTileDelegate> _delegate;
	UIButton* __button;
	PXUIWidgetFooterView* __footer;

}

@property (nonatomic,readonly) UIButton * _button;                                     //@synthesize _button=__button - In the implementation block
@property (nonatomic,readonly) PXUIWidgetFooterView * _footer;                         //@synthesize _footer=__footer - In the implementation block
@property (nonatomic,copy) NSString * title;                                           //@synthesize title=_title - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled; 
@property (assign,nonatomic) long long idiom;                                          //@synthesize idiom=_idiom - In the implementation block
@property (assign,nonatomic,__weak) id<PXActionRowTileDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) UIView * view; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIButton *)_button;
-(void)setIdiom:(long long)arg1 ;
-(void)becomeReusable;
-(void)tintColorDidChange;
-(PXUIWidgetFooterView *)_footer;
-(id)initWithFrame:(CGRect)arg1 ;
-(id<PXActionRowTileDelegate>)delegate;
-(UIView *)view;
-(void)setEnabled:(BOOL)arg1 ;
-(void)widgetFooterView:(id)arg1 didSelectDisclosure:(id)arg2 ;
-(void)didApplyGeometry:(PXTileGeometry*)arg1 withUserData:(id)arg2 ;
-(void)setDelegate:(id<PXActionRowTileDelegate>)arg1 ;
-(void)_setupDecoratedButton;
-(void)handleButtonTap:(id)arg1 forEvent:(id)arg2 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(BOOL)isEnabled;
-(void)prepareForReuse;
-(long long)idiom;
-(void)_updateButtonTitle;
-(void)_setupButton;
@end
