/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:29 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ActionKitUI.framework/ActionKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ActionKitUI/ActionKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@protocol WFRemoteFileStatusViewDelegate;
@class UIView, UIActivityIndicatorView, UILabel, UIButton, NSArray;

@interface WFRemoteFileStatusView : UIView {

	id<WFRemoteFileStatusViewDelegate> _delegate;
	UIView* _containerView;
	UIActivityIndicatorView* _indicatorView;
	UILabel* _statusLabel;
	UIButton* _recoveryButton;
	NSArray* _emptyConstraints;
	NSArray* _loadingContraints;
	NSArray* _errorConstraints;

}

@property (nonatomic,readonly) UIView * containerView;                                        //@synthesize containerView=_containerView - In the implementation block
@property (nonatomic,readonly) UIActivityIndicatorView * indicatorView;                       //@synthesize indicatorView=_indicatorView - In the implementation block
@property (nonatomic,readonly) UILabel * statusLabel;                                         //@synthesize statusLabel=_statusLabel - In the implementation block
@property (nonatomic,readonly) UIButton * recoveryButton;                                     //@synthesize recoveryButton=_recoveryButton - In the implementation block
@property (nonatomic,readonly) NSArray * emptyConstraints;                                    //@synthesize emptyConstraints=_emptyConstraints - In the implementation block
@property (nonatomic,readonly) NSArray * loadingContraints;                                   //@synthesize loadingContraints=_loadingContraints - In the implementation block
@property (nonatomic,readonly) NSArray * errorConstraints;                                    //@synthesize errorConstraints=_errorConstraints - In the implementation block
@property (assign,nonatomic,__weak) id<WFRemoteFileStatusViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(id<WFRemoteFileStatusViewDelegate>)delegate;
-(void)setEmpty;
-(void)setError:(id)arg1 ;
-(UILabel *)statusLabel;
-(UIView *)containerView;
-(void)setDelegate:(id<WFRemoteFileStatusViewDelegate>)arg1 ;
-(UIActivityIndicatorView *)indicatorView;
-(void)recoveryButtonTapped;
-(void)setLoading;
-(UIButton *)recoveryButton;
-(NSArray *)emptyConstraints;
-(NSArray *)loadingContraints;
-(NSArray *)errorConstraints;
@end

