/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:11 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MapKit/MapKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/MKActivityObserving.h>

@protocol UGCCallToActionEditAccessoryViewDelegate;
@class UIButton, UIActivityIndicatorView, NSString;

@interface MKUGCCallToActionEditAccessoryView : UIView <MKActivityObserving> {

	UIButton* _editButton;
	UIActivityIndicatorView* _spinner;
	id<UGCCallToActionEditAccessoryViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<UGCCallToActionEditAccessoryViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 ;
-(id<UGCCallToActionEditAccessoryViewDelegate>)delegate;
-(void)setDelegate:(id<UGCCallToActionEditAccessoryViewDelegate>)arg1 ;
-(void)_setupEditButton;
-(void)_editButtonPressed;
-(void)beginAnimatingActivityIndicator;
-(void)endAnimatingActivityIndicatorWithError:(id)arg1 ;
-(void)_contentSizeChanged;
@end

