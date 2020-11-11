/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:16 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ProxCardKit.framework/ProxCardKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ProxCardKit/ProxCardKit-Structs.h>
#import <UIKitCore/UIView.h>

@class PRXLabel, UIActivityIndicatorView, NSLayoutConstraint;

@interface PRXActivityStatusView : UIView {

	PRXLabel* _statusLabel;
	UIActivityIndicatorView* _activityIndicator;
	NSLayoutConstraint* _activityIndicatorVerticalConstraint;

}

@property (nonatomic,readonly) NSLayoutConstraint * activityIndicatorVerticalConstraint;              //@synthesize activityIndicatorVerticalConstraint=_activityIndicatorVerticalConstraint - In the implementation block
@property (nonatomic,readonly) PRXLabel * statusLabel;                                                //@synthesize statusLabel=_statusLabel - In the implementation block
@property (nonatomic,readonly) UIActivityIndicatorView * activityIndicator;                           //@synthesize activityIndicator=_activityIndicator - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(UIActivityIndicatorView *)activityIndicator;
-(PRXLabel *)statusLabel;
-(void)traitCollectionDidChange:(id)arg1 ;
-(NSLayoutConstraint *)activityIndicatorVerticalConstraint;
@end
