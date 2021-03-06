/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:40 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIViewController.h>

@class IKViewElement, NSTimer, VUIConfirmationCardView;

@interface VUIConfirmationCardTemplateController : UIViewController {

	BOOL _setTimer;
	IKViewElement* _viewElement;
	NSTimer* _dismissTimer;

}

@property (nonatomic,retain) IKViewElement * viewElement;                       //@synthesize viewElement=_viewElement - In the implementation block
@property (nonatomic,readonly) NSTimer * dismissTimer;                          //@synthesize dismissTimer=_dismissTimer - In the implementation block
@property (nonatomic,readonly) VUIConfirmationCardView * cardView; 
-(void)_setupTimer;
-(void)_applicationDidEnterBackground:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(VUIConfirmationCardView *)cardView;
-(NSTimer *)dismissTimer;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)loadView;
-(void)dealloc;
-(IKViewElement *)viewElement;
-(void)setViewElement:(IKViewElement *)arg1 ;
-(void)updateWithViewElement:(id)arg1 ;
-(void)_dismissConfirmation:(id)arg1 ;
@end

