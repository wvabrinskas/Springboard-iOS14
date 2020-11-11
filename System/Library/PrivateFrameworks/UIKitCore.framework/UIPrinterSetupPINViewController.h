/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:51 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIViewController.h>

@class PKPrinter, UIPrinterSetupConnectingView, UIPrinterSetupPINView, UIScrollView;

@interface UIPrinterSetupPINViewController : UIViewController {

	PKPrinter* _printer;
	UIPrinterSetupConnectingView* _connectingView;
	UIPrinterSetupPINView* _PINView;
	UIScrollView* _scrollView;

}

@property (nonatomic,retain) PKPrinter * printer;                                        //@synthesize printer=_printer - In the implementation block
@property (nonatomic,retain) UIPrinterSetupConnectingView * connectingView;              //@synthesize connectingView=_connectingView - In the implementation block
@property (nonatomic,retain) UIPrinterSetupPINView * PINView;                            //@synthesize PINView=_PINView - In the implementation block
@property (nonatomic,retain) UIScrollView * scrollView;                                  //@synthesize scrollView=_scrollView - In the implementation block
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(void)connected:(BOOL)arg1 ;
-(PKPrinter *)printer;
-(UIPrinterSetupPINView *)PINView;
-(void)setPrinter:(PKPrinter *)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(unsigned long long)supportedInterfaceOrientations;
-(id)initWithPrinter:(id)arg1 ;
-(void)setConnectingView:(UIPrinterSetupConnectingView *)arg1 ;
-(UIScrollView *)scrollView;
-(void)showSetup;
-(UIPrinterSetupConnectingView *)connectingView;
-(void)connectToPrinter;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)loadView;
-(void)setPINView:(UIPrinterSetupPINView *)arg1 ;
-(void)showFailure;
-(void)setScrollView:(UIScrollView *)arg1 ;
-(void)dealloc;
@end
